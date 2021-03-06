/*
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

#ifndef AUTUMNGEN_GENEXCEPTION_H
#define AUTUMNGEN_GENEXCEPTION_H

#include <iostream>
#include <string>

using namespace std;

/** Exception when parsing a file */
class GenException: public exception{
public:
	GenException(const string& msg, int lineno = 0,
				 const string& filename = ""){
		if( filename.compare("") != 0)
			cerr<< filename << ": ";
		if( lineno != 0)
			cerr<< "at line[" << lineno << "]: ";
		cerr<< msg << endl;
	}
};

#endif
