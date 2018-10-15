/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c -w -O3 -fno-strict-aliasing  -I/home/kuro/.choosenim/toolchains/nim-0.18.0/lib -o /home/kuro/Projects/PTUT/baldmanSagen/config/nimcache/stdlib_json.o /home/kuro/Projects/PTUT/baldmanSagen/config/nimcache/stdlib_json.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw;
typedef struct tySequence_MlAD6nAPq9bHKla9cWiIZP0g tySequence_MlAD6nAPq9bHKla9cWiIZP0g;
typedef struct tySequence_oLpBKXzW3hF9aCVMo5EymfQ tySequence_oLpBKXzW3hF9aCVMo5EymfQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_jq7X5k7hWG0tdTZTDkiyGQ tyTuple_jq7X5k7hWG0tdTZTDkiyGQ;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyTuple_awOivLjlO76sGdHY7nQUjQ tyTuple_awOivLjlO76sGdHY7nQUjQ;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef NU8 tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw {
tySequence_MlAD6nAPq9bHKla9cWiIZP0g* data;
NI counter;
NI first;
NI last;
};
struct tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q {
tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg kind;
union{
struct {NimStringDesc* str;
} S1;
struct {NI64 num;
} S2;
struct {NF fnum;
} S3;
struct {NIM_BOOL bval;
} S4;
struct {tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw fields;
} S6;
struct {tySequence_oLpBKXzW3hF9aCVMo5EymfQ* elems;
} S7;
} kindU;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyTuple_jq7X5k7hWG0tdTZTDkiyGQ {
NimStringDesc* Field0;
tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* Field1;
};
struct tyTuple_awOivLjlO76sGdHY7nQUjQ {
NI Field0;
NI Field1;
NimStringDesc* Field2;
tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* Field3;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_oLpBKXzW3hF9aCVMo5EymfQ {
  TGenericSeq Sup;
  tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* data[SEQ_DECL_SIZE];
};
struct tySequence_MlAD6nAPq9bHKla9cWiIZP0g {
  TGenericSeq Sup;
  tyTuple_awOivLjlO76sGdHY7nQUjQ data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_oLpBKXzW3hF9aCVMo5EymfQ)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef_zfzzuQ8txrdZAYK0WGWpHg)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, newJArray_phgxr9cKlc0dmrJpCth52pw)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, newJObject_phgxr9cKlc0dmrJpCth52pw_2)(void);
N_LIB_PRIVATE N_NIMCALL(void, initOrderedTable_PHRF9cHqhXGiWC9cIiRW9bTWw)(NI initialSize, tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw* Result);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq__9bwm9c9bGAcoIGLjRndWCPT3Q)(tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw* t, NimStringDesc* key, tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* val);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, toPretty_MHqQ3FKhfxfdLtBgX2QXeQ)(NimStringDesc** result, tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* node, NI indent, NIM_BOOL ml, NIM_BOOL lstArr, NI currIndent);
N_LIB_PRIVATE N_NIMCALL(void, indent_1Ijhfzd9bSYvew1BrGtRO2g)(NimStringDesc** s, NI i);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NI, len_a0ORwcHIaewozuGDsc9b3TAjson)(tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw* t);
N_LIB_PRIVATE N_NIMCALL(void, nl_gOaZJtTQtJqBSCIPT8VfqQ)(NimStringDesc** s, NIM_BOOL ml);
static N_INLINE(NIM_BOOL, isFilled_IxXD1UAPoEehVDW9cv9cRaewtables)(NI hcode);
N_LIB_PRIVATE N_NIMCALL(NI, newIndent_jGyhG9amGoXLPyJmHLbefOQ)(NI curr, NI indent, NIM_BOOL ml);
N_LIB_PRIVATE N_NIMCALL(void, escapeJson_xxovtptDIL7ctJosN3ocbA)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, add_IbYQ9cTcoQ89aIwM2IEYGMng)(NimStringDesc** result, NI64 x);
N_LIB_PRIVATE N_NIMCALL(void, add_A9bDQDKw5SEqD3OvtOnC1bg)(NimStringDesc** result, NF x);
TNimType NTI_df9bshXB7C9cTiWPIOtX3j1Q_;
TNimType NTI_RUngo7nCHe6O8aBGIcrhtg_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_Aav8dQoMlCFnZRxA0IhTHQ_;
extern TNimType NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTI_AF39bJ7XDr6gpANuGpxkHrw_;
TNimType NTI_oLpBKXzW3hF9aCVMo5EymfQ_;
TNimType NTI_zfzzuQ8txrdZAYK0WGWpHg_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimNode* NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[8];
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_5, "", 0);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_6, "{", 1);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_7, "\012", 1);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_8, " ", 1);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_9, ",", 1);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_10, "\"", 1);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_11, "\\n", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_12, "\\b", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_13, "\\f", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_14, "\\t", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_15, "\\r", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_16, "\\\"", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_17, "\\\\", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_18, ": ", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_19, "}", 1);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_20, "{}", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_21, "true", 4);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_22, "false", 5);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_23, "[", 1);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_24, "]", 1);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_25, "[]", 2);
STRING_LITERAL(TM_9b9bytt1stv9cZ8uqII7HFgew_26, "null", 4);
static N_NIMCALL(void, Marker_tySequence_oLpBKXzW3hF9aCVMo5EymfQ)(void* p, NI op) {
	tySequence_oLpBKXzW3hF9aCVMo5EymfQ* a;
	NI T1_;
	a = (tySequence_oLpBKXzW3hF9aCVMo5EymfQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, Marker_tyRef_zfzzuQ8txrdZAYK0WGWpHg)(void* p, NI op) {
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* a;
	a = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)p;
	switch ((*a).kind) {
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 4):
	nimGCvisit((void*)(*a).kindU.S1.str, op);
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 2):
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 3):
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 1):
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 0):
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 5):
	nimGCvisit((void*)(*a).kindU.S6.fields.data, op);
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 6):
	nimGCvisit((void*)(*a).kindU.S7.elems, op);
	break;
	} 
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, newJArray_phgxr9cKlc0dmrJpCth52pw)(void) {
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* result;
	result = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
	result = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*) newObj((&NTI_zfzzuQ8txrdZAYK0WGWpHg_), sizeof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q));
	(*result).kind = ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 6);
	if ((*result).kindU.S7.elems) { nimGCunrefNoCycle((*result).kindU.S7.elems); (*result).kindU.S7.elems = NIM_NIL; }
	(*result).kindU.S7.elems = (tySequence_oLpBKXzW3hF9aCVMo5EymfQ*) newSeqRC1((&NTI_oLpBKXzW3hF9aCVMo5EymfQ_), 0);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, newJObject_phgxr9cKlc0dmrJpCth52pw_2)(void) {
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* result;
	result = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
	result = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*) newObj((&NTI_zfzzuQ8txrdZAYK0WGWpHg_), sizeof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q));
	(*result).kind = ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 5);
	initOrderedTable_PHRF9cHqhXGiWC9cIiRW9bTWw(((NI) 4), (&(*result).kindU.S6.fields));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, percent__9bR9b9aepApwIZEZZtX9cb7RFA)(tyTuple_jq7X5k7hWG0tdTZTDkiyGQ* keyVals, NI keyValsLen_0) {
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* result;
{	result = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
	{
		if (!(keyValsLen_0 == ((NI) 0))) goto LA3_;
		result = newJArray_phgxr9cKlc0dmrJpCth52pw();
		goto BeforeRet_;
	}
	LA3_: ;
	result = newJObject_phgxr9cKlc0dmrJpCth52pw_2();
	{
		NimStringDesc* key;
		tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* val;
		NI i;
		key = (NimStringDesc*)0;
		val = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < keyValsLen_0)) goto LA7;
				key = keyVals[i].Field0;
				val = keyVals[i].Field1;
				X5BX5Deq__9bwm9c9bGAcoIGLjRndWCPT3Q((&(*result).kindU.S6.fields), key, val);
				i += ((NI) 1);
			} LA7: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, percent__8iXO9aRAijCPe58pujCBbuQ)(NimStringDesc* s) {
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* result;
	NimStringDesc* T5_;
{	result = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
	result = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*) newObj((&NTI_zfzzuQ8txrdZAYK0WGWpHg_), sizeof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q));
	{
		if (!(s == 0)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	(*result).kind = ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 4);
	T5_ = (NimStringDesc*)0;
	T5_ = (*result).kindU.S1.str; (*result).kindU.S1.str = copyStringRC1(s);
	if (T5_) nimGCunrefNoCycle(T5_);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_LIB_PRIVATE N_NIMCALL(void, indent_1Ijhfzd9bSYvew1BrGtRO2g)(NimStringDesc** s, NI i) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = nsuRepeatChar(32, ((NI) (i)));
	(*s) = resizeString((*s), T1_->Sup.len + 0);
appendString((*s), T1_);
}

static N_INLINE(NI, len_a0ORwcHIaewozuGDsc9b3TAjson)(tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw* t) {
	NI result;
	result = (NI)0;
	result = (*t).counter;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, nl_gOaZJtTQtJqBSCIPT8VfqQ)(NimStringDesc** s, NIM_BOOL ml) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	{
		if (!ml) goto LA4_;
		T1_ = copyString(((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_7));
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = copyString(((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_8));
	}
	LA2_: ;
	(*s) = resizeString((*s), T1_->Sup.len + 0);
appendString((*s), T1_);
}

static N_INLINE(NIM_BOOL, isFilled_IxXD1UAPoEehVDW9cv9cRaewtables)(NI hcode) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = !((hcode == ((NI) 0)));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, newIndent_jGyhG9amGoXLPyJmHLbefOQ)(NI curr, NI indent, NIM_BOOL ml) {
	NI result;
{	result = (NI)0;
	{
		if (!ml) goto LA3_;
		result = (NI)(curr + indent);
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		result = indent;
		goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, escapeJson_xxovtptDIL7ctJosN3ocbA)(NimStringDesc* s, NimStringDesc** result) {
	(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_10));
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s->data[i];
				switch (((NU8)(c))) {
				case 10:
				{
					(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_11));
				}
				break;
				case 8:
				{
					(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_12));
				}
				break;
				case 12:
				{
					(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_13));
				}
				break;
				case 9:
				{
					(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_14));
				}
				break;
				case 13:
				{
					(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_15));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_16));
				}
				break;
				case 92:
				{
					(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_17));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c);
				}
				break;
				}
				i += ((NI) 1);
			} LA3: ;
		}
	}
	(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_10));
}

N_LIB_PRIVATE N_NIMCALL(void, toPretty_MHqQ3FKhfxfdLtBgX2QXeQ)(NimStringDesc** result, tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* node, NI indent, NIM_BOOL ml, NIM_BOOL lstArr, NI currIndent) {
	switch ((*node).kind) {
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 5):
	{
		{
			if (!lstArr) goto LA4_;
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
		}
		LA4_: ;
		{
			NI T8_;
			NI i;
			T8_ = (NI)0;
			T8_ = len_a0ORwcHIaewozuGDsc9b3TAjson((&(*node).kindU.S6.fields));
			if (!(((NI) 0) < T8_)) goto LA9_;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_6));
			nl_gOaZJtTQtJqBSCIPT8VfqQ(result, ml);
			i = ((NI) 0);
			{
				NimStringDesc* key;
				tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* val;
				tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw colontmp_;
				NI h;
				key = (NimStringDesc*)0;
				val = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
				memset((void*)(&colontmp_), 0, sizeof(colontmp_));
				colontmp_.data = (*node).kindU.S6.fields.data;
				colontmp_.counter = (*node).kindU.S6.fields.counter;
				colontmp_.first = (*node).kindU.S6.fields.first;
				colontmp_.last = (*node).kindU.S6.fields.last;
				h = colontmp_.first;
				{
					while (1) {
						NI nxt;
						if (!(((NI) 0) <= h)) goto LA13;
						nxt = colontmp_.data->data[h].Field1;
						{
							NIM_BOOL T16_;
							NI T23_;
							NI T24_;
							T16_ = (NIM_BOOL)0;
							T16_ = isFilled_IxXD1UAPoEehVDW9cv9cRaewtables(colontmp_.data->data[h].Field0);
							if (!T16_) goto LA17_;
							key = colontmp_.data->data[h].Field2;
							val = colontmp_.data->data[h].Field3;
							{
								if (!(((NI) 0) < i)) goto LA21_;
								(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_9));
								nl_gOaZJtTQtJqBSCIPT8VfqQ(result, ml);
							}
							LA21_: ;
							i += ((NI) 1);
							T23_ = (NI)0;
							T23_ = newIndent_jGyhG9amGoXLPyJmHLbefOQ(currIndent, indent, ml);
							indent_1Ijhfzd9bSYvew1BrGtRO2g(result, T23_);
							escapeJson_xxovtptDIL7ctJosN3ocbA(key, result);
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_18));
							T24_ = (NI)0;
							T24_ = newIndent_jGyhG9amGoXLPyJmHLbefOQ(currIndent, indent, ml);
							toPretty_MHqQ3FKhfxfdLtBgX2QXeQ(result, val, indent, ml, NIM_FALSE, T24_);
						}
						LA17_: ;
						h = nxt;
					} LA13: ;
				}
			}
			nl_gOaZJtTQtJqBSCIPT8VfqQ(result, ml);
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_19));
		}
		goto LA6_;
		LA9_: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_20));
		}
		LA6_: ;
	}
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 4):
	{
		{
			if (!lstArr) goto LA29_;
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
		}
		LA29_: ;
		escapeJson_xxovtptDIL7ctJosN3ocbA((*node).kindU.S1.str, result);
	}
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 2):
	{
		{
			if (!lstArr) goto LA34_;
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
		}
		LA34_: ;
		add_IbYQ9cTcoQ89aIwM2IEYGMng(result, (*node).kindU.S2.num);
	}
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 3):
	{
		{
			if (!lstArr) goto LA39_;
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
		}
		LA39_: ;
		add_A9bDQDKw5SEqD3OvtOnC1bg(result, (*node).kindU.S3.fnum);
	}
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 1):
	{
		NimStringDesc* T46_;
		{
			if (!lstArr) goto LA44_;
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
		}
		LA44_: ;
		T46_ = (NimStringDesc*)0;
		{
			if (!(*node).kindU.S4.bval) goto LA49_;
			T46_ = copyString(((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_21));
		}
		goto LA47_;
		LA49_: ;
		{
			T46_ = copyString(((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_22));
		}
		LA47_: ;
		(*result) = resizeString((*result), T46_->Sup.len + 0);
appendString((*result), T46_);
	}
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 6):
	{
		{
			if (!lstArr) goto LA55_;
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
		}
		LA55_: ;
		{
			NI T59_;
			T59_ = ((*node).kindU.S7.elems ? (*node).kindU.S7.elems->Sup.len : 0);
			if (!!((T59_ == ((NI) 0)))) goto LA60_;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_23));
			nl_gOaZJtTQtJqBSCIPT8VfqQ(result, ml);
			{
				NI i_2;
				NI colontmp__2;
				NI T63_;
				NI res;
				i_2 = (NI)0;
				colontmp__2 = (NI)0;
				T63_ = ((*node).kindU.S7.elems ? (*node).kindU.S7.elems->Sup.len : 0);
				colontmp__2 = (NI)(T63_ - ((NI) 1));
				res = ((NI) 0);
				{
					while (1) {
						NI T70_;
						if (!(res <= colontmp__2)) goto LA65;
						i_2 = res;
						{
							if (!(((NI) 0) < i_2)) goto LA68_;
							(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_9));
							nl_gOaZJtTQtJqBSCIPT8VfqQ(result, ml);
						}
						LA68_: ;
						T70_ = (NI)0;
						T70_ = newIndent_jGyhG9amGoXLPyJmHLbefOQ(currIndent, indent, ml);
						toPretty_MHqQ3FKhfxfdLtBgX2QXeQ(result, (*node).kindU.S7.elems->data[i_2], indent, ml, NIM_TRUE, T70_);
						res += ((NI) 1);
					} LA65: ;
				}
			}
			nl_gOaZJtTQtJqBSCIPT8VfqQ(result, ml);
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_24));
		}
		goto LA57_;
		LA60_: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_25));
		}
		LA57_: ;
	}
	break;
	case ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 0):
	{
		{
			if (!lstArr) goto LA75_;
			indent_1Ijhfzd9bSYvew1BrGtRO2g(result, currIndent);
		}
		LA75_: ;
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_26));
	}
	break;
	}
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, pretty_jL9c59bDERe59bOWSHweWzoBQ)(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* node, NI indent) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_9b9bytt1stv9cZ8uqII7HFgew_5));
	toPretty_MHqQ3FKhfxfdLtBgX2QXeQ((&result), node, indent, NIM_TRUE, NIM_FALSE, ((NI) 0));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit000)(void) {
static TNimNode* TM_9b9bytt1stv9cZ8uqII7HFgew_2[7];
NI TM_9b9bytt1stv9cZ8uqII7HFgew_4;
static char* NIM_CONST TM_9b9bytt1stv9cZ8uqII7HFgew_3[7] = {
"JNull", 
"JBool", 
"JInt", 
"JFloat", 
"JString", 
"JObject", 
"JArray"};
static TNimNode TM_9b9bytt1stv9cZ8uqII7HFgew_0[16];
NTI_df9bshXB7C9cTiWPIOtX3j1Q_.size = sizeof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q);
NTI_df9bshXB7C9cTiWPIOtX3j1Q_.kind = 18;
NTI_df9bshXB7C9cTiWPIOtX3j1Q_.base = 0;
NTI_df9bshXB7C9cTiWPIOtX3j1Q_.flags = 2;
NTI_RUngo7nCHe6O8aBGIcrhtg_.size = sizeof(tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg);
NTI_RUngo7nCHe6O8aBGIcrhtg_.kind = 14;
NTI_RUngo7nCHe6O8aBGIcrhtg_.base = 0;
NTI_RUngo7nCHe6O8aBGIcrhtg_.flags = 3;
for (TM_9b9bytt1stv9cZ8uqII7HFgew_4 = 0; TM_9b9bytt1stv9cZ8uqII7HFgew_4 < 7; TM_9b9bytt1stv9cZ8uqII7HFgew_4++) {
TM_9b9bytt1stv9cZ8uqII7HFgew_0[TM_9b9bytt1stv9cZ8uqII7HFgew_4+1].kind = 1;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[TM_9b9bytt1stv9cZ8uqII7HFgew_4+1].offset = TM_9b9bytt1stv9cZ8uqII7HFgew_4;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[TM_9b9bytt1stv9cZ8uqII7HFgew_4+1].name = TM_9b9bytt1stv9cZ8uqII7HFgew_3[TM_9b9bytt1stv9cZ8uqII7HFgew_4];
TM_9b9bytt1stv9cZ8uqII7HFgew_2[TM_9b9bytt1stv9cZ8uqII7HFgew_4] = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[TM_9b9bytt1stv9cZ8uqII7HFgew_4+1];
}
TM_9b9bytt1stv9cZ8uqII7HFgew_0[8].len = 7; TM_9b9bytt1stv9cZ8uqII7HFgew_0[8].kind = 2; TM_9b9bytt1stv9cZ8uqII7HFgew_0[8].sons = &TM_9b9bytt1stv9cZ8uqII7HFgew_2[0];
NTI_RUngo7nCHe6O8aBGIcrhtg_.node = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[8];
TM_9b9bytt1stv9cZ8uqII7HFgew_0[0].kind = 3;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[0].offset = offsetof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q, kind);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[0].typ = (&NTI_RUngo7nCHe6O8aBGIcrhtg_);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[0].name = "kind";
TM_9b9bytt1stv9cZ8uqII7HFgew_0[0].sons = &NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[0];
TM_9b9bytt1stv9cZ8uqII7HFgew_0[0].len = 7;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[9].kind = 1;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[9].offset = offsetof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q, kindU.S1.str);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[9].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[9].name = "str";
NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[4] = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[9];
TM_9b9bytt1stv9cZ8uqII7HFgew_0[10].kind = 1;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[10].offset = offsetof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q, kindU.S2.num);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[10].typ = (&NTI_Aav8dQoMlCFnZRxA0IhTHQ_);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[10].name = "num";
NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[2] = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[10];
TM_9b9bytt1stv9cZ8uqII7HFgew_0[11].kind = 1;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[11].offset = offsetof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q, kindU.S3.fnum);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[11].typ = (&NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[11].name = "fnum";
NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[3] = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[11];
TM_9b9bytt1stv9cZ8uqII7HFgew_0[12].kind = 1;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[12].offset = offsetof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q, kindU.S4.bval);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[12].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[12].name = "bval";
NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[1] = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[12];
TM_9b9bytt1stv9cZ8uqII7HFgew_0[13].len = 0; TM_9b9bytt1stv9cZ8uqII7HFgew_0[13].kind = 2;
NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[0] = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[13];
TM_9b9bytt1stv9cZ8uqII7HFgew_0[14].kind = 1;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[14].offset = offsetof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q, kindU.S6.fields);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[14].typ = (&NTI_AF39bJ7XDr6gpANuGpxkHrw_);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[14].name = "fields";
NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[5] = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[14];
NTI_oLpBKXzW3hF9aCVMo5EymfQ_.size = sizeof(tySequence_oLpBKXzW3hF9aCVMo5EymfQ*);
NTI_oLpBKXzW3hF9aCVMo5EymfQ_.kind = 24;
NTI_oLpBKXzW3hF9aCVMo5EymfQ_.base = (&NTI_zfzzuQ8txrdZAYK0WGWpHg_);
NTI_oLpBKXzW3hF9aCVMo5EymfQ_.flags = 2;
NTI_oLpBKXzW3hF9aCVMo5EymfQ_.marker = Marker_tySequence_oLpBKXzW3hF9aCVMo5EymfQ;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[15].kind = 1;
TM_9b9bytt1stv9cZ8uqII7HFgew_0[15].offset = offsetof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q, kindU.S7.elems);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[15].typ = (&NTI_oLpBKXzW3hF9aCVMo5EymfQ_);
TM_9b9bytt1stv9cZ8uqII7HFgew_0[15].name = "elems";
NimDT__df9bshXB7C9cTiWPIOtX3j1Q_kind[6] = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[15];
NTI_df9bshXB7C9cTiWPIOtX3j1Q_.node = &TM_9b9bytt1stv9cZ8uqII7HFgew_0[0];
NTI_zfzzuQ8txrdZAYK0WGWpHg_.size = sizeof(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*);
NTI_zfzzuQ8txrdZAYK0WGWpHg_.kind = 22;
NTI_zfzzuQ8txrdZAYK0WGWpHg_.base = (&NTI_df9bshXB7C9cTiWPIOtX3j1Q_);
NTI_zfzzuQ8txrdZAYK0WGWpHg_.flags = 2;
NTI_zfzzuQ8txrdZAYK0WGWpHg_.marker = Marker_tyRef_zfzzuQ8txrdZAYK0WGWpHg;
}
