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

#include "MyTypeBean_Wrapper.h"

/**
 * Wrapper methods for MyTypeBean
 */
void* MyTypeBean_Wrapper::execCreateMethod(string& method, void** Prams, int num)
{
	if( !method.compare("MyTypeBean") && num == 0 )
		return (void*)(this->pBean = new MyTypeBean());
	if( !method.compare("getCStr") && num == 0 )
		return (void*)(this->pBean->getCStr());
	if( !method.compare("getUCStr") && num == 0 )
		return (void*)(this->pBean->getUCStr());

	return NULL;
}

int MyTypeBean_Wrapper::execVoidMethod(string& method, void** Prams, int num)
{
	if( !method.compare("setMyData") && num == 1 )
		this->pBean->setMyData(
					 *(MyData**)Prams[0]);
	else 
		return -1;

	return 0;
}

int MyTypeBean_Wrapper::getParamTypes(string& method, string& types, int num)
{
	if( !method.compare("MyTypeBean") && num == 0 )
		types = string("");
	else if( !method.compare("setMyData") && num == 1 )
		types = string("")
			  + "MyData*|";
	else if( !method.compare("getChar") && num == 0 )
		types = string("");
	else if( !method.compare("getUChar") && num == 0 )
		types = string("");
	else if( !method.compare("getShort") && num == 0 )
		types = string("");
	else if( !method.compare("getUShort") && num == 0 )
		types = string("");
	else if( !method.compare("getInt") && num == 0 )
		types = string("");
	else if( !method.compare("getUInt") && num == 0 )
		types = string("");
	else if( !method.compare("getLong") && num == 0 )
		types = string("");
	else if( !method.compare("getULong") && num == 0 )
		types = string("");
	else if( !method.compare("getFloat") && num == 0 )
		types = string("");
	else if( !method.compare("getDouble") && num == 0 )
		types = string("");
	else if( !method.compare("getString") && num == 0 )
		types = string("");
	else if( !method.compare("getCStr") && num == 0 )
		types = string("");
	else if( !method.compare("getUCStr") && num == 0 )
		types = string("");
	else 
		return -1;

	return 0;
}

void* MyTypeBean_Wrapper::cast2Base(const string basename)
{
	if( basename == "IBasicTypesBean" )
		return (IBasicTypesBean*)(this->pBean);

	return this->pBean;
}

extern "C"{
	IBeanWrapper* create_MyTypeBean_Wrapper(){
		return new MyTypeBean_Wrapper;
	}
	void delete_MyTypeBean_Wrapper(IBeanWrapper* p){
		delete p;
	}
}

AUTUMN_MyTypeBean_Wrapper_Local _AUTUMN_MyTypeBean_Wrapper_Local_;
