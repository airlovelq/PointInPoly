#include "PublicFunction.h"
#include <math.h>
bool IsIntersect(Pt pt0, Pt pt1, Pt pt2)
{
	bool b1 = (((pt0.x < pt1.x) && (pt0.x >= pt2.x)) ||
		((pt0.x < pt2.x) && (pt0.x >= pt1.x)));
	double k = (pt2.y - pt1.y) / (pt2.x - pt1.x);
	bool b2 = (pt0.y < (k*(pt0.x - pt1.x) + pt1.y));
	return b1&&b2;
}