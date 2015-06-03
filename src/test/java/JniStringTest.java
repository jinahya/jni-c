

import static org.testng.Assert.assertEquals;
import static org.testng.Assert.assertTrue;
import org.testng.annotations.Test;


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
public class JniStringTest {


    static {
        System.loadLibrary("jnic-0.1-SNAPSHOT");
    }


    @Test
    public static void strcat() {

        final byte[] dst = new byte[]{0x41, 0x42, 0x00, 0x00, 0x00};
        final byte[] src = new byte[]{0x61, 0x62, 0x00};

        final byte[] cat = JniString.strcat(dst, src);

        for (int i = 0; i < src.length; i++) {
            assertEquals(dst[2 + i], src[i]);
        }
    }


    @Test
    public static void strcpy() {

        final byte[] dst = new byte[]{0x41, 0x42, 0x00};
        final byte[] src = new byte[]{0x61, 0x62, 0x00};

        assertTrue(dst.length >= src.length);
        final byte[] cpy = JniString.strcpy(dst, src);

        for (int i = 0; i < src.length; i++) {
            assertEquals(dst[i], src[i]);
        }

    }


}

