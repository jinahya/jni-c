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
public class JniLimits {


    public static final int CHAR_BIT;


    static native int CHAR_BIT();


    static {
        CHAR_BIT = CHAR_BIT();
    }


    public static final int MB_LEN_MAX;


    static native int MB_LEN_MAX();


    static {
        MB_LEN_MAX = MB_LEN_MAX();
    }


}

