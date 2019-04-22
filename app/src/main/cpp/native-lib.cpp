#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_tech_wd_com_jni2_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "hello";
    return env->NewStringUTF(hello.c_str());
}
