/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.TypeNotPresentException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_TYPENOTPRESENTEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_TYPENOTPRESENTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class TypeNotPresentException;
	class TypeNotPresentException
		: public object<TypeNotPresentException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit TypeNotPresentException(jobject jobj)
		: object<TypeNotPresentException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::io::Serializable>() const;


		TypeNotPresentException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		local_ref< java::lang::String > typeName();
	}; //class TypeNotPresentException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_TYPENOTPRESENTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_TYPENOTPRESENTEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_TYPENOTPRESENTEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::TypeNotPresentException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::lang::TypeNotPresentException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::TypeNotPresentException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::lang::TypeNotPresentException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::TypeNotPresentException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::lang::TypeNotPresentException::TypeNotPresentException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::lang::TypeNotPresentException>(
	call_new_object<
		java::lang::TypeNotPresentException::J2CPP_CLASS_NAME,
		java::lang::TypeNotPresentException::J2CPP_METHOD_NAME(0),
		java::lang::TypeNotPresentException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::lang::String > java::lang::TypeNotPresentException::typeName()
{
	return call_method<
		java::lang::TypeNotPresentException::J2CPP_CLASS_NAME,
		java::lang::TypeNotPresentException::J2CPP_METHOD_NAME(1),
		java::lang::TypeNotPresentException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::TypeNotPresentException,"java/lang/TypeNotPresentException")
J2CPP_DEFINE_METHOD(java::lang::TypeNotPresentException,0,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::TypeNotPresentException,1,"typeName","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_TYPENOTPRESENTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
