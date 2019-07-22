//=============================================================================
//
// ���C�g���� [light.cpp]
// Author : masayasu wakita
//
//=============================================================================
#include "light.h"
#include "input.h"

//=============================================================================
// �}�N����`
//=============================================================================

//=============================================================================
// �v���g�^�C�v�錾
//=============================================================================


//=============================================================================
// �O���[�o���ϐ�
//=============================================================================
D3DLIGHT9 g_aLight[3];			//���C�g���

//=============================================================================
// ���C�g�̏���������
//=============================================================================
void InitLight(void)
{
	LPDIRECT3DDEVICE9 pDevice = GetDevice();	// �f�o�C�X�̎擾
	D3DXVECTOR3 vecDir[3];						//�ݒ�p�x�N�g��

	// ���C�g���N���A����
	for (int nCount = 0; nCount < 3; nCount++)
	{
		ZeroMemory(&g_aLight[nCount], sizeof(D3DLIGHT9));
	}

	// ���C�g�̎�ނ�ݒ�
	g_aLight[0].Type = D3DLIGHT_DIRECTIONAL;
	// ���C�g�̎�ނ�ݒ�
	g_aLight[1].Type = D3DLIGHT_DIRECTIONAL;
	// ���C�g�̎�ނ�ݒ�
	g_aLight[2].Type = D3DLIGHT_DIRECTIONAL;

	// ���C�g�̊g�U����ݒ�
	g_aLight[0].Diffuse = D3DXCOLOR(1.0f, 1.0f, 1.0f, 0.0f);
	// ���C�g�̊g�U����ݒ�
	g_aLight[1].Diffuse = D3DXCOLOR(0.65f, 0.65f, 0.65f, 0.0f);
	// ���C�g�̊g�U����ݒ�
	g_aLight[2].Diffuse = D3DXCOLOR(0.15f, 0.15f, 0.15f, 0.0f);

	// ���C�g�̕����̐ݒ�
	vecDir[0] = D3DXVECTOR3(0.22f, -0.87f, 0.44f);
	D3DXVec3Normalize(&vecDir[0], &vecDir[0]);			//���K������
	g_aLight[0].Direction = vecDir[0];

	// ���C�g�̕����̐ݒ�
	vecDir[1] = D3DXVECTOR3(-0.18f, 0.88f, -0.44f);
	D3DXVec3Normalize(&vecDir[1], &vecDir[1]);			//���K������
	g_aLight[1].Direction = vecDir[1];

	// ���C�g�̕����̐ݒ�
	vecDir[2] = D3DXVECTOR3(0.0f, -0.11f, -0.11f);
	D3DXVec3Normalize(&vecDir[2], &vecDir[2]);			//���K������
	g_aLight[2].Direction = vecDir[2];

	// ���C�g��ݒ肷��
	pDevice->SetLight(0, &g_aLight[0]);

	// ���C�g��ݒ肷��
	pDevice->SetLight(1, &g_aLight[1]);

	// ���C�g��ݒ肷��
	pDevice->SetLight(2, &g_aLight[2]);

	// ���C�g��L���ɂ���
	pDevice->LightEnable(0, TRUE);

	// ���C�g��L���ɂ���
	pDevice->LightEnable(1, TRUE);
	
	// ���C�g��L���ɂ���
	pDevice->LightEnable(2, TRUE);
}

//=============================================================================
// ���C�g�̏I������
//=============================================================================
void UninitLight(void)
{

}

//=============================================================================
// ���C�g�̍X�V����
//=============================================================================
void UpdateLight(void)
{

}