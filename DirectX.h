#pragma once
class DirectX
{
public:
	IDXGISwapChain* m_swapChain; //����������
	ID3D11Device* m_device;  //�豸����
	ID3D11DeviceContext* m_deviceContext; //�豸�����Ķ���
	ID3D11RenderTargetView* m_renderTargetView; //��ȾĿ����ͼ

	static DirectX* __fastcall GetInstance();
	char* __fastcall GetCardDescription();
	int __fastcall GetCardMemory();
	void __fastcall  EndScene();

	void __fastcall CreateRenderTarget();
	void __fastcall CleanupRenderTarget();
	bool __fastcall Initialize(int, int, bool, HWND);
	void __fastcall CleanupDevice();

private:
	DirectX();
	bool m_vsync_enabled; //�Ƿ����ô�ֱͬ��
	int m_videoCardMemory; //�Դ��С
	char m_videoCardDescription[128]; //�Կ�����

	static DirectX* m_pInstance;
};