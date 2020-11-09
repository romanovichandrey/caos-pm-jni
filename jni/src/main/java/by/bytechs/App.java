package by.bytechs;

import by.bytechs.jni.JNIHelloWorld;

/**
 * Hello world!
 */
public class App {
    public static void main(String[] args) {
        JNIHelloWorld jniHelloWorld = new JNIHelloWorld();
        System.out.println(jniHelloWorld.multiply(10, 3));
        jniHelloWorld.printHelloWorld();

        String input = jniHelloWorld.getLine("Type a line: ");
        System.out.println("User typed: " + input);
    }
}
