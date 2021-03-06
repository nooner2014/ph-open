/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.InstrumentationTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTCASE_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class Assert; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class TestCase; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace app { class Instrumentation; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }


#include <android/app/Activity.hpp>
#include <android/app/Instrumentation.hpp>
#include <android/content/Intent.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>
#include <junit/framework/Assert.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestCase.hpp>


namespace j2cpp {

namespace android { namespace test {

	class InstrumentationTestCase;
	class InstrumentationTestCase
		: public object<InstrumentationTestCase>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)

		explicit InstrumentationTestCase(jobject jobj)
		: object<InstrumentationTestCase>(jobj)
		{
		}

		operator local_ref<junit::framework::Assert>() const;
		operator local_ref<junit::framework::Test>() const;
		operator local_ref<junit::framework::TestCase>() const;
		operator local_ref<java::lang::Object>() const;


		InstrumentationTestCase();
		void injectInstrumentation(local_ref< android::app::Instrumentation >  const&);
		void injectInsrumentation(local_ref< android::app::Instrumentation >  const&);
		local_ref< android::app::Instrumentation > getInstrumentation();
		local_ref< android::app::Activity > launchActivity(local_ref< java::lang::String >  const&, local_ref< java::lang::Class >  const&, local_ref< android::os::Bundle >  const&);
		local_ref< android::app::Activity > launchActivityWithIntent(local_ref< java::lang::String >  const&, local_ref< java::lang::Class >  const&, local_ref< android::content::Intent >  const&);
		void runTestOnUiThread(local_ref< java::lang::Runnable >  const&);
		void sendKeys(local_ref< java::lang::String >  const&);
		void sendKeys(local_ref< array<jint,1> >  const&);
		void sendRepeatedKeys(local_ref< array<jint,1> >  const&);
	}; //class InstrumentationTestCase

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTCASE_HPP_IMPL

namespace j2cpp {



android::test::InstrumentationTestCase::operator local_ref<junit::framework::Assert>() const
{
	return local_ref<junit::framework::Assert>(get_jobject());
}

android::test::InstrumentationTestCase::operator local_ref<junit::framework::Test>() const
{
	return local_ref<junit::framework::Test>(get_jobject());
}

android::test::InstrumentationTestCase::operator local_ref<junit::framework::TestCase>() const
{
	return local_ref<junit::framework::TestCase>(get_jobject());
}

android::test::InstrumentationTestCase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::test::InstrumentationTestCase::InstrumentationTestCase()
: object<android::test::InstrumentationTestCase>(
	call_new_object<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(0),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::test::InstrumentationTestCase::injectInstrumentation(local_ref< android::app::Instrumentation > const &a0)
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(1),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::test::InstrumentationTestCase::injectInsrumentation(local_ref< android::app::Instrumentation > const &a0)
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(2),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

local_ref< android::app::Instrumentation > android::test::InstrumentationTestCase::getInstrumentation()
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(3),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::app::Instrumentation >
	>(get_jobject());
}

local_ref< android::app::Activity > android::test::InstrumentationTestCase::launchActivity(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1, local_ref< android::os::Bundle > const &a2)
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(4),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::app::Activity >
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::app::Activity > android::test::InstrumentationTestCase::launchActivityWithIntent(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1, local_ref< android::content::Intent > const &a2)
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(5),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::app::Activity >
	>(get_jobject(), a0, a1, a2);
}

void android::test::InstrumentationTestCase::runTestOnUiThread(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(6),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


void android::test::InstrumentationTestCase::sendKeys(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(8),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void android::test::InstrumentationTestCase::sendKeys(local_ref< array<jint,1> > const &a0)
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(9),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void android::test::InstrumentationTestCase::sendRepeatedKeys(local_ref< array<jint,1> > const &a0)
{
	return call_method<
		android::test::InstrumentationTestCase::J2CPP_CLASS_NAME,
		android::test::InstrumentationTestCase::J2CPP_METHOD_NAME(10),
		android::test::InstrumentationTestCase::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::test::InstrumentationTestCase,"android/test/InstrumentationTestCase")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,1,"injectInstrumentation","(Landroid/app/Instrumentation;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,2,"injectInsrumentation","(Landroid/app/Instrumentation;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,3,"getInstrumentation","()Landroid/app/Instrumentation;")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,4,"launchActivity","(Ljava/lang/String;Ljava/lang/Class;Landroid/os/Bundle;)Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,5,"launchActivityWithIntent","(Ljava/lang/String;Ljava/lang/Class;Landroid/content/Intent;)Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,6,"runTestOnUiThread","(Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,7,"runTest","()V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,8,"sendKeys","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,9,"sendKeys","([I)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,10,"sendRepeatedKeys","([I)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestCase,11,"tearDown","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
