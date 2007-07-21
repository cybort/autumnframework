/*
 * Generated by Autumn Generator.
 * 
 * Copyright 2006 the original author or authors.
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

#ifndef UPPERACTION_WRAPPER_H
#define UPPERACTION_WRAPPER_H

#include "IBeanWrapper.h"
#include "UpperAction.h"

/**
 * Wrapper for UpperAction
 */
class UpperAction_Wrapper: public IBeanWrapper{
	UpperAction* pBean;

public: 
	UpperAction_Wrapper(){
		this->setBeanName("UpperAction");
		this->pBean = NULL;
	}

	~UpperAction_Wrapper(){
		if( this->pBean && !this->deleteBean() )
			delete this->pBean;
	}

	void* getBean(){ return (void*)this->pBean; }
	void  setBean(void* p){
		this->pBean = (UpperAction*)p;
	}

	void* execCreateMethod(string& method, void** Prams, int num);

	int execVoidMethod(string& method, void** Prams, int num);

	int getParamTypes(string& method, string& types, int num);

	void* cast2Base(const string basename);

};

extern "C"{
	DLL_EXPORT IBeanWrapper* create_UpperAction_Wrapper();
	DLL_EXPORT void delete_UpperAction_Wrapper(IBeanWrapper*);
}

class AUTUMN_UpperAction_Wrapper_Local{
public:
	AUTUMN_UpperAction_Wrapper_Local(){
		registerLocalFunction(
				"create_UpperAction_Wrapper",
				(void*)create_UpperAction_Wrapper);
		registerLocalFunction(
				"delete_UpperAction_Wrapper",
				(void*)delete_UpperAction_Wrapper);
	}
};

#endif