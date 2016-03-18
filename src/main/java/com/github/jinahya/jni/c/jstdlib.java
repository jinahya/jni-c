/*
 * Copyright 2015 Jin Kwon &lt;onacit at gmail.com&gt;.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package com.github.jinahya.jni.c;

/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class jstdlib {

    static native int EXIT_FAILURE();

    public static final int EXIT_FAILURE = EXIT_FAILURE();

    static native int EXIT_SUCCESS();

    public static final int EXIT_SUCCESS = EXIT_SUCCESS();

    static native int RAND_MAX();

    public static final int RAND_MAX = RAND_MAX();

    public static native void abort();

    public static native void exit(int exit_code);

    public static native void free(long ptr);

    public static native String getenv(byte[] name);

    public static native int rand();

    public static native void srand(long seed);

    public static native int system(final byte[] command);

}
