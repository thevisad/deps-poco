//
// Preparation.h
//
// $Id: //poco/1.4/Data/testsuite/src/Preparation.h#1 $
//
// Definition of the Preparation class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef Data_Test_Preparation_INCLUDED
#define Data_Test_Preparation_INCLUDED


#include "Poco/Data/AbstractPreparation.h"
#include "Poco/Any.h"


namespace Poco {
namespace Data {
namespace Test {


class Preparation: public Poco::Data::AbstractPreparation
	/// A no-op implementation of AbstractPreparation for testing.
{
public:
	Preparation();
		/// Creates the Preparation.

	~Preparation();
		/// Destroys the Preparation.

	void prepare(std::size_t pos, Poco::Int8);
		/// Extracts an Int8.

	void prepare(std::size_t pos, Poco::UInt8);
		/// Extracts an UInt8.

	void prepare(std::size_t pos, Poco::Int16);
		/// Extracts an Int16.

	void prepare(std::size_t pos, Poco::UInt16);
		/// Extracts an UInt16.

	void prepare(std::size_t pos, Poco::Int32);
		/// Extracts an Int32.

	void prepare(std::size_t pos, Poco::UInt32);
		/// Extracts an UInt32.

	void prepare(std::size_t pos, Poco::Int64);
		/// Extracts an Int64.

	void prepare(std::size_t pos, Poco::UInt64);
		/// Extracts an UInt64.

	void prepare(std::size_t pos, bool);
		/// Extracts a boolean.

	void prepare(std::size_t pos, float);
		/// Extracts a float.

	void prepare(std::size_t pos, double);
		/// Extracts a double.

	void prepare(std::size_t pos, char);
		/// Extracts a single character.

	void prepare(std::size_t pos, const std::string&);
		/// Extracts a string.

	void prepare(std::size_t pos, const Poco::Data::BLOB&);
		/// Extracts a BLOB.

	void prepare(std::size_t pos, const Poco::Any&);
		/// Extracts an Any.
};


} } } // namespace Poco::Data::Test


#endif // Data_Test_Preparation_INCLUDED
