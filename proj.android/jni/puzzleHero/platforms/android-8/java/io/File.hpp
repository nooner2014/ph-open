/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.File
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILE_HPP_DECL
#define J2CPP_JAVA_IO_FILE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class FilenameFilter; } } }
namespace j2cpp { namespace java { namespace io { class FileFilter; } } }


#include <java/io/FileFilter.hpp>
#include <java/io/FilenameFilter.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URI.hpp>
#include <java/net/URL.hpp>


namespace j2cpp {

namespace java { namespace io {

	class File;
	class File
		: public object<File>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit File(jobject jobj)
		: object<File>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::io::Serializable>() const;


		File(local_ref< java::io::File > const&, local_ref< java::lang::String > const&);
		File(local_ref< java::lang::String > const&);
		File(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		File(local_ref< java::net::URI > const&);
		static local_ref< array< local_ref< java::io::File >, 1> > listRoots();
		jboolean canRead();
		jboolean canWrite();
		jint compareTo(local_ref< java::io::File >  const&);
		jboolean delete_();
		void deleteOnExit();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jboolean exists();
		local_ref< java::lang::String > getAbsolutePath();
		local_ref< java::io::File > getAbsoluteFile();
		local_ref< java::lang::String > getCanonicalPath();
		local_ref< java::io::File > getCanonicalFile();
		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getParent();
		local_ref< java::io::File > getParentFile();
		local_ref< java::lang::String > getPath();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isDirectory();
		jboolean isFile();
		jboolean isHidden();
		jlong lastModified();
		jboolean setLastModified(jlong);
		jboolean setReadOnly();
		jlong length();
		local_ref< array< local_ref< java::lang::String >, 1> > list();
		local_ref< array< local_ref< java::lang::String >, 1> > list(local_ref< java::io::FilenameFilter >  const&);
		local_ref< array< local_ref< java::io::File >, 1> > listFiles();
		local_ref< array< local_ref< java::io::File >, 1> > listFiles(local_ref< java::io::FilenameFilter >  const&);
		local_ref< array< local_ref< java::io::File >, 1> > listFiles(local_ref< java::io::FileFilter >  const&);
		jboolean mkdir();
		jboolean mkdirs();
		jboolean createNewFile();
		static local_ref< java::io::File > createTempFile(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::io::File > createTempFile(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::io::File >  const&);
		jboolean renameTo(local_ref< java::io::File >  const&);
		local_ref< java::lang::String > toString();
		local_ref< java::net::URI > toURI();
		local_ref< java::net::URL > toURL();
		jint compareTo(local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jchar > separatorChar;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > separator;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jchar > pathSeparatorChar;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > pathSeparator;
	}; //class File

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILE_HPP_IMPL
#define J2CPP_JAVA_IO_FILE_HPP_IMPL

namespace j2cpp {



java::io::File::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::File::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::io::File::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::io::File::File(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::File>(
	call_new_object<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(0),
		java::io::File::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



java::io::File::File(local_ref< java::lang::String > const &a0)
: object<java::io::File>(
	call_new_object<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(1),
		java::io::File::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::io::File::File(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::File>(
	call_new_object<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(2),
		java::io::File::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::io::File::File(local_ref< java::net::URI > const &a0)
: object<java::io::File>(
	call_new_object<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(3),
		java::io::File::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}


local_ref< array< local_ref< java::io::File >, 1> > java::io::File::listRoots()
{
	return call_static_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(4),
		java::io::File::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< java::io::File >, 1> >
	>();
}

jboolean java::io::File::canRead()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(5),
		java::io::File::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

jboolean java::io::File::canWrite()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(6),
		java::io::File::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

jint java::io::File::compareTo(local_ref< java::io::File > const &a0)
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(7),
		java::io::File::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

jboolean java::io::File::delete_()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(8),
		java::io::File::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

void java::io::File::deleteOnExit()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(9),
		java::io::File::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}

jboolean java::io::File::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(10),
		java::io::File::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::io::File::exists()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(11),
		java::io::File::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > java::io::File::getAbsolutePath()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(12),
		java::io::File::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::io::File > java::io::File::getAbsoluteFile()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(13),
		java::io::File::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::io::File >
	>(get_jobject());
}

local_ref< java::lang::String > java::io::File::getCanonicalPath()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(14),
		java::io::File::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::io::File > java::io::File::getCanonicalFile()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(15),
		java::io::File::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::io::File >
	>(get_jobject());
}

local_ref< java::lang::String > java::io::File::getName()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(16),
		java::io::File::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::io::File::getParent()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(17),
		java::io::File::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::io::File > java::io::File::getParentFile()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(18),
		java::io::File::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::io::File >
	>(get_jobject());
}

local_ref< java::lang::String > java::io::File::getPath()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(19),
		java::io::File::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::io::File::hashCode()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(20),
		java::io::File::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject());
}

jboolean java::io::File::isAbsolute()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(21),
		java::io::File::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject());
}

jboolean java::io::File::isDirectory()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(22),
		java::io::File::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject());
}

jboolean java::io::File::isFile()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(23),
		java::io::File::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(get_jobject());
}

jboolean java::io::File::isHidden()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(24),
		java::io::File::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject());
}

jlong java::io::File::lastModified()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(25),
		java::io::File::J2CPP_METHOD_SIGNATURE(25), 
		jlong
	>(get_jobject());
}

jboolean java::io::File::setLastModified(jlong a0)
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(26),
		java::io::File::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::io::File::setReadOnly()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(27),
		java::io::File::J2CPP_METHOD_SIGNATURE(27), 
		jboolean
	>(get_jobject());
}

jlong java::io::File::length()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(28),
		java::io::File::J2CPP_METHOD_SIGNATURE(28), 
		jlong
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > java::io::File::list()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(29),
		java::io::File::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > java::io::File::list(local_ref< java::io::FilenameFilter > const &a0)
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(30),
		java::io::File::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::io::File >, 1> > java::io::File::listFiles()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(31),
		java::io::File::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< array< local_ref< java::io::File >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::io::File >, 1> > java::io::File::listFiles(local_ref< java::io::FilenameFilter > const &a0)
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(32),
		java::io::File::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< array< local_ref< java::io::File >, 1> >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::io::File >, 1> > java::io::File::listFiles(local_ref< java::io::FileFilter > const &a0)
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(33),
		java::io::File::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< array< local_ref< java::io::File >, 1> >
	>(get_jobject(), a0);
}

jboolean java::io::File::mkdir()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(34),
		java::io::File::J2CPP_METHOD_SIGNATURE(34), 
		jboolean
	>(get_jobject());
}

jboolean java::io::File::mkdirs()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(35),
		java::io::File::J2CPP_METHOD_SIGNATURE(35), 
		jboolean
	>(get_jobject());
}

jboolean java::io::File::createNewFile()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(36),
		java::io::File::J2CPP_METHOD_SIGNATURE(36), 
		jboolean
	>(get_jobject());
}

local_ref< java::io::File > java::io::File::createTempFile(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(37),
		java::io::File::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::io::File >
	>(a0, a1);
}

local_ref< java::io::File > java::io::File::createTempFile(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::io::File > const &a2)
{
	return call_static_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(38),
		java::io::File::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::io::File >
	>(a0, a1, a2);
}

jboolean java::io::File::renameTo(local_ref< java::io::File > const &a0)
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(39),
		java::io::File::J2CPP_METHOD_SIGNATURE(39), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::io::File::toString()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(40),
		java::io::File::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::net::URI > java::io::File::toURI()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(41),
		java::io::File::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< java::net::URI >
	>(get_jobject());
}

local_ref< java::net::URL > java::io::File::toURL()
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(42),
		java::io::File::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< java::net::URL >
	>(get_jobject());
}

jint java::io::File::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::io::File::J2CPP_CLASS_NAME,
		java::io::File::J2CPP_METHOD_NAME(43),
		java::io::File::J2CPP_METHOD_SIGNATURE(43), 
		jint
	>(get_jobject(), a0);
}



static_field<
	java::io::File::J2CPP_CLASS_NAME,
	java::io::File::J2CPP_FIELD_NAME(0),
	java::io::File::J2CPP_FIELD_SIGNATURE(0),
	jchar
> java::io::File::separatorChar;

static_field<
	java::io::File::J2CPP_CLASS_NAME,
	java::io::File::J2CPP_FIELD_NAME(1),
	java::io::File::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> java::io::File::separator;

static_field<
	java::io::File::J2CPP_CLASS_NAME,
	java::io::File::J2CPP_FIELD_NAME(2),
	java::io::File::J2CPP_FIELD_SIGNATURE(2),
	jchar
> java::io::File::pathSeparatorChar;

static_field<
	java::io::File::J2CPP_CLASS_NAME,
	java::io::File::J2CPP_FIELD_NAME(3),
	java::io::File::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> java::io::File::pathSeparator;


J2CPP_DEFINE_CLASS(java::io::File,"java/io/File")
J2CPP_DEFINE_METHOD(java::io::File,0,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::File,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::File,2,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::File,3,"<init>","(Ljava/net/URI;)V")
J2CPP_DEFINE_METHOD(java::io::File,4,"listRoots","()[java.io.File")
J2CPP_DEFINE_METHOD(java::io::File,5,"canRead","()Z")
J2CPP_DEFINE_METHOD(java::io::File,6,"canWrite","()Z")
J2CPP_DEFINE_METHOD(java::io::File,7,"compareTo","(Ljava/io/File;)I")
J2CPP_DEFINE_METHOD(java::io::File,8,"delete","()Z")
J2CPP_DEFINE_METHOD(java::io::File,9,"deleteOnExit","()V")
J2CPP_DEFINE_METHOD(java::io::File,10,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::io::File,11,"exists","()Z")
J2CPP_DEFINE_METHOD(java::io::File,12,"getAbsolutePath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,13,"getAbsoluteFile","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,14,"getCanonicalPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,15,"getCanonicalFile","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,16,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,17,"getParent","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,18,"getParentFile","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,19,"getPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,20,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::io::File,21,"isAbsolute","()Z")
J2CPP_DEFINE_METHOD(java::io::File,22,"isDirectory","()Z")
J2CPP_DEFINE_METHOD(java::io::File,23,"isFile","()Z")
J2CPP_DEFINE_METHOD(java::io::File,24,"isHidden","()Z")
J2CPP_DEFINE_METHOD(java::io::File,25,"lastModified","()J")
J2CPP_DEFINE_METHOD(java::io::File,26,"setLastModified","(J)Z")
J2CPP_DEFINE_METHOD(java::io::File,27,"setReadOnly","()Z")
J2CPP_DEFINE_METHOD(java::io::File,28,"length","()J")
J2CPP_DEFINE_METHOD(java::io::File,29,"list","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::io::File,30,"list","(Ljava/io/FilenameFilter;)[java.lang.String")
J2CPP_DEFINE_METHOD(java::io::File,31,"listFiles","()[java.io.File")
J2CPP_DEFINE_METHOD(java::io::File,32,"listFiles","(Ljava/io/FilenameFilter;)[java.io.File")
J2CPP_DEFINE_METHOD(java::io::File,33,"listFiles","(Ljava/io/FileFilter;)[java.io.File")
J2CPP_DEFINE_METHOD(java::io::File,34,"mkdir","()Z")
J2CPP_DEFINE_METHOD(java::io::File,35,"mkdirs","()Z")
J2CPP_DEFINE_METHOD(java::io::File,36,"createNewFile","()Z")
J2CPP_DEFINE_METHOD(java::io::File,37,"createTempFile","(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,38,"createTempFile","(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,39,"renameTo","(Ljava/io/File;)Z")
J2CPP_DEFINE_METHOD(java::io::File,40,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,41,"toURI","()Ljava/net/URI;")
J2CPP_DEFINE_METHOD(java::io::File,42,"toURL","()Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::io::File,43,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::io::File,44,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::io::File,0,"separatorChar","C")
J2CPP_DEFINE_FIELD(java::io::File,1,"separator","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::io::File,2,"pathSeparatorChar","C")
J2CPP_DEFINE_FIELD(java::io::File,3,"pathSeparator","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION