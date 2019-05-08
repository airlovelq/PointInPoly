#pragma once
#ifdef _MSC_VER
    #ifdef POINTINPOLY_EXPORTS
        #define _PIPIMOREX _declspec(dllexport)
    #else
        #define _PIPIMOREX _declspec(dllimport)
    #endif
#else
    #ifdef __GNUC__ >= 4
        #ifdef POINTINPOLY_EXPORTS
            #define _PIPIMOREX __attribute__((visibility("default")))
        #else
            #define _PIPIMOREX __attribute__((visibility("hidden")))
        #endif
    #else
        #define _PIPIMOREX
    #endif
#endif
typedef struct Point {
	double x;
	double y;
}Pt;
extern "C" _PIPIMOREX bool IsPointInPoly(Pt pt, Pt* ptlist, int ptlen);