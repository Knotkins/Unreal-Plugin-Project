using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.InteropServices;

[StructLayout(LayoutKind.Sequential)]
public struct MyStruct
{
    public float varA;
    public bool varB;
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
    public float[] varC;
}
public class PluginUser : MonoBehaviour
{

    const string dll = "DLL2";
    [DllImport(dll)]
    private static extern IntPtr GetStruct();

    [DllImport(dll)]
    private static extern void SetStruct(IntPtr t_, float varA_, bool
    varB_, float varC1_, float varC2_, float varC3_);

    [DllImport(dll)]
    private static extern void setPrefab(GameObject gameObject_);

    private void Start()
    {
        MyStruct t = (MyStruct)Marshal.PtrToStructure(GetStruct(), typeof(MyStruct));
        IntPtr tPtr = Marshal.AllocHGlobal(Marshal.SizeOf(t));
        Marshal.StructureToPtr(t, tPtr, true);

        SetStruct(tPtr, 1.5f, true, 1, 2, 3);
    }

    public Vector3 worldPosition;

    void Update()
    {
        Plane plane = new Plane(Vector3.up, 0);
        MyStruct t = (MyStruct)Marshal.PtrToStructure(GetStruct(), typeof(MyStruct));
        IntPtr tPtr = Marshal.AllocHGlobal(Marshal.SizeOf(t));

        float distance;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if (plane.Raycast(ray, out distance))
        {
            worldPosition = ray.GetPoint(distance);
            SetStruct(tPtr, 1.5f, true, worldPosition.x, worldPosition.y, worldPosition.z);
            this.gameObject.transform.position = new Vector3 (t.varC[0], t.varC[1], t.varC[2]);
        }

    }
}
