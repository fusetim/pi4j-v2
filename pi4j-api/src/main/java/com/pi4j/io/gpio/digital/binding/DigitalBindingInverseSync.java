package com.pi4j.io.gpio.digital.binding;

/*-
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: LIBRARY  :: Java Library (API)
 * FILENAME      :  DigitalBindingInverseSync.java
 *
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  https://pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2019 Pi4J
 * %%
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
 * #L%
 */

import com.pi4j.io.exception.IOException;
import com.pi4j.io.gpio.digital.*;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class DigitalBindingInverseSync extends DigitalBindingBase<DigitalOutput, DigitalOutputConfig, DigitalOutputProvider> implements DigitalBinding<DigitalOutput> {
    private Logger logger = LoggerFactory.getLogger(this.getClass());
    /**
     * Default Constructor
     * @param target Variable argument list of analog outputs
     */
    public DigitalBindingInverseSync(DigitalOutput ... target){
        super(target);
    }

    @Override
    public void process(DigitalChangeEvent event) {
        targets.forEach((target)->{
            try {
                ((DigitalOutput)target).state(DigitalState.getInverseState(event.state()));
            } catch (IOException e) {
                logger.error(e.getMessage(), e);
            }
        });
    }
}
