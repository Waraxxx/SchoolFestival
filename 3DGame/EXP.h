//========================================================================================
//
// 経験値処理 [meter.h]
// Author : Seiya Takahashi
//
//========================================================================================
#ifndef _EXP_H_
#define _EXP_H_

//========================================================================================
// インクルードファイル
//========================================================================================
#include "main.h"

//=============================================================================
// 構造体の定義
//=============================================================================
typedef struct
{
	float fNowEXP;									//現在の経験値
	float fHeight;									//画像の幅の最大値
} EXP;

//========================================================================================
// プロトタイプ宣言
//========================================================================================
void InitEXP(void);
void UninitEXP(void);
void UpdateEXP(void);
void DrawEXP(void);
void SetVertexEXP(int index, D3DXVECTOR3 pos, D3DXCOLOR col, float fWidth, float fHeight);
EXP GetEXP(void);
#endif
