
#pragma once


class cGameApp : public framework::cGameMain
{
public:
	cGameApp();
	virtual ~cGameApp();

	virtual bool OnInit() override;
	virtual void OnUpdate(const float elapseT) override;
	virtual void OnRender(const float elapseT) override;
	virtual void OnShutdown() override;
	virtual void MessageProc( UINT message, WPARAM wParam, LPARAM lParam) override;


protected:
	bool ReadModelFile( const string &fileName, 
		graphic::cVertexBuffer &vtxBuff, int &vtxSize,  
		LPDIRECT3DINDEXBUFFER9 &idxBuff, int &faceSize );

	void ComputeNormals(graphic::cVertexBuffer &vtxBuff, int vtxSize,  
		LPDIRECT3DINDEXBUFFER9 idxBuff, int faceSize);


private:
	//LPDIRECT3DVERTEXBUFFER9 m_pVB; // ���ؽ� ����
	graphic::cVertexBuffer m_vtxBuff;
	LPDIRECT3DINDEXBUFFER9 m_pIB; // �ε��� ����
	int m_VtxSize;
	int m_FaceSize;
	graphic::cMaterial m_mtrl;

	D3DLIGHT9 m_Light;
};