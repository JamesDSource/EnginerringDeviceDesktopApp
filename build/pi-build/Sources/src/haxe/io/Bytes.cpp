// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <hxinc/haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <hxinc/haxe/io/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9b41d18c70d7259d_33_new,"haxe.io.Bytes","new",0x3938d57d,"haxe.io.Bytes.new","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",33,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_75_blit,"haxe.io.Bytes","blit",0xd098ac78,"haxe.io.Bytes.blit","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",75,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_127_sub,"haxe.io.Bytes","sub",0x393cae9d,"haxe.io.Bytes.sub","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",127,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_241_setDouble,"haxe.io.Bytes","setDouble",0xa657d930,"haxe.io.Bytes.setDouble","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",241,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_264_setFloat,"haxe.io.Bytes","setFloat",0xdaed805d,"haxe.io.Bytes.setFloat","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",264,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_349_getString,"haxe.io.Bytes","getString",0xa16beae4,"haxe.io.Bytes.getString","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",349,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_449_toString,"haxe.io.Bytes","toString",0x0291226f,"haxe.io.Bytes.toString","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",449,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_471_alloc,"haxe.io.Bytes","alloc",0x2199ead2,"haxe.io.Bytes.alloc","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",471,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_500_ofString,"haxe.io.Bytes","ofString",0x6e53bb0b,"haxe.io.Bytes.ofString","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",500,0xd6fbb50b)
HX_LOCAL_STACK_FRAME(_hx_pos_9b41d18c70d7259d_578_ofData,"haxe.io.Bytes","ofData",0x4f3005e4,"haxe.io.Bytes.ofData","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Bytes.hx",578,0xd6fbb50b)
namespace haxe{
namespace io{

void Bytes_obj::__construct(int length,::Array< unsigned char > b){
            	HX_STACKFRAME(&_hx_pos_9b41d18c70d7259d_33_new)
HXLINE(  34)		this->length = length;
HXLINE(  35)		this->b = b;
            	}

Dynamic Bytes_obj::__CreateEmpty() { return new Bytes_obj; }

void *Bytes_obj::_hx_vtable = 0;

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bytes_obj > _hx_result = new Bytes_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Bytes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b931193;
}

void Bytes_obj::blit(int pos, ::haxe::io::Bytes src,int srcpos,int len){
            	HX_STACKFRAME(&_hx_pos_9b41d18c70d7259d_75_blit)
HXLINE(  77)		bool _hx_tmp;
HXDLIN(  77)		bool _hx_tmp1;
HXDLIN(  77)		bool _hx_tmp2;
HXDLIN(  77)		bool _hx_tmp3;
HXDLIN(  77)		if ((pos >= 0)) {
HXLINE(  77)			_hx_tmp3 = (srcpos < 0);
            		}
            		else {
HXLINE(  77)			_hx_tmp3 = true;
            		}
HXDLIN(  77)		if (!(_hx_tmp3)) {
HXLINE(  77)			_hx_tmp2 = (len < 0);
            		}
            		else {
HXLINE(  77)			_hx_tmp2 = true;
            		}
HXDLIN(  77)		if (!(_hx_tmp2)) {
HXLINE(  77)			_hx_tmp1 = ((pos + len) > this->length);
            		}
            		else {
HXLINE(  77)			_hx_tmp1 = true;
            		}
HXDLIN(  77)		if (!(_hx_tmp1)) {
HXLINE(  77)			_hx_tmp = ((srcpos + len) > src->length);
            		}
            		else {
HXLINE(  77)			_hx_tmp = true;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  77)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  91)		this->b->blit(pos,src->b,srcpos,len);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Bytes_obj,blit,(void))

 ::haxe::io::Bytes Bytes_obj::sub(int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_9b41d18c70d7259d_127_sub)
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		bool _hx_tmp1;
HXDLIN( 129)		if ((pos >= 0)) {
HXLINE( 129)			_hx_tmp1 = (len < 0);
            		}
            		else {
HXLINE( 129)			_hx_tmp1 = true;
            		}
HXDLIN( 129)		if (!(_hx_tmp1)) {
HXLINE( 129)			_hx_tmp = ((pos + len) > this->length);
            		}
            		else {
HXLINE( 129)			_hx_tmp = true;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 129)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE( 149)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,len,this->b->slice(pos,(pos + len)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,sub,return )

void Bytes_obj::setDouble(int pos,Float v){
            	HX_STACKFRAME(&_hx_pos_9b41d18c70d7259d_241_setDouble)
HXLINE( 250)		bool _hx_tmp;
HXDLIN( 250)		if ((pos >= 0)) {
HXLINE( 250)			_hx_tmp = ((pos + 8) > this->length);
            		}
            		else {
HXLINE( 250)			_hx_tmp = true;
            		}
HXDLIN( 250)		if (_hx_tmp) {
HXLINE( 250)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE( 251)		 ::__hxcpp_memory_set_double(this->b,pos,v);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setDouble,(void))

void Bytes_obj::setFloat(int pos,Float v){
            	HX_STACKFRAME(&_hx_pos_9b41d18c70d7259d_264_setFloat)
HXLINE( 273)		bool _hx_tmp;
HXDLIN( 273)		if ((pos >= 0)) {
HXLINE( 273)			_hx_tmp = ((pos + 4) > this->length);
            		}
            		else {
HXLINE( 273)			_hx_tmp = true;
            		}
HXDLIN( 273)		if (_hx_tmp) {
HXLINE( 273)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE( 274)		 ::__hxcpp_memory_set_float(this->b,pos,v);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,setFloat,(void))

::String Bytes_obj::getString(int pos,int len, ::haxe::io::Encoding encoding){
            	HX_STACKFRAME(&_hx_pos_9b41d18c70d7259d_349_getString)
HXLINE( 350)		bool _hx_tmp = hx::IsNull( encoding );
HXLINE( 352)		bool _hx_tmp1;
HXDLIN( 352)		bool _hx_tmp2;
HXDLIN( 352)		if ((pos >= 0)) {
HXLINE( 352)			_hx_tmp2 = (len < 0);
            		}
            		else {
HXLINE( 352)			_hx_tmp2 = true;
            		}
HXDLIN( 352)		if (!(_hx_tmp2)) {
HXLINE( 352)			_hx_tmp1 = ((pos + len) > this->length);
            		}
            		else {
HXLINE( 352)			_hx_tmp1 = true;
            		}
HXDLIN( 352)		if (_hx_tmp1) {
HXLINE( 352)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE( 360)		::String result = HX_("",00,00,00,00);
HXLINE( 361)		 ::__hxcpp_string_of_bytes(this->b,result,pos,len);
HXLINE( 362)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Bytes_obj,getString,return )

::String Bytes_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_9b41d18c70d7259d_449_toString)
HXDLIN( 449)		return this->getString(0,this->length,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toString,return )

 ::haxe::io::Bytes Bytes_obj::alloc(int length){
            	HX_GC_STACKFRAME(&_hx_pos_9b41d18c70d7259d_471_alloc)
HXLINE( 479)		::Array< unsigned char > a = ::Array_obj< unsigned char >::__new();
HXLINE( 480)		if ((length > 0)) {
HXLINE( 480)			_hx_array_set_size_exact(a,length);
            		}
HXLINE( 481)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,length,a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

 ::haxe::io::Bytes Bytes_obj::ofString(::String s, ::haxe::io::Encoding encoding){
            	HX_GC_STACKFRAME(&_hx_pos_9b41d18c70d7259d_500_ofString)
HXLINE( 508)		::Array< unsigned char > a = ::Array_obj< unsigned char >::__new();
HXLINE( 509)		 ::__hxcpp_bytes_of_string(a,s);
HXLINE( 510)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,a->length,a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,ofString,return )

 ::haxe::io::Bytes Bytes_obj::ofData(::Array< unsigned char > b){
            	HX_GC_STACKFRAME(&_hx_pos_9b41d18c70d7259d_578_ofData)
HXDLIN( 578)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,b->length,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )


hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,::Array< unsigned char > b) {
	hx::ObjectPtr< Bytes_obj > __this = new Bytes_obj();
	__this->__construct(length,b);
	return __this;
}

hx::ObjectPtr< Bytes_obj > Bytes_obj::__alloc(hx::Ctx *_hx_ctx,int length,::Array< unsigned char > b) {
	Bytes_obj *__this = (Bytes_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bytes_obj), true, "haxe.io.Bytes"));
	*(void **)__this = Bytes_obj::_hx_vtable;
	__this->__construct(length,b);
	return __this;
}

Bytes_obj::Bytes_obj()
{
}

void Bytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bytes);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void Bytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(b,"b");
}

hx::Val Bytes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return hx::Val( sub_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return hx::Val( blit_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setFloat") ) { return hx::Val( setFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setDouble") ) { return hx::Val( setDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"getString") ) { return hx::Val( getString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
	}
	return false;
}

hx::Val Bytes_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("b",62,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Bytes_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Bytes_obj,length),HX_("length",e6,94,07,9f)},
	{hx::fsObject /* ::Array< unsigned char > */ ,(int)offsetof(Bytes_obj,b),HX_("b",62,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bytes_obj_sStaticStorageInfo = 0;
#endif

static ::String Bytes_obj_sMemberFields[] = {
	HX_("length",e6,94,07,9f),
	HX_("b",62,00,00,00),
	HX_("blit",35,38,19,41),
	HX_("sub",80,a9,57,00),
	HX_("setDouble",53,a0,72,92),
	HX_("setFloat",9a,2e,cb,10),
	HX_("getString",07,b2,86,8d),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class Bytes_obj::__mClass;

static ::String Bytes_obj_sStaticFields[] = {
	HX_("alloc",75,a4,93,21),
	HX_("ofString",48,69,31,a4),
	HX_("ofData",e1,ba,b8,49),
	::String(null())
};

void Bytes_obj::__register()
{
	Bytes_obj _hx_dummy;
	Bytes_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Bytes",0b,53,6f,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Bytes_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bytes_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bytes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bytes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bytes_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
