/* Utilities.c generated by valac 0.40.23, the Vala compiler
 * generated from Utilities.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>




gdouble _r (gint red);
gdouble _g (gint green);
gdouble _b (gint blue);


gdouble
_r (gint red)
{
	gdouble result = 0.0;
#line 2 "/home/horacio/Vala/TradeSim/src/Utils/Utilities.vala"
	result = red / 255.00;
#line 2 "/home/horacio/Vala/TradeSim/src/Utils/Utilities.vala"
	return result;
#line 28 "Utilities.c"
}


gdouble
_g (gint green)
{
	gdouble result = 0.0;
#line 6 "/home/horacio/Vala/TradeSim/src/Utils/Utilities.vala"
	result = green / 255.00;
#line 6 "/home/horacio/Vala/TradeSim/src/Utils/Utilities.vala"
	return result;
#line 40 "Utilities.c"
}


gdouble
_b (gint blue)
{
	gdouble result = 0.0;
#line 10 "/home/horacio/Vala/TradeSim/src/Utils/Utilities.vala"
	result = blue / 255.00;
#line 10 "/home/horacio/Vala/TradeSim/src/Utils/Utilities.vala"
	return result;
#line 52 "Utilities.c"
}



