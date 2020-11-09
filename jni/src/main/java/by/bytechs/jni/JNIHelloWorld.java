package by.bytechs.jni;

public class JNIHelloWorld {
    //g++ -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -fPIC JNIHelloWorld.cpp -shared -o helloworld.so -Wl,-soname -Wl,--no-whole-archive

    public native void printHelloWorld();

    public native int multiply(int a, int b);

    public native String getLine(String prompt);

    static {
        System.load("/home/romanovich_ag@BYTECHS.BY/projects/git/caos-pm-jni/native/target/libcaos_driverJ.so");
    }
}
