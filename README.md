# Using Kotlin Multiplatform Shared Library in C++

[WIP]

The Kotlin Multiplatform library that is being used in this project is [here](https://github.com/arskov/kmp-native-pg).

The XCode project contains a copy of the dylib created by KMP project. If you update the Kotlin code, you need to rebuild the KMP project and then copy the binary, the header file, and debug info into the `$projectRoot/KmpSampleDebugShared/` folder.


