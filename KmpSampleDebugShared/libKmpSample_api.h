#ifndef KONAN_LIBKMPSAMPLE_H
#define KONAN_LIBKMPSAMPLE_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libKmpSample_KBoolean;
#else
typedef _Bool           libKmpSample_KBoolean;
#endif
typedef unsigned short     libKmpSample_KChar;
typedef signed char        libKmpSample_KByte;
typedef short              libKmpSample_KShort;
typedef int                libKmpSample_KInt;
typedef long long          libKmpSample_KLong;
typedef unsigned char      libKmpSample_KUByte;
typedef unsigned short     libKmpSample_KUShort;
typedef unsigned int       libKmpSample_KUInt;
typedef unsigned long long libKmpSample_KULong;
typedef float              libKmpSample_KFloat;
typedef double             libKmpSample_KDouble;
typedef float __attribute__ ((__vector_size__ (16))) libKmpSample_KVector128;
typedef void*              libKmpSample_KNativePtr;
struct libKmpSample_KType;
typedef struct libKmpSample_KType libKmpSample_KType;

typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Byte;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Short;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Int;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Long;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Float;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Double;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Char;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Boolean;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Unit;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_UByte;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_UShort;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_UInt;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_ULong;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_Function1;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_kotlin_ByteArray;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_design_KmpObject;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_design_KmpInterface;
typedef struct {
  libKmpSample_KNativePtr pinned;
} libKmpSample_kref_design_KmpClazz;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libKmpSample_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libKmpSample_KBoolean (*IsInstance)(libKmpSample_KNativePtr ref, const libKmpSample_KType* type);
  libKmpSample_kref_kotlin_Byte (*createNullableByte)(libKmpSample_KByte);
  libKmpSample_KByte (*getNonNullValueOfByte)(libKmpSample_kref_kotlin_Byte);
  libKmpSample_kref_kotlin_Short (*createNullableShort)(libKmpSample_KShort);
  libKmpSample_KShort (*getNonNullValueOfShort)(libKmpSample_kref_kotlin_Short);
  libKmpSample_kref_kotlin_Int (*createNullableInt)(libKmpSample_KInt);
  libKmpSample_KInt (*getNonNullValueOfInt)(libKmpSample_kref_kotlin_Int);
  libKmpSample_kref_kotlin_Long (*createNullableLong)(libKmpSample_KLong);
  libKmpSample_KLong (*getNonNullValueOfLong)(libKmpSample_kref_kotlin_Long);
  libKmpSample_kref_kotlin_Float (*createNullableFloat)(libKmpSample_KFloat);
  libKmpSample_KFloat (*getNonNullValueOfFloat)(libKmpSample_kref_kotlin_Float);
  libKmpSample_kref_kotlin_Double (*createNullableDouble)(libKmpSample_KDouble);
  libKmpSample_KDouble (*getNonNullValueOfDouble)(libKmpSample_kref_kotlin_Double);
  libKmpSample_kref_kotlin_Char (*createNullableChar)(libKmpSample_KChar);
  libKmpSample_KChar (*getNonNullValueOfChar)(libKmpSample_kref_kotlin_Char);
  libKmpSample_kref_kotlin_Boolean (*createNullableBoolean)(libKmpSample_KBoolean);
  libKmpSample_KBoolean (*getNonNullValueOfBoolean)(libKmpSample_kref_kotlin_Boolean);
  libKmpSample_kref_kotlin_Unit (*createNullableUnit)(void);
  libKmpSample_kref_kotlin_UByte (*createNullableUByte)(libKmpSample_KUByte);
  libKmpSample_KUByte (*getNonNullValueOfUByte)(libKmpSample_kref_kotlin_UByte);
  libKmpSample_kref_kotlin_UShort (*createNullableUShort)(libKmpSample_KUShort);
  libKmpSample_KUShort (*getNonNullValueOfUShort)(libKmpSample_kref_kotlin_UShort);
  libKmpSample_kref_kotlin_UInt (*createNullableUInt)(libKmpSample_KUInt);
  libKmpSample_KUInt (*getNonNullValueOfUInt)(libKmpSample_kref_kotlin_UInt);
  libKmpSample_kref_kotlin_ULong (*createNullableULong)(libKmpSample_KULong);
  libKmpSample_KULong (*getNonNullValueOfULong)(libKmpSample_kref_kotlin_ULong);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          libKmpSample_KType* (*_type)(void);
          libKmpSample_kref_design_KmpObject (*_instance)();
          const char* (*get_name)(libKmpSample_kref_design_KmpObject thiz);
          const char* (*toString)(libKmpSample_kref_design_KmpObject thiz);
        } KmpObject;
        struct {
          libKmpSample_KType* (*_type)(void);
          const char* (*interfaceMethod)(libKmpSample_kref_design_KmpInterface thiz);
        } KmpInterface;
        struct {
          libKmpSample_KType* (*_type)(void);
          libKmpSample_kref_design_KmpClazz (*KmpClazz)();
          void (*finalize)(libKmpSample_kref_design_KmpClazz thiz);
          const char* (*interfaceMethod)(libKmpSample_kref_design_KmpClazz thiz);
          libKmpSample_kref_kotlin_Int (*returnInt)(libKmpSample_kref_design_KmpClazz thiz);
          libKmpSample_kref_kotlin_Long (*returnLong)(libKmpSample_kref_design_KmpClazz thiz);
        } KmpClazz;
        void (*acceptDouble)(libKmpSample_kref_kotlin_Double d);
        void (*acceptInteger)(libKmpSample_kref_kotlin_Int i);
        void (*acceptInvokeFun)(libKmpSample_kref_kotlin_Function1 f);
        const char* (*acceptString)(const char* str);
        void (*readByteArray)(libKmpSample_kref_kotlin_ByteArray byteArray);
        void (*readNativeByteArray)(void* byteArray, libKmpSample_KInt size);
        libKmpSample_kref_kotlin_Function1 (*supplyFun)();
      } design;
    } root;
  } kotlin;
} libKmpSample_ExportedSymbols;
extern libKmpSample_ExportedSymbols* libKmpSample_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBKMPSAMPLE_H */
