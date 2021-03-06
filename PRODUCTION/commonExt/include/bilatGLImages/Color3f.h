#ifndef COLOR_3F_H
#define COLOR_3F_H
#include "envGLImage.h"
class Colorf;
class CBI_GLIMAGE Colorf
    {
    public:
	Colorf(float red = 0.0f, float green = 0.0f, float blue = 0.0f, float alpha = 0.0f);
	Colorf(const Colorf& source);
	virtual ~Colorf();

	inline float getRed() const
	    {
	    return tabColor[0];
	    }

	inline float getGreen() const
	    {
	    return tabColor[1];
	    }

	inline float getBlue() const
	    {
	    return tabColor[2];
	    }

	inline float getAlpha() const
	    {
	    return tabColor[3];
	    }

	inline void setRed(float red)
	    {
	    tabColor[0] = red;
	    }

	inline void setGreen(float green)
	    {
	    tabColor[1] = green;
	    }
	inline void setBlue(float blue)
	    {
	    tabColor[2] = blue;
	    }

	inline void setAlpha(float alpha)
	    {
	    tabColor[3] = alpha;
	    }

	inline float* getTabColor()
	    {
	    return tabColor;
	    }

	static Colorf toHSB(float h01,float s01,float b01,float a01=1.0f);

    private:

	float tabColor[4];
    };

#endif
