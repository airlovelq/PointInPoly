// PointInPoly.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "PointInPoly.h"
#include "PublicFunction.h"
extern "C" bool IsPointInPoly(Pt pt, Pt* ptlist, int ptlen)
{
	int nptinter = 0;
	for (int i = 0; i < ptlen - 1; i++)
	{
		if (IsIntersect(pt, ptlist[i], ptlist[i + 1]))
			nptinter++;
	}
	if (IsIntersect(pt, ptlist[0], ptlist[ptlen - 1]))
		nptinter++;
	return (nptinter % 2);
}
