#include "libKmpSample_api.h"
#include <chrono>
#include <iostream>
#include <thread>

int main(int argc, const char *argv[]) {
    libKmpSample_ExportedSymbols *lib = libKmpSample_symbols();
    libKmpSample_kref_design_KmpClazz clazzInstance =
        lib->kotlin.root.design.KmpClazz.KmpClazz();

    // Call interfaceMethod
    const char *interfaceMethodResult =
        lib->kotlin.root.design.KmpClazz.interfaceMethod(clazzInstance);
    std::cout << "interfaceMethod result: " << interfaceMethodResult
              << std::endl;
    lib->DisposeString(interfaceMethodResult);

    // Call returnInt and convert the result
    libKmpSample_kref_kotlin_Int intResult =
        lib->kotlin.root.design.KmpClazz.returnInt(clazzInstance);
    int nativeInt = lib->getNonNullValueOfInt(intResult);
    std::cout << "returnInt result: " << nativeInt << std::endl;
    lib->DisposeStablePointer(intResult.pinned);

    // Call returnLong and convert the result
    libKmpSample_kref_kotlin_Long longResult =
        lib->kotlin.root.design.KmpClazz.returnLong(clazzInstance);
    long long nativeLong = lib->getNonNullValueOfLong(longResult);
    std::cout << "returnLong result: " << nativeLong << std::endl;
    lib->DisposeStablePointer(longResult.pinned);

    // Explicitly delete the instance
    lib->DisposeStablePointer(clazzInstance.pinned);

    // Invoke functions
    // Pass Int
    auto kotlinInt = lib->createNullableInt(99);
    lib->kotlin.root.design.acceptInteger(kotlinInt);
    lib->DisposeStablePointer(kotlinInt.pinned);

    // Pass and receive String
    const char *result =
        lib->kotlin.root.design.acceptString("String from C++");
    std::cout << result << std::endl;
    lib->DisposeString(result);
    
    unsigned char nativeByteArray[6] = {0xCA, 0xFE, 0xCA, 0xFE, 0xCA, 0xFE};
    lib->kotlin.root.design.readNativeByteArray(static_cast<void*>(nativeByteArray), sizeof(nativeByteArray));

    return 0;
}
