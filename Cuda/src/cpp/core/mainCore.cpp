#include <iostream>
#include <stdlib.h>
#include "limits.h"
#include "Device.h"
#include "cudaTools.h"

using std::cout;
using std::endl;

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Imported	 	*|
 \*-------------------------------------*/

extern void helloCuda(void);
extern void reductionCuda(void);

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

int mainCore(int deviceId);

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

static bool useHello(void);
static bool useReduction(void);

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

int mainCore(int deviceId)
    {
    //Device::print(deviceId, "Execute on device : ");

    bool isOk = true;
    //isOk &= useHello();
    isOk &= useReduction();

    cout << "\nisOK = " << isOk << endl;
    cout << "\nEnd : mainCore" << endl;

    return isOk ? EXIT_SUCCESS : EXIT_FAILURE;
    }

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

bool useHello(void)
    {
    helloCuda();
    return true;
    }

bool useReduction(void)
    {
    reductionCuda();
    return true;
    }

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/

