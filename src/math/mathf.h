
#ifndef _MATH_MATHF_H
#define _MATH_MATHF_H

int randomInt();
int randomInRange(int min, int maxPlusOne);
float randomInRangef(float min, float maxPlusOne);

float mathfLerp(float from, float to, float t);
float mathfInvLerp(float from, float to, float value);
float mathfMoveTowards(float from, float to, float maxMove);
float mathfBounceBackLerp(float t);
float mathfRandomFloat();
float mathfMod(float input, float divisor);
float clampf(float input, float min, float max);
float signf(float input);

int sign(int input);
int abs(int input);

float sqrtf(float in);
float powf(float base, float exp);

float cosf(float in);
float sinf(float in);
double atan2(double x, double y);
double asin(double in);
float fabsf(float in);
float floorf(float in);
float ceilf(float in);

float minf(float a, float b);
float maxf(float a, float b);

char floatTos8norm(float input);

float safeInvert(float input);

#define isnan(a) ((a) != (a))

#endif