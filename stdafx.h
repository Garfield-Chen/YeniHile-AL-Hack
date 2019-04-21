// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include <SDKDDKVer.h>
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�: 
#include <windows.h>

using namespace std;
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <iostream>
#include <sstream>
#include <string>
#include <TlHelp32.h>
#include <list>

#include <d3d11.h>
#include <dxgi.h>
#include <d3dcompiler.h>
#pragma  comment(lib,"d3d11.lib")
#pragma  comment(lib,"dxgi.lib")
#pragma  comment(lib,"d3dcompiler.lib")

#include "Imgui/imgui.h"
#include "Imgui/imgui_impl_dx11.h"
#include "ImGui/imgui_internal.h"
#include "DirectX SDK\xnamath.h"
#include "DirectX SDK\D3DX11tex.h"
#pragma comment(lib,"D3DX11.lib")

#include "Math\Vector3.h"
#include "Math\Vector2.h"

#include "Texture.h"
#include "Renderer.h"
#include "VMPstr.h"
#include "Settings.h"*
#include "Helpers.h"
#include "GameManager.h"
#include "Administer.h"
#include "Input.h"

#include "Menu.h"
#include "MenuItem.h"
#include "ESP.h"
#include "AimBot.h"
#include "Misc.h"
#include "VMProtectSDK.h"
#include "myyanzheng.h"
#include "Process.h"

// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
