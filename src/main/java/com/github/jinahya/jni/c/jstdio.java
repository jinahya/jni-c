/*
 * Copyright 2015 Jin Kwon &lt;jinahya_at_gmail.com&gt;.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */
package com.github.jinahya.jni.c;

/**
 *
 * @author Jin Kwon &lt;jinahya_at_gmail.com&gt;
 */
public class jstdio {

//    public static final FileDescriptor stdout;
//
//
//    static native FileDescriptor stdout_();
//
//
//    static {
//        stdout = stdout_();
//    }
    public static final int _IOFBF;

    static native int _IOFBF();

    static {
        _IOFBF = _IOFBF();
    }

    public static final int _IOLBF;

    static native int _IOLBF();

    static {
        _IOLBF = _IOLBF();
    }

    public static final int _IONBF;

    static native int _IONBF();

    static {
        _IONBF = _IONBF();
    }

    public static final int BUFSIZ;

    static native int BUFSIZ();

    static {
        BUFSIZ = BUFSIZ();
    }

    public static final int EOF;

    static native int EOF();

    static {
        EOF = EOF();
    }

    public static final int FILENAME_MAX;

    static native int FILENAME_MAX();

    static {
        FILENAME_MAX = FILENAME_MAX();
    }

    public static final int FOPEN_MAX;

    static native int FOPEN_MAX();

    static {
        FOPEN_MAX = FOPEN_MAX();
    }

    public static final int SEEK_SET;

    static native int SEEK_SET();

    static {
        SEEK_SET = SEEK_SET();
    }

    public static final int SEEK_CUR;

    static native int SEEK_CUR();

    static {
        SEEK_CUR = SEEK_CUR();
    }

    public static final int SEEK_END;

    static native int SEEK_END();

    static {
        SEEK_END = SEEK_END();
    }

    public static native int getchar();

    public static native int putchar(int ch);

    /**
     * Invokes {@code puts(char *)} with given byte array and returns the
     * result.
     *
     * @param str the string.
     *
     * @return the result.
     */
    public static native int puts(byte[] str);

}
