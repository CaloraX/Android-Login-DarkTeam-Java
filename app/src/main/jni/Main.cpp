#include <sys/types.h>
#include <pthread.h>
#include <jni.h>
#include <unistd.h>
#include "Logger.h"

//Serve Do Painel
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_Auth_Title(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(("https://yourserverlogin.000webhostapp.com/login.php"));
}


//Nome Da Equipe
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_MainActivity_team(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF((""));
}


//Grupo Do Telegram
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_MainActivity_Grupo(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF((""));
}

//Grupo Do Telegram
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_MainActivity_LinkGrupo(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF((""));
}


