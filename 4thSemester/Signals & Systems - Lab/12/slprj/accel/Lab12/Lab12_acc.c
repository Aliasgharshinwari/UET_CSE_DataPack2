#include "__cf_Lab12.h"
#include <math.h>
#include "Lab12_acc.h"
#include "Lab12_acc_private.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_lookup_functions.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
static void mdlOutputs ( SimStruct * S , int_T tid ) { a3gtmzj2bz * _rtB ;
app4oi2l2u * _rtP ; ekjnuz2w2h * _rtDW ; _rtDW = ( ( ekjnuz2w2h * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( app4oi2l2u * ) ssGetModelRtp ( S ) ) ;
_rtB = ( ( a3gtmzj2bz * ) _ssGetModelBlockIO ( S ) ) ; _rtB -> egln4qmnri = (
( ( ( ( muDoubleScalarSin ( _rtP -> P_3 * ssGetTaskTime ( S , 0 ) + _rtP ->
P_4 ) * _rtP -> P_1 + _rtP -> P_2 ) + _rtB -> cy3az03hvm ) + (
muDoubleScalarSin ( _rtP -> P_7 * ssGetTaskTime ( S , 0 ) + _rtP -> P_8 ) *
_rtP -> P_5 + _rtP -> P_6 ) ) + ( muDoubleScalarSin ( _rtP -> P_11 *
ssGetTaskTime ( S , 0 ) + _rtP -> P_12 ) * _rtP -> P_9 + _rtP -> P_10 ) ) + (
muDoubleScalarSin ( _rtP -> P_15 * ssGetTaskTime ( S , 0 ) + _rtP -> P_16 ) *
_rtP -> P_13 + _rtP -> P_14 ) ) + ( muDoubleScalarSin ( _rtP -> P_19 *
ssGetTaskTime ( S , 0 ) + _rtP -> P_20 ) * _rtP -> P_17 + _rtP -> P_18 ) ;
ssCallAccelRunBlock ( S , 0 , 7 , SS_CALL_MDL_OUTPUTS ) ; UNUSED_PARAMETER (
tid ) ; } static void mdlOutputsTID1 ( SimStruct * S , int_T tid ) {
a3gtmzj2bz * _rtB ; app4oi2l2u * _rtP ; _rtP = ( ( app4oi2l2u * )
ssGetModelRtp ( S ) ) ; _rtB = ( ( a3gtmzj2bz * ) _ssGetModelBlockIO ( S ) )
; _rtB -> cy3az03hvm = _rtP -> P_0 ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER ( tid
) ; }
#define MDL_UPDATE
static void mdlUpdateTID1 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; } static void mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal
( S , 0 , 4247731425U ) ; ssSetChecksumVal ( S , 1 , 2054927205U ) ;
ssSetChecksumVal ( S , 2 , 1278160264U ) ; ssSetChecksumVal ( S , 3 ,
3583483048U ) ; { mxArray * slVerStructMat = NULL ; mxArray * slStrMat =
mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status =
mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if ( status
== 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 , "Version" ) ;
if ( slVerMat == NULL ) { status = 1 ; } else { status = mxGetString (
slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "8.7" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
ekjnuz2w2h ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( a3gtmzj2bz ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
app4oi2l2u ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetModelRtp ( S , ( real_T *
) & olse2uxilb ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) {
slAccRegPrmChangeFcn ( S , mdlOutputsTID1 ) ; } static void mdlTerminate (
SimStruct * S ) { }
#include "simulink.c"
