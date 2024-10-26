//
//  main.cpp
//  KmpIntegrationCpp
//
//  Created by Arseni Kavalchuk on 26.10.24.
//

#include "libKmpSample_api.h"
#include <chrono>
#include <iostream>
#include <thread>

int main(int argc, const char *argv[]) {

    libKmpSample_ExportedSymbols *lib = libKmpSample_symbols();
    for (int i = 0; i < 10000000; i++) {
        libKmpSample_kref_design_KmpClazz clazzInstance =
            lib->kotlin.root.design.KmpClazz.KmpClazz();

        // Call interfaceMethod
        const char *interfaceMethodResult =
            lib->kotlin.root.design.KmpClazz.interfaceMethod(clazzInstance);
        //        std::cout << "interfaceMethod result: " <<
        //        interfaceMethodResult << std::endl;
        lib->DisposeString(interfaceMethodResult);
        
        // Call returnInt and convert the result
        libKmpSample_kref_kotlin_Int intResult =
            lib->kotlin.root.design.KmpClazz.returnInt(clazzInstance);
        int nativeInt = lib->getNonNullValueOfInt(intResult);
        //        std::cout << "returnInt result: " << nativeInt << std::endl;

        // Call returnLong and convert the result
        libKmpSample_kref_kotlin_Long longResult =
            lib->kotlin.root.design.KmpClazz.returnLong(clazzInstance);
        long long nativeLong = lib->getNonNullValueOfLong(longResult);
        //        std::cout << "returnLong result: " << nativeLong << std::endl;

        // Explicitly delete the instance
        lib->DisposeStablePointer(clazzInstance.pinned);
        if (i % 100000 == 0) {
            std::cout << "Created " << i << " objects" << std::endl;
        }
    }

    // Invoke functions
    // Pass Int
    lib->kotlin.root.design.acceptInteger(lib->createNullableInt(99));

    // Pass and receive String
    const char *result =
        lib->kotlin.root.design.acceptString("String from C++");
    std::cout << result << std::endl;
    lib->DisposeString(result);

    return 0;
}
