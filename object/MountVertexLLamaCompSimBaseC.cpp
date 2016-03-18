// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.1
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:426


#include "MountVertexLLamaCompSimBaseC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Var_Size_Argument_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "MountVertexLLamaCompSimBaseC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:607

#if !defined (_CONTROL_LONGSEQ__ARG_TRAITS_)
#define _CONTROL_LONGSEQ__ARG_TRAITS_
  
  template<>
  class Arg_Traits<Control::LongSeq>
    : public
        Var_Size_Arg_Traits_T<
            Control::LongSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Control::MountVertexLLamaCompSimBase.

Control::MountVertexLLamaCompSimBase_ptr
TAO::Objref_Traits<Control::MountVertexLLamaCompSimBase>::duplicate (
    Control::MountVertexLLamaCompSimBase_ptr p)
{
  return Control::MountVertexLLamaCompSimBase::_duplicate (p);
}

void
TAO::Objref_Traits<Control::MountVertexLLamaCompSimBase>::release (
    Control::MountVertexLLamaCompSimBase_ptr p)
{
  ::CORBA::release (p);
}

Control::MountVertexLLamaCompSimBase_ptr
TAO::Objref_Traits<Control::MountVertexLLamaCompSimBase>::nil (void)
{
  return Control::MountVertexLLamaCompSimBase::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Control::MountVertexLLamaCompSimBase>::marshal (
    const Control::MountVertexLLamaCompSimBase_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*Control__TAO_MountVertexLLamaCompSimBase_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj) = 0;

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:80

void
Control::MountVertexLLamaCompSimBase::setSimValue (
  ::CORBA::Long rca,
  const ::Control::LongSeq & data)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_MountVertexLLamaCompSimBase_Proxy_Broker_ == 0)
    {
      Control_MountVertexLLamaCompSimBase_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_rca (rca);
  TAO::Arg_Traits< ::Control::LongSeq>::in_arg_val _tao_data (data);
  
  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_rca,
      &_tao_data
    };
  
  static TAO::Exception_Data
  _tao_Control_MountVertexLLamaCompSimBase_setSimValue_exceptiondata [] = 
    {
      {
        "IDL:alma/ControlExceptions/SimErrorEx:1.0",
        ControlExceptions::SimErrorEx::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , ControlExceptions::_tc_SimErrorEx
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };
  
  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "setSimValue",
      11,
      this->the_TAO_MountVertexLLamaCompSimBase_Proxy_Broker_
    );
  
  _tao_call.invoke (
      _tao_Control_MountVertexLLamaCompSimBase_setSimValue_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:80

::Control::LongSeq *
Control::MountVertexLLamaCompSimBase::getSimValue (
  ::CORBA::Long rca)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_MountVertexLLamaCompSimBase_Proxy_Broker_ == 0)
    {
      Control_MountVertexLLamaCompSimBase_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::Control::LongSeq>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_rca (rca);
  
  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_rca
    };
  
  static TAO::Exception_Data
  _tao_Control_MountVertexLLamaCompSimBase_getSimValue_exceptiondata [] = 
    {
      {
        "IDL:alma/ControlExceptions/SimErrorEx:1.0",
        ControlExceptions::SimErrorEx::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , ControlExceptions::_tc_SimErrorEx
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };
  
  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "getSimValue",
      11,
      this->the_TAO_MountVertexLLamaCompSimBase_Proxy_Broker_
    );
  
  _tao_call.invoke (
      _tao_Control_MountVertexLLamaCompSimBase_getSimValue_exceptiondata,
      1
    );
  
  return _tao_retval.retn ();
}

Control::MountVertexLLamaCompSimBase::MountVertexLLamaCompSimBase (void)
 : the_TAO_MountVertexLLamaCompSimBase_Proxy_Broker_ (0)
{
  this->Control_MountVertexLLamaCompSimBase_setup_collocation ();
}

void
Control::MountVertexLLamaCompSimBase::Control_MountVertexLLamaCompSimBase_setup_collocation ()
{
  if (::Control__TAO_MountVertexLLamaCompSimBase_Proxy_Broker_Factory_function_pointer)
    {
      this->the_TAO_MountVertexLLamaCompSimBase_Proxy_Broker_ =
        ::Control__TAO_MountVertexLLamaCompSimBase_Proxy_Broker_Factory_function_pointer (this);
    }
  
  this->Control_MountVertexLLama_setup_collocation ();
}

Control::MountVertexLLamaCompSimBase::~MountVertexLLamaCompSimBase (void)
{}

void 
Control::MountVertexLLamaCompSimBase::_tao_any_destructor (void *_tao_void_pointer)
{
  MountVertexLLamaCompSimBase *_tao_tmp_pointer =
    static_cast<MountVertexLLamaCompSimBase *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Control::MountVertexLLamaCompSimBase_ptr
Control::MountVertexLLamaCompSimBase::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<MountVertexLLamaCompSimBase>::narrow (
        _tao_objref,
        "IDL:alma/Control/MountVertexLLamaCompSimBase:1.0",
        Control__TAO_MountVertexLLamaCompSimBase_Proxy_Broker_Factory_function_pointer
      );
}

Control::MountVertexLLamaCompSimBase_ptr
Control::MountVertexLLamaCompSimBase::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<MountVertexLLamaCompSimBase>::unchecked_narrow (
        _tao_objref,
        "IDL:alma/Control/MountVertexLLamaCompSimBase:1.0",
        Control__TAO_MountVertexLLamaCompSimBase_Proxy_Broker_Factory_function_pointer
      );
}

Control::MountVertexLLamaCompSimBase_ptr
Control::MountVertexLLamaCompSimBase::_duplicate (MountVertexLLamaCompSimBase_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
Control::MountVertexLLamaCompSimBase::_tao_release (MountVertexLLamaCompSimBase_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Control::MountVertexLLamaCompSimBase::_is_a (const char *value)
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:alma/ACS/ACSComponent:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/ACS/CharacteristicModel:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/ACS/CharacteristicComponent:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/ControlDevice:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/HardwareDevice:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/MountBase:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/Mount:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/MountVertexBase:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/MountVertex:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/MountVertexLLamaBase:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/MountVertexLLama:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:alma/Control/MountVertexLLamaCompSimBase:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Control::MountVertexLLamaCompSimBase::_interface_repository_id (void) const
{
  return "IDL:alma/Control/MountVertexLLamaCompSimBase:1.0";
}

::CORBA::Boolean
Control::MountVertexLLamaCompSimBase::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Control_MountVertexLLamaCompSimBase (
    ::CORBA::tk_objref,
    "IDL:alma/Control/MountVertexLLamaCompSimBase:1.0",
    "MountVertexLLamaCompSimBase");
  

namespace Control
{
  ::CORBA::TypeCode_ptr const _tc_MountVertexLLamaCompSimBase =
    &_tao_tc_Control_MountVertexLLamaCompSimBase;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:49
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Control::MountVertexLLamaCompSimBase>::to_object (
      ::CORBA::Object_ptr &_tao_elem
    ) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Control
{
  
  
  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      MountVertexLLamaCompSimBase_ptr _tao_elem)
  {
    MountVertexLLamaCompSimBase_ptr _tao_objptr =
      MountVertexLLamaCompSimBase::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }
  
  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      MountVertexLLamaCompSimBase_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<MountVertexLLamaCompSimBase>::insert (
        _tao_any,
        MountVertexLLamaCompSimBase::_tao_any_destructor,
        _tc_MountVertexLLamaCompSimBase,
        *_tao_elem)
  }
  
  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      MountVertexLLamaCompSimBase_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<MountVertexLLamaCompSimBase>::extract (
          _tao_any,
          MountVertexLLamaCompSimBase::_tao_any_destructor,
          _tc_MountVertexLLamaCompSimBase,
          _tao_elem)
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Control::MountVertexLLamaCompSimBase_ptr _tao_elem)
{
  Control::MountVertexLLamaCompSimBase_ptr _tao_objptr =
    Control::MountVertexLLamaCompSimBase::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Control::MountVertexLLamaCompSimBase_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Control::MountVertexLLamaCompSimBase>::insert (
      _tao_any,
      Control::MountVertexLLamaCompSimBase::_tao_any_destructor,
      Control::_tc_MountVertexLLamaCompSimBase,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Control::MountVertexLLamaCompSimBase_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Control::MountVertexLLamaCompSimBase>::extract (
        _tao_any,
        Control::MountVertexLLamaCompSimBase::_tao_any_destructor,
        Control::_tc_MountVertexLLamaCompSimBase,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:54

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Control::MountVertexLLamaCompSimBase_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Control::MountVertexLLamaCompSimBase_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;
  
  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Control::MountVertexLLamaCompSimBase RHS_SCOPED_NAME;
  
  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (
        obj.in (),
        Control__TAO_MountVertexLLamaCompSimBase_Proxy_Broker_Factory_function_pointer
      );
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


