/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.storage.MDBItem
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_STORAGE_MDBITEM_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_STORAGE_MDBITEM_HPP_DECL


namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ContentValues.hpp>
#include <android/database/Cursor.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace storage {

	class MDBItem;
	class MDBItem
		: public object<MDBItem>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit MDBItem(jobject jobj)
		: object<MDBItem>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void convertFrom(local_ref< android::database::Cursor >  const&);
		local_ref< android::content::ContentValues > convertTo();
	}; //class MDBItem

} //namespace storage
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_STORAGE_MDBITEM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_STORAGE_MDBITEM_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_STORAGE_MDBITEM_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::storage::MDBItem::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void com::tencent::mm::sdk::storage::MDBItem::convertFrom(local_ref< android::database::Cursor > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::storage::MDBItem::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::MDBItem::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::storage::MDBItem::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

local_ref< android::content::ContentValues > com::tencent::mm::sdk::storage::MDBItem::convertTo()
{
	return call_method<
		com::tencent::mm::sdk::storage::MDBItem::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::MDBItem::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::storage::MDBItem::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::content::ContentValues >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::storage::MDBItem,"com/tencent/mm/sdk/storage/MDBItem")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::MDBItem,0,"convertFrom","(Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::MDBItem,1,"convertTo","()Landroid/content/ContentValues;")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_STORAGE_MDBITEM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION