

import java.math.BigInteger;


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
/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class JniStdint {


    public static final long PTRDIFF_MIN;


    static native long PTRDIFF_MIN();


    static {
        PTRDIFF_MIN = PTRDIFF_MIN();
    }


    public static final long PTRDIFF_MAX;


    static native long PTRDIFF_MAX();


    static {
        PTRDIFF_MAX = PTRDIFF_MAX();
    }


    public static final BigInteger SIZE_MAX;


    static native void SIZE_MAX(byte[] bytes);


    static {
        final byte[] bytes = new byte[8];
        SIZE_MAX(bytes);
        SIZE_MAX = new BigInteger(bytes);
    }


}

