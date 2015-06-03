

import java.io.FileDescriptor;


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
/**
 *
 * @author Jin Kwon &lt;jinahya_at_gmail.com&gt;
 */
public class JniStdio {


    public static final FileDescriptor stdout;


    static native FileDescriptor stdout_();


    static {
        stdout = stdout_();
    }


    public static final int BUFSIZ;


    static native int BUFSIZ_();


    static {
        BUFSIZ = BUFSIZ_();
    }


    public static final int EOF;


    static native int EOF_();


    //static native boolean iseof_(final int i);
    static {
        EOF = EOF_();
    }


    public static final int FILENAME_MAX;


    static native int FILENAME_MAX_();


    static {
        FILENAME_MAX = FILENAME_MAX_();
    }


    public static final int FOPEN_MAX;


    static native int FOPEN_MAX_();


    static {
        FOPEN_MAX = FOPEN_MAX_();
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

