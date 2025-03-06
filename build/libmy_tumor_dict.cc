// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIaledIbiodynamomIv1dO05dO125dIdemodImy_tumordIbuilddIlibmy_tumor_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/home/ale/biodynamo-v1.05.125/demo/my_tumor/src/brownian.h"
#include "/home/ale/biodynamo-v1.05.125/demo/my_tumor/src/my_tumor.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace bdm {
   namespace detail {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLdetail_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::detail", 0 /*version*/, "core/util/string.h", 38,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &bdmcLcLdetail_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLdetail_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace memory_manager_detail {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLmemory_manager_detail_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::memory_manager_detail", 0 /*version*/, "core/memory/memory_manager.h", 30,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &bdmcLcLmemory_manager_detail_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLmemory_manager_detail_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace experimental {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLexperimental_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::experimental", 0 /*version*/, "core/simulation.h", 42,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &bdmcLcLexperimental_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLexperimental_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace in_place_exec_ctxt_detail {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLin_place_exec_ctxt_detail_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::in_place_exec_ctxt_detail", 0 /*version*/, "core/execution_context/in_place_exec_ctxt.h", 37,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &bdmcLcLin_place_exec_ctxt_detail_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLin_place_exec_ctxt_detail_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace neuroscience {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLneuroscience_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::neuroscience", 0 /*version*/, "neuroscience/neuron_or_neurite.h", 27,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &bdmcLcLneuroscience_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLneuroscience_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace my_tumor {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLmy_tumor_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::my_tumor", 0 /*version*/, "", 23,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &bdmcLcLmy_tumor_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLmy_tumor_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR_Dictionary();
   static void bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR_TClassManip(TClass*);
   static void delete_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR(void *p);
   static void deleteArray_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR(void *p);
   static void destruct_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>*)
   {
      ::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>", "core/functor.h", 24,
                  typeid(::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>) );
      instance.SetDelete(&delete_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR);
      instance.SetDestructor(&destruct_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>","bdm::Functor<unsigned long, bdm::SharedData<unsigned long> const&>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>*>(nullptr))->GetClass();
      bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLAgentPointerlEbdmcLcLAgentgR_Dictionary();
   static void bdmcLcLAgentPointerlEbdmcLcLAgentgR_TClassManip(TClass*);
   static void *new_bdmcLcLAgentPointerlEbdmcLcLAgentgR(void *p = nullptr);
   static void *newArray_bdmcLcLAgentPointerlEbdmcLcLAgentgR(Long_t size, void *p);
   static void delete_bdmcLcLAgentPointerlEbdmcLcLAgentgR(void *p);
   static void deleteArray_bdmcLcLAgentPointerlEbdmcLcLAgentgR(void *p);
   static void destruct_bdmcLcLAgentPointerlEbdmcLcLAgentgR(void *p);
   static void streamer_bdmcLcLAgentPointerlEbdmcLcLAgentgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::AgentPointer<bdm::Agent>*)
   {
      ::bdm::AgentPointer<bdm::Agent> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::AgentPointer<bdm::Agent> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::AgentPointer<bdm::Agent>", ::bdm::AgentPointer<bdm::Agent>::Class_Version(), "core/agent/agent_pointer.h", 58,
                  typeid(::bdm::AgentPointer<bdm::Agent>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLAgentPointerlEbdmcLcLAgentgR_Dictionary, isa_proxy, 21,
                  sizeof(::bdm::AgentPointer<bdm::Agent>) );
      instance.SetNew(&new_bdmcLcLAgentPointerlEbdmcLcLAgentgR);
      instance.SetNewArray(&newArray_bdmcLcLAgentPointerlEbdmcLcLAgentgR);
      instance.SetDelete(&delete_bdmcLcLAgentPointerlEbdmcLcLAgentgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLAgentPointerlEbdmcLcLAgentgR);
      instance.SetDestructor(&destruct_bdmcLcLAgentPointerlEbdmcLcLAgentgR);
      instance.SetStreamerFunc(&streamer_bdmcLcLAgentPointerlEbdmcLcLAgentgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::AgentPointer<bdm::Agent>*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::AgentPointer<bdm::Agent>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::AgentPointer<bdm::Agent>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLAgentPointerlEbdmcLcLAgentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::bdm::AgentPointer<bdm::Agent>*>(nullptr))->GetClass();
      bdmcLcLAgentPointerlEbdmcLcLAgentgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLAgentPointerlEbdmcLcLAgentgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("noStreamer","true");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLAgentUidMaplEunsignedsPlonggR_Dictionary();
   static void bdmcLcLAgentUidMaplEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_bdmcLcLAgentUidMaplEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_bdmcLcLAgentUidMaplEunsignedsPlonggR(Long_t size, void *p);
   static void delete_bdmcLcLAgentUidMaplEunsignedsPlonggR(void *p);
   static void deleteArray_bdmcLcLAgentUidMaplEunsignedsPlonggR(void *p);
   static void destruct_bdmcLcLAgentUidMaplEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::AgentUidMap<unsigned long>*)
   {
      ::bdm::AgentUidMap<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::AgentUidMap<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::AgentUidMap<unsigned long>", "core/container/agent_uid_map.h", 31,
                  typeid(::bdm::AgentUidMap<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLAgentUidMaplEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::AgentUidMap<unsigned long>) );
      instance.SetNew(&new_bdmcLcLAgentUidMaplEunsignedsPlonggR);
      instance.SetNewArray(&newArray_bdmcLcLAgentUidMaplEunsignedsPlonggR);
      instance.SetDelete(&delete_bdmcLcLAgentUidMaplEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLAgentUidMaplEunsignedsPlonggR);
      instance.SetDestructor(&destruct_bdmcLcLAgentUidMaplEunsignedsPlonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::AgentUidMap<unsigned long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::AgentUidMap<unsigned long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::AgentUidMap<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLAgentUidMaplEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::bdm::AgentUidMap<unsigned long>*>(nullptr))->GetClass();
      bdmcLcLAgentUidMaplEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLAgentUidMaplEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator_Dictionary();
   static void bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator_TClassManip(TClass*);
   static void *new_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(void *p = nullptr);
   static void *newArray_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(Long_t size, void *p);
   static void delete_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(void *p);
   static void deleteArray_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(void *p);
   static void destruct_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SharedData<unsigned long>::Iterator*)
   {
      ::bdm::SharedData<unsigned long>::Iterator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::SharedData<unsigned long>::Iterator));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SharedData<unsigned long>::Iterator", "core/container/shared_data.h", 78,
                  typeid(::bdm::SharedData<unsigned long>::Iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SharedData<unsigned long>::Iterator) );
      instance.SetNew(&new_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator);
      instance.SetNewArray(&newArray_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator);
      instance.SetDelete(&delete_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator);
      instance.SetDestructor(&destruct_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SharedData<unsigned long>::Iterator*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::SharedData<unsigned long>::Iterator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::SharedData<unsigned long>::Iterator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::bdm::SharedData<unsigned long>::Iterator*>(nullptr))->GetClass();
      bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSharedDatalEdoublegR_Dictionary();
   static void bdmcLcLSharedDatalEdoublegR_TClassManip(TClass*);
   static void *new_bdmcLcLSharedDatalEdoublegR(void *p = nullptr);
   static void *newArray_bdmcLcLSharedDatalEdoublegR(Long_t size, void *p);
   static void delete_bdmcLcLSharedDatalEdoublegR(void *p);
   static void deleteArray_bdmcLcLSharedDatalEdoublegR(void *p);
   static void destruct_bdmcLcLSharedDatalEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SharedData<double>*)
   {
      ::bdm::SharedData<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SharedData<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SharedData<double>", ::bdm::SharedData<double>::Class_Version(), "core/container/shared_data.h", 48,
                  typeid(::bdm::SharedData<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSharedDatalEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SharedData<double>) );
      instance.SetNew(&new_bdmcLcLSharedDatalEdoublegR);
      instance.SetNewArray(&newArray_bdmcLcLSharedDatalEdoublegR);
      instance.SetDelete(&delete_bdmcLcLSharedDatalEdoublegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSharedDatalEdoublegR);
      instance.SetDestructor(&destruct_bdmcLcLSharedDatalEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SharedData<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::SharedData<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::SharedData<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSharedDatalEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::bdm::SharedData<double>*>(nullptr))->GetClass();
      bdmcLcLSharedDatalEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSharedDatalEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSharedDatalEfloatgR_Dictionary();
   static void bdmcLcLSharedDatalEfloatgR_TClassManip(TClass*);
   static void *new_bdmcLcLSharedDatalEfloatgR(void *p = nullptr);
   static void *newArray_bdmcLcLSharedDatalEfloatgR(Long_t size, void *p);
   static void delete_bdmcLcLSharedDatalEfloatgR(void *p);
   static void deleteArray_bdmcLcLSharedDatalEfloatgR(void *p);
   static void destruct_bdmcLcLSharedDatalEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SharedData<float>*)
   {
      ::bdm::SharedData<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SharedData<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SharedData<float>", ::bdm::SharedData<float>::Class_Version(), "core/container/shared_data.h", 48,
                  typeid(::bdm::SharedData<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSharedDatalEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SharedData<float>) );
      instance.SetNew(&new_bdmcLcLSharedDatalEfloatgR);
      instance.SetNewArray(&newArray_bdmcLcLSharedDatalEfloatgR);
      instance.SetDelete(&delete_bdmcLcLSharedDatalEfloatgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSharedDatalEfloatgR);
      instance.SetDestructor(&destruct_bdmcLcLSharedDatalEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SharedData<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::SharedData<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::SharedData<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSharedDatalEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::bdm::SharedData<float>*>(nullptr))->GetClass();
      bdmcLcLSharedDatalEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSharedDatalEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSumReductionlEunsignedsPlonggR_Dictionary();
   static void bdmcLcLSumReductionlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_bdmcLcLSumReductionlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_bdmcLcLSumReductionlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_bdmcLcLSumReductionlEunsignedsPlonggR(void *p);
   static void deleteArray_bdmcLcLSumReductionlEunsignedsPlonggR(void *p);
   static void destruct_bdmcLcLSumReductionlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SumReduction<unsigned long>*)
   {
      ::bdm::SumReduction<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::SumReduction<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SumReduction<unsigned long>", "core/operation/reduction_op.h", 87,
                  typeid(::bdm::SumReduction<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSumReductionlEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SumReduction<unsigned long>) );
      instance.SetNew(&new_bdmcLcLSumReductionlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_bdmcLcLSumReductionlEunsignedsPlonggR);
      instance.SetDelete(&delete_bdmcLcLSumReductionlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSumReductionlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_bdmcLcLSumReductionlEunsignedsPlonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SumReduction<unsigned long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::SumReduction<unsigned long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::SumReduction<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSumReductionlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::bdm::SumReduction<unsigned long>*>(nullptr))->GetClass();
      bdmcLcLSumReductionlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSumReductionlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLProgressBar_Dictionary();
   static void bdmcLcLProgressBar_TClassManip(TClass*);
   static void *new_bdmcLcLProgressBar(void *p = nullptr);
   static void *newArray_bdmcLcLProgressBar(Long_t size, void *p);
   static void delete_bdmcLcLProgressBar(void *p);
   static void deleteArray_bdmcLcLProgressBar(void *p);
   static void destruct_bdmcLcLProgressBar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ProgressBar*)
   {
      ::bdm::ProgressBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ProgressBar));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ProgressBar", "core/util/progress_bar.h", 40,
                  typeid(::bdm::ProgressBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLProgressBar_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ProgressBar) );
      instance.SetNew(&new_bdmcLcLProgressBar);
      instance.SetNewArray(&newArray_bdmcLcLProgressBar);
      instance.SetDelete(&delete_bdmcLcLProgressBar);
      instance.SetDeleteArray(&deleteArray_bdmcLcLProgressBar);
      instance.SetDestructor(&destruct_bdmcLcLProgressBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ProgressBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::ProgressBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::ProgressBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLProgressBar_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::bdm::ProgressBar*>(nullptr))->GetClass();
      bdmcLcLProgressBar_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLProgressBar_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_bdmcLcLVectorField(void *p);
   static void deleteArray_bdmcLcLVectorField(void *p);
   static void destruct_bdmcLcLVectorField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::VectorField*)
   {
      ::bdm::VectorField *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::VectorField >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::VectorField", ::bdm::VectorField::Class_Version(), "core/diffusion/continuum_interface.h", 148,
                  typeid(::bdm::VectorField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::VectorField::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::VectorField) );
      instance.SetDelete(&delete_bdmcLcLVectorField);
      instance.SetDeleteArray(&deleteArray_bdmcLcLVectorField);
      instance.SetDestructor(&destruct_bdmcLcLVectorField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::VectorField*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::VectorField*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::VectorField*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLBrownianMotion(void *p = nullptr);
   static void *newArray_bdmcLcLBrownianMotion(Long_t size, void *p);
   static void delete_bdmcLcLBrownianMotion(void *p);
   static void deleteArray_bdmcLcLBrownianMotion(void *p);
   static void destruct_bdmcLcLBrownianMotion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::BrownianMotion*)
   {
      ::bdm::BrownianMotion *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::BrownianMotion >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::BrownianMotion", ::bdm::BrownianMotion::Class_Version(), "", 31,
                  typeid(::bdm::BrownianMotion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::BrownianMotion::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::BrownianMotion) );
      instance.SetNew(&new_bdmcLcLBrownianMotion);
      instance.SetNewArray(&newArray_bdmcLcLBrownianMotion);
      instance.SetDelete(&delete_bdmcLcLBrownianMotion);
      instance.SetDeleteArray(&deleteArray_bdmcLcLBrownianMotion);
      instance.SetDestructor(&destruct_bdmcLcLBrownianMotion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::BrownianMotion*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::BrownianMotion*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::BrownianMotion*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLmy_tumorcLcLMyTumorCell(void *p = nullptr);
   static void delete_bdmcLcLmy_tumorcLcLMyTumorCell(void *p);
   static void deleteArray_bdmcLcLmy_tumorcLcLMyTumorCell(void *p);
   static void destruct_bdmcLcLmy_tumorcLcLMyTumorCell(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::my_tumor::MyTumorCell*)
   {
      ::bdm::my_tumor::MyTumorCell *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::my_tumor::MyTumorCell >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::my_tumor::MyTumorCell", ::bdm::my_tumor::MyTumorCell::Class_Version(), "", 78,
                  typeid(::bdm::my_tumor::MyTumorCell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::my_tumor::MyTumorCell::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::my_tumor::MyTumorCell) );
      instance.SetNew(&new_bdmcLcLmy_tumorcLcLMyTumorCell);
      instance.SetDelete(&delete_bdmcLcLmy_tumorcLcLMyTumorCell);
      instance.SetDeleteArray(&deleteArray_bdmcLcLmy_tumorcLcLMyTumorCell);
      instance.SetDestructor(&destruct_bdmcLcLmy_tumorcLcLMyTumorCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::my_tumor::MyTumorCell*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::my_tumor::MyTumorCell*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::my_tumor::MyTumorCell*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLmy_tumorcLcLGrowth(void *p = nullptr);
   static void *newArray_bdmcLcLmy_tumorcLcLGrowth(Long_t size, void *p);
   static void delete_bdmcLcLmy_tumorcLcLGrowth(void *p);
   static void deleteArray_bdmcLcLmy_tumorcLcLGrowth(void *p);
   static void destruct_bdmcLcLmy_tumorcLcLGrowth(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::my_tumor::Growth*)
   {
      ::bdm::my_tumor::Growth *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::my_tumor::Growth >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::my_tumor::Growth", ::bdm::my_tumor::Growth::Class_Version(), "", 124,
                  typeid(::bdm::my_tumor::Growth), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::my_tumor::Growth::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::my_tumor::Growth) );
      instance.SetNew(&new_bdmcLcLmy_tumorcLcLGrowth);
      instance.SetNewArray(&newArray_bdmcLcLmy_tumorcLcLGrowth);
      instance.SetDelete(&delete_bdmcLcLmy_tumorcLcLGrowth);
      instance.SetDeleteArray(&deleteArray_bdmcLcLmy_tumorcLcLGrowth);
      instance.SetDestructor(&destruct_bdmcLcLmy_tumorcLcLGrowth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::my_tumor::Growth*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::my_tumor::Growth*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::my_tumor::Growth*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLmy_tumorcLcLTumorBrownianMotion(void *p = nullptr);
   static void *newArray_bdmcLcLmy_tumorcLcLTumorBrownianMotion(Long_t size, void *p);
   static void delete_bdmcLcLmy_tumorcLcLTumorBrownianMotion(void *p);
   static void deleteArray_bdmcLcLmy_tumorcLcLTumorBrownianMotion(void *p);
   static void destruct_bdmcLcLmy_tumorcLcLTumorBrownianMotion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::my_tumor::TumorBrownianMotion*)
   {
      ::bdm::my_tumor::TumorBrownianMotion *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::my_tumor::TumorBrownianMotion >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::my_tumor::TumorBrownianMotion", ::bdm::my_tumor::TumorBrownianMotion::Class_Version(), "", 153,
                  typeid(::bdm::my_tumor::TumorBrownianMotion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::my_tumor::TumorBrownianMotion::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::my_tumor::TumorBrownianMotion) );
      instance.SetNew(&new_bdmcLcLmy_tumorcLcLTumorBrownianMotion);
      instance.SetNewArray(&newArray_bdmcLcLmy_tumorcLcLTumorBrownianMotion);
      instance.SetDelete(&delete_bdmcLcLmy_tumorcLcLTumorBrownianMotion);
      instance.SetDeleteArray(&deleteArray_bdmcLcLmy_tumorcLcLTumorBrownianMotion);
      instance.SetDestructor(&destruct_bdmcLcLmy_tumorcLcLTumorBrownianMotion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::my_tumor::TumorBrownianMotion*)
   {
      return GenerateInitInstanceLocal(static_cast<::bdm::my_tumor::TumorBrownianMotion*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::bdm::my_tumor::TumorBrownianMotion*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr AgentPointer<bdm::Agent>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *AgentPointer<bdm::Agent>::Class_Name()
{
   return "bdm::AgentPointer<bdm::Agent>";
}

//______________________________________________________________________________
template <> const char *AgentPointer<bdm::Agent>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::AgentPointer<bdm::Agent>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int AgentPointer<bdm::Agent>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::AgentPointer<bdm::Agent>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *AgentPointer<bdm::Agent>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::AgentPointer<bdm::Agent>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *AgentPointer<bdm::Agent>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::AgentPointer<bdm::Agent>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr SharedData<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *SharedData<double>::Class_Name()
{
   return "bdm::SharedData<double>";
}

//______________________________________________________________________________
template <> const char *SharedData<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SharedData<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int SharedData<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SharedData<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *SharedData<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SharedData<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *SharedData<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SharedData<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr SharedData<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *SharedData<float>::Class_Name()
{
   return "bdm::SharedData<float>";
}

//______________________________________________________________________________
template <> const char *SharedData<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SharedData<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int SharedData<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SharedData<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *SharedData<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SharedData<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *SharedData<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SharedData<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
atomic_TClass_ptr VectorField::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *VectorField::Class_Name()
{
   return "bdm::VectorField";
}

//______________________________________________________________________________
const char *VectorField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::VectorField*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int VectorField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::VectorField*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VectorField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::VectorField*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VectorField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::VectorField*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
atomic_TClass_ptr BrownianMotion::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BrownianMotion::Class_Name()
{
   return "bdm::BrownianMotion";
}

//______________________________________________________________________________
const char *BrownianMotion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::BrownianMotion*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BrownianMotion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::BrownianMotion*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BrownianMotion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::BrownianMotion*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BrownianMotion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::BrownianMotion*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
   namespace my_tumor {
//______________________________________________________________________________
atomic_TClass_ptr MyTumorCell::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MyTumorCell::Class_Name()
{
   return "bdm::my_tumor::MyTumorCell";
}

//______________________________________________________________________________
const char *MyTumorCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::MyTumorCell*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MyTumorCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::MyTumorCell*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MyTumorCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::MyTumorCell*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MyTumorCell::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::MyTumorCell*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace bdm::my_tumor
} // namespace bdm::my_tumor
namespace bdm {
   namespace my_tumor {
//______________________________________________________________________________
atomic_TClass_ptr Growth::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Growth::Class_Name()
{
   return "bdm::my_tumor::Growth";
}

//______________________________________________________________________________
const char *Growth::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::Growth*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Growth::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::Growth*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Growth::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::Growth*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Growth::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::Growth*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace bdm::my_tumor
} // namespace bdm::my_tumor
namespace bdm {
   namespace my_tumor {
//______________________________________________________________________________
atomic_TClass_ptr TumorBrownianMotion::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TumorBrownianMotion::Class_Name()
{
   return "bdm::my_tumor::TumorBrownianMotion";
}

//______________________________________________________________________________
const char *TumorBrownianMotion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::TumorBrownianMotion*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TumorBrownianMotion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::TumorBrownianMotion*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TumorBrownianMotion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::TumorBrownianMotion*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TumorBrownianMotion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::my_tumor::TumorBrownianMotion*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace bdm::my_tumor
} // namespace bdm::my_tumor
namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR(void *p) {
      delete (static_cast<::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>*>(p));
   }
   static void deleteArray_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR(void *p) {
      delete [] (static_cast<::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>*>(p));
   }
   static void destruct_bdmcLcLFunctorlEunsignedsPlongcOconstsPbdmcLcLSharedDatalEunsignedsPlonggRaNgR(void *p) {
      typedef ::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLAgentPointerlEbdmcLcLAgentgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::AgentPointer<bdm::Agent> : new ::bdm::AgentPointer<bdm::Agent>;
   }
   static void *newArray_bdmcLcLAgentPointerlEbdmcLcLAgentgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::AgentPointer<bdm::Agent>[nElements] : new ::bdm::AgentPointer<bdm::Agent>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLAgentPointerlEbdmcLcLAgentgR(void *p) {
      delete (static_cast<::bdm::AgentPointer<bdm::Agent>*>(p));
   }
   static void deleteArray_bdmcLcLAgentPointerlEbdmcLcLAgentgR(void *p) {
      delete [] (static_cast<::bdm::AgentPointer<bdm::Agent>*>(p));
   }
   static void destruct_bdmcLcLAgentPointerlEbdmcLcLAgentgR(void *p) {
      typedef ::bdm::AgentPointer<bdm::Agent> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_bdmcLcLAgentPointerlEbdmcLcLAgentgR(TBuffer &buf, void *obj) {
      ((::bdm::AgentPointer<bdm::Agent>*)obj)->::bdm::AgentPointer<bdm::Agent>::Streamer(buf);
   }
} // end of namespace ROOT for class ::bdm::AgentPointer<bdm::Agent>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLAgentUidMaplEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::AgentUidMap<unsigned long> : new ::bdm::AgentUidMap<unsigned long>;
   }
   static void *newArray_bdmcLcLAgentUidMaplEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::AgentUidMap<unsigned long>[nElements] : new ::bdm::AgentUidMap<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLAgentUidMaplEunsignedsPlonggR(void *p) {
      delete (static_cast<::bdm::AgentUidMap<unsigned long>*>(p));
   }
   static void deleteArray_bdmcLcLAgentUidMaplEunsignedsPlonggR(void *p) {
      delete [] (static_cast<::bdm::AgentUidMap<unsigned long>*>(p));
   }
   static void destruct_bdmcLcLAgentUidMaplEunsignedsPlonggR(void *p) {
      typedef ::bdm::AgentUidMap<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::AgentUidMap<unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::SharedData<unsigned long>::Iterator : new ::bdm::SharedData<unsigned long>::Iterator;
   }
   static void *newArray_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::SharedData<unsigned long>::Iterator[nElements] : new ::bdm::SharedData<unsigned long>::Iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(void *p) {
      delete (static_cast<::bdm::SharedData<unsigned long>::Iterator*>(p));
   }
   static void deleteArray_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(void *p) {
      delete [] (static_cast<::bdm::SharedData<unsigned long>::Iterator*>(p));
   }
   static void destruct_bdmcLcLSharedDatalEunsignedsPlonggRcLcLIterator(void *p) {
      typedef ::bdm::SharedData<unsigned long>::Iterator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SharedData<unsigned long>::Iterator

namespace bdm {
//______________________________________________________________________________
template <> void SharedData<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SharedData<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SharedData<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SharedData<double>::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSharedDatalEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::SharedData<double> : new ::bdm::SharedData<double>;
   }
   static void *newArray_bdmcLcLSharedDatalEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::SharedData<double>[nElements] : new ::bdm::SharedData<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSharedDatalEdoublegR(void *p) {
      delete (static_cast<::bdm::SharedData<double>*>(p));
   }
   static void deleteArray_bdmcLcLSharedDatalEdoublegR(void *p) {
      delete [] (static_cast<::bdm::SharedData<double>*>(p));
   }
   static void destruct_bdmcLcLSharedDatalEdoublegR(void *p) {
      typedef ::bdm::SharedData<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SharedData<double>

namespace bdm {
//______________________________________________________________________________
template <> void SharedData<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SharedData<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SharedData<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SharedData<float>::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSharedDatalEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::SharedData<float> : new ::bdm::SharedData<float>;
   }
   static void *newArray_bdmcLcLSharedDatalEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::SharedData<float>[nElements] : new ::bdm::SharedData<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSharedDatalEfloatgR(void *p) {
      delete (static_cast<::bdm::SharedData<float>*>(p));
   }
   static void deleteArray_bdmcLcLSharedDatalEfloatgR(void *p) {
      delete [] (static_cast<::bdm::SharedData<float>*>(p));
   }
   static void destruct_bdmcLcLSharedDatalEfloatgR(void *p) {
      typedef ::bdm::SharedData<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SharedData<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSumReductionlEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::SumReduction<unsigned long> : new ::bdm::SumReduction<unsigned long>;
   }
   static void *newArray_bdmcLcLSumReductionlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::SumReduction<unsigned long>[nElements] : new ::bdm::SumReduction<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSumReductionlEunsignedsPlonggR(void *p) {
      delete (static_cast<::bdm::SumReduction<unsigned long>*>(p));
   }
   static void deleteArray_bdmcLcLSumReductionlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<::bdm::SumReduction<unsigned long>*>(p));
   }
   static void destruct_bdmcLcLSumReductionlEunsignedsPlonggR(void *p) {
      typedef ::bdm::SumReduction<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SumReduction<unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLProgressBar(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::ProgressBar : new ::bdm::ProgressBar;
   }
   static void *newArray_bdmcLcLProgressBar(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::ProgressBar[nElements] : new ::bdm::ProgressBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLProgressBar(void *p) {
      delete (static_cast<::bdm::ProgressBar*>(p));
   }
   static void deleteArray_bdmcLcLProgressBar(void *p) {
      delete [] (static_cast<::bdm::ProgressBar*>(p));
   }
   static void destruct_bdmcLcLProgressBar(void *p) {
      typedef ::bdm::ProgressBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ProgressBar

namespace bdm {
//______________________________________________________________________________
void VectorField::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::VectorField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::VectorField::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::VectorField::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLVectorField(void *p) {
      delete (static_cast<::bdm::VectorField*>(p));
   }
   static void deleteArray_bdmcLcLVectorField(void *p) {
      delete [] (static_cast<::bdm::VectorField*>(p));
   }
   static void destruct_bdmcLcLVectorField(void *p) {
      typedef ::bdm::VectorField current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::VectorField

namespace bdm {
//______________________________________________________________________________
void BrownianMotion::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::BrownianMotion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::BrownianMotion::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::BrownianMotion::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLBrownianMotion(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::BrownianMotion : new ::bdm::BrownianMotion;
   }
   static void *newArray_bdmcLcLBrownianMotion(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::BrownianMotion[nElements] : new ::bdm::BrownianMotion[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLBrownianMotion(void *p) {
      delete (static_cast<::bdm::BrownianMotion*>(p));
   }
   static void deleteArray_bdmcLcLBrownianMotion(void *p) {
      delete [] (static_cast<::bdm::BrownianMotion*>(p));
   }
   static void destruct_bdmcLcLBrownianMotion(void *p) {
      typedef ::bdm::BrownianMotion current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::BrownianMotion

namespace bdm {
   namespace my_tumor {
//______________________________________________________________________________
void MyTumorCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::my_tumor::MyTumorCell.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::my_tumor::MyTumorCell::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::my_tumor::MyTumorCell::Class(),this);
   }
}

} // namespace bdm::my_tumor
} // namespace bdm::my_tumor
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLmy_tumorcLcLMyTumorCell(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::my_tumor::MyTumorCell( (TRootIOCtor *)nullptr ) : new ::bdm::my_tumor::MyTumorCell( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLmy_tumorcLcLMyTumorCell(void *p) {
      delete (static_cast<::bdm::my_tumor::MyTumorCell*>(p));
   }
   static void deleteArray_bdmcLcLmy_tumorcLcLMyTumorCell(void *p) {
      delete [] (static_cast<::bdm::my_tumor::MyTumorCell*>(p));
   }
   static void destruct_bdmcLcLmy_tumorcLcLMyTumorCell(void *p) {
      typedef ::bdm::my_tumor::MyTumorCell current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::my_tumor::MyTumorCell

namespace bdm {
   namespace my_tumor {
//______________________________________________________________________________
void Growth::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::my_tumor::Growth.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::my_tumor::Growth::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::my_tumor::Growth::Class(),this);
   }
}

} // namespace bdm::my_tumor
} // namespace bdm::my_tumor
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLmy_tumorcLcLGrowth(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::my_tumor::Growth : new ::bdm::my_tumor::Growth;
   }
   static void *newArray_bdmcLcLmy_tumorcLcLGrowth(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::my_tumor::Growth[nElements] : new ::bdm::my_tumor::Growth[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLmy_tumorcLcLGrowth(void *p) {
      delete (static_cast<::bdm::my_tumor::Growth*>(p));
   }
   static void deleteArray_bdmcLcLmy_tumorcLcLGrowth(void *p) {
      delete [] (static_cast<::bdm::my_tumor::Growth*>(p));
   }
   static void destruct_bdmcLcLmy_tumorcLcLGrowth(void *p) {
      typedef ::bdm::my_tumor::Growth current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::my_tumor::Growth

namespace bdm {
   namespace my_tumor {
//______________________________________________________________________________
void TumorBrownianMotion::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::my_tumor::TumorBrownianMotion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::my_tumor::TumorBrownianMotion::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::my_tumor::TumorBrownianMotion::Class(),this);
   }
}

} // namespace bdm::my_tumor
} // namespace bdm::my_tumor
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLmy_tumorcLcLTumorBrownianMotion(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::my_tumor::TumorBrownianMotion : new ::bdm::my_tumor::TumorBrownianMotion;
   }
   static void *newArray_bdmcLcLmy_tumorcLcLTumorBrownianMotion(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::bdm::my_tumor::TumorBrownianMotion[nElements] : new ::bdm::my_tumor::TumorBrownianMotion[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLmy_tumorcLcLTumorBrownianMotion(void *p) {
      delete (static_cast<::bdm::my_tumor::TumorBrownianMotion*>(p));
   }
   static void deleteArray_bdmcLcLmy_tumorcLcLTumorBrownianMotion(void *p) {
      delete [] (static_cast<::bdm::my_tumor::TumorBrownianMotion*>(p));
   }
   static void destruct_bdmcLcLmy_tumorcLcLTumorBrownianMotion(void *p) {
      typedef ::bdm::my_tumor::TumorBrownianMotion current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::bdm::my_tumor::TumorBrownianMotion

namespace ROOT {
   static TClass *vectorlEbdmcLcLSpinlockmUgR_Dictionary();
   static void vectorlEbdmcLcLSpinlockmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSpinlockmUgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLSpinlockmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSpinlockmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSpinlockmUgR(void *p);
   static void destruct_vectorlEbdmcLcLSpinlockmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Spinlock*>*)
   {
      vector<bdm::Spinlock*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Spinlock*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Spinlock*>", -2, "vector", 389,
                  typeid(vector<bdm::Spinlock*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSpinlockmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Spinlock*>) );
      instance.SetNew(&new_vectorlEbdmcLcLSpinlockmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSpinlockmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSpinlockmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSpinlockmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSpinlockmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Spinlock*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::Spinlock*>","std::vector<bdm::Spinlock*, std::allocator<bdm::Spinlock*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::Spinlock*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSpinlockmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::Spinlock*>*>(nullptr))->GetClass();
      vectorlEbdmcLcLSpinlockmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSpinlockmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSpinlockmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Spinlock*> : new vector<bdm::Spinlock*>;
   }
   static void *newArray_vectorlEbdmcLcLSpinlockmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Spinlock*>[nElements] : new vector<bdm::Spinlock*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSpinlockmUgR(void *p) {
      delete (static_cast<vector<bdm::Spinlock*>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLSpinlockmUgR(void *p) {
      delete [] (static_cast<vector<bdm::Spinlock*>*>(p));
   }
   static void destruct_vectorlEbdmcLcLSpinlockmUgR(void *p) {
      typedef vector<bdm::Spinlock*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Spinlock*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR_Dictionary();
   static void vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(void *p);
   static void destruct_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>*)
   {
      vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>", -2, "vector", 389,
                  typeid(vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>) );
      instance.SetNew(&new_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>","std::vector<bdm::SharedData<std::vector<bdm::AgentUid, std::allocator<bdm::AgentUid> > >::AlignedT, std::allocator<bdm::SharedData<std::vector<bdm::AgentUid, std::allocator<bdm::AgentUid> > >::AlignedT> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>*>(nullptr))->GetClass();
      vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT> : new vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>;
   }
   static void *newArray_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>[nElements] : new vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(void *p) {
      delete (static_cast<vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(void *p) {
      delete [] (static_cast<vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>*>(p));
   }
   static void destruct_vectorlEbdmcLcLSharedDatalEvectorlEbdmcLcLAgentUidgRsPgRcLcLAlignedTgR(void *p) {
      typedef vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SharedData<vector<bdm::AgentUid> >::AlignedT>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR_Dictionary();
   static void vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(void *p);
   static void destruct_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SharedData<unsigned long>::AlignedT>*)
   {
      vector<bdm::SharedData<unsigned long>::AlignedT> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SharedData<unsigned long>::AlignedT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SharedData<unsigned long>::AlignedT>", -2, "vector", 389,
                  typeid(vector<bdm::SharedData<unsigned long>::AlignedT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SharedData<unsigned long>::AlignedT>) );
      instance.SetNew(&new_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SharedData<unsigned long>::AlignedT> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::SharedData<unsigned long>::AlignedT>","std::vector<bdm::SharedData<unsigned long>::AlignedT, std::allocator<bdm::SharedData<unsigned long>::AlignedT> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<unsigned long>::AlignedT>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<unsigned long>::AlignedT>*>(nullptr))->GetClass();
      vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<unsigned long>::AlignedT> : new vector<bdm::SharedData<unsigned long>::AlignedT>;
   }
   static void *newArray_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<unsigned long>::AlignedT>[nElements] : new vector<bdm::SharedData<unsigned long>::AlignedT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(void *p) {
      delete (static_cast<vector<bdm::SharedData<unsigned long>::AlignedT>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(void *p) {
      delete [] (static_cast<vector<bdm::SharedData<unsigned long>::AlignedT>*>(p));
   }
   static void destruct_vectorlEbdmcLcLSharedDatalEunsignedsPlonggRcLcLAlignedTgR(void *p) {
      typedef vector<bdm::SharedData<unsigned long>::AlignedT> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SharedData<unsigned long>::AlignedT>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR_Dictionary();
   static void vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(void *p);
   static void destruct_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SharedData<float>::AlignedT>*)
   {
      vector<bdm::SharedData<float>::AlignedT> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SharedData<float>::AlignedT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SharedData<float>::AlignedT>", -2, "vector", 389,
                  typeid(vector<bdm::SharedData<float>::AlignedT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SharedData<float>::AlignedT>) );
      instance.SetNew(&new_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SharedData<float>::AlignedT> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::SharedData<float>::AlignedT>","std::vector<bdm::SharedData<float>::AlignedT, std::allocator<bdm::SharedData<float>::AlignedT> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<float>::AlignedT>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<float>::AlignedT>*>(nullptr))->GetClass();
      vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<float>::AlignedT> : new vector<bdm::SharedData<float>::AlignedT>;
   }
   static void *newArray_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<float>::AlignedT>[nElements] : new vector<bdm::SharedData<float>::AlignedT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(void *p) {
      delete (static_cast<vector<bdm::SharedData<float>::AlignedT>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(void *p) {
      delete [] (static_cast<vector<bdm::SharedData<float>::AlignedT>*>(p));
   }
   static void destruct_vectorlEbdmcLcLSharedDatalEfloatgRcLcLAlignedTgR(void *p) {
      typedef vector<bdm::SharedData<float>::AlignedT> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SharedData<float>::AlignedT>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR_Dictionary();
   static void vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(void *p);
   static void destruct_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SharedData<double>::AlignedT>*)
   {
      vector<bdm::SharedData<double>::AlignedT> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SharedData<double>::AlignedT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SharedData<double>::AlignedT>", -2, "vector", 389,
                  typeid(vector<bdm::SharedData<double>::AlignedT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SharedData<double>::AlignedT>) );
      instance.SetNew(&new_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SharedData<double>::AlignedT> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::SharedData<double>::AlignedT>","std::vector<bdm::SharedData<double>::AlignedT, std::allocator<bdm::SharedData<double>::AlignedT> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<double>::AlignedT>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<double>::AlignedT>*>(nullptr))->GetClass();
      vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<double>::AlignedT> : new vector<bdm::SharedData<double>::AlignedT>;
   }
   static void *newArray_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<double>::AlignedT>[nElements] : new vector<bdm::SharedData<double>::AlignedT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(void *p) {
      delete (static_cast<vector<bdm::SharedData<double>::AlignedT>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(void *p) {
      delete [] (static_cast<vector<bdm::SharedData<double>::AlignedT>*>(p));
   }
   static void destruct_vectorlEbdmcLcLSharedDatalEdoublegRcLcLAlignedTgR(void *p) {
      typedef vector<bdm::SharedData<double>::AlignedT> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SharedData<double>::AlignedT>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR_Dictionary();
   static void vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(void *p);
   static void destruct_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>*)
   {
      vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>", -2, "vector", 389,
                  typeid(vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>) );
      instance.SetNew(&new_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>","std::vector<bdm::SharedData<bdm::MathArray<double, 4ul> >::AlignedT, std::allocator<bdm::SharedData<bdm::MathArray<double, 4ul> >::AlignedT> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>*>(nullptr))->GetClass();
      vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT> : new vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>;
   }
   static void *newArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>[nElements] : new vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(void *p) {
      delete (static_cast<vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(void *p) {
      delete [] (static_cast<vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>*>(p));
   }
   static void destruct_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO4gRsPgRcLcLAlignedTgR(void *p) {
      typedef vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SharedData<bdm::MathArray<double,4> >::AlignedT>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR_Dictionary();
   static void vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(void *p);
   static void destruct_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>*)
   {
      vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>", -2, "vector", 389,
                  typeid(vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>) );
      instance.SetNew(&new_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>","std::vector<bdm::SharedData<bdm::MathArray<double, 3ul> >::AlignedT, std::allocator<bdm::SharedData<bdm::MathArray<double, 3ul> >::AlignedT> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>*>(nullptr))->GetClass();
      vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT> : new vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>;
   }
   static void *newArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>[nElements] : new vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(void *p) {
      delete (static_cast<vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(void *p) {
      delete [] (static_cast<vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>*>(p));
   }
   static void destruct_vectorlEbdmcLcLSharedDatalEbdmcLcLMathArraylEdoublecO3gRsPgRcLcLAlignedTgR(void *p) {
      typedef vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SharedData<bdm::MathArray<double,3> >::AlignedT>

namespace ROOT {
   static TClass *vectorlEbdmcLcLRandommUgR_Dictionary();
   static void vectorlEbdmcLcLRandommUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLRandommUgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLRandommUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLRandommUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLRandommUgR(void *p);
   static void destruct_vectorlEbdmcLcLRandommUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Random*>*)
   {
      vector<bdm::Random*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Random*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Random*>", -2, "vector", 389,
                  typeid(vector<bdm::Random*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLRandommUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Random*>) );
      instance.SetNew(&new_vectorlEbdmcLcLRandommUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLRandommUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLRandommUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLRandommUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLRandommUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Random*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::Random*>","std::vector<bdm::Random*, std::allocator<bdm::Random*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::Random*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLRandommUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::Random*>*>(nullptr))->GetClass();
      vectorlEbdmcLcLRandommUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLRandommUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLRandommUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Random*> : new vector<bdm::Random*>;
   }
   static void *newArray_vectorlEbdmcLcLRandommUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Random*>[nElements] : new vector<bdm::Random*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLRandommUgR(void *p) {
      delete (static_cast<vector<bdm::Random*>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLRandommUgR(void *p) {
      delete [] (static_cast<vector<bdm::Random*>*>(p));
   }
   static void destruct_vectorlEbdmcLcLRandommUgR(void *p) {
      typedef vector<bdm::Random*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Random*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary();
   static void vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);
   static void deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);
   static void destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Param::VisualizeDiffusion>*)
   {
      vector<bdm::Param::VisualizeDiffusion> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Param::VisualizeDiffusion>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Param::VisualizeDiffusion>", -2, "vector", 389,
                  typeid(vector<bdm::Param::VisualizeDiffusion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Param::VisualizeDiffusion>) );
      instance.SetNew(&new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDelete(&delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Param::VisualizeDiffusion> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::Param::VisualizeDiffusion>","std::vector<bdm::Param::VisualizeDiffusion, std::allocator<bdm::Param::VisualizeDiffusion> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::Param::VisualizeDiffusion>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::Param::VisualizeDiffusion>*>(nullptr))->GetClass();
      vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Param::VisualizeDiffusion> : new vector<bdm::Param::VisualizeDiffusion>;
   }
   static void *newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Param::VisualizeDiffusion>[nElements] : new vector<bdm::Param::VisualizeDiffusion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      delete (static_cast<vector<bdm::Param::VisualizeDiffusion>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      delete [] (static_cast<vector<bdm::Param::VisualizeDiffusion>*>(p));
   }
   static void destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      typedef vector<bdm::Param::VisualizeDiffusion> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Param::VisualizeDiffusion>

namespace ROOT {
   static TClass *vectorlEbdmcLcLOperationImplmUgR_Dictionary();
   static void vectorlEbdmcLcLOperationImplmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLOperationImplmUgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLOperationImplmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLOperationImplmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLOperationImplmUgR(void *p);
   static void destruct_vectorlEbdmcLcLOperationImplmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::OperationImpl*>*)
   {
      vector<bdm::OperationImpl*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::OperationImpl*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::OperationImpl*>", -2, "vector", 389,
                  typeid(vector<bdm::OperationImpl*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLOperationImplmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::OperationImpl*>) );
      instance.SetNew(&new_vectorlEbdmcLcLOperationImplmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLOperationImplmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLOperationImplmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLOperationImplmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLOperationImplmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::OperationImpl*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::OperationImpl*>","std::vector<bdm::OperationImpl*, std::allocator<bdm::OperationImpl*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::OperationImpl*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLOperationImplmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::OperationImpl*>*>(nullptr))->GetClass();
      vectorlEbdmcLcLOperationImplmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLOperationImplmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLOperationImplmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::OperationImpl*> : new vector<bdm::OperationImpl*>;
   }
   static void *newArray_vectorlEbdmcLcLOperationImplmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::OperationImpl*>[nElements] : new vector<bdm::OperationImpl*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLOperationImplmUgR(void *p) {
      delete (static_cast<vector<bdm::OperationImpl*>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLOperationImplmUgR(void *p) {
      delete [] (static_cast<vector<bdm::OperationImpl*>*>(p));
   }
   static void destruct_vectorlEbdmcLcLOperationImplmUgR(void *p) {
      typedef vector<bdm::OperationImpl*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::OperationImpl*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLOperationmUgR_Dictionary();
   static void vectorlEbdmcLcLOperationmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLOperationmUgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLOperationmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLOperationmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLOperationmUgR(void *p);
   static void destruct_vectorlEbdmcLcLOperationmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Operation*>*)
   {
      vector<bdm::Operation*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Operation*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Operation*>", -2, "vector", 389,
                  typeid(vector<bdm::Operation*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLOperationmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Operation*>) );
      instance.SetNew(&new_vectorlEbdmcLcLOperationmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLOperationmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLOperationmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLOperationmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLOperationmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Operation*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::Operation*>","std::vector<bdm::Operation*, std::allocator<bdm::Operation*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::Operation*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLOperationmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::Operation*>*>(nullptr))->GetClass();
      vectorlEbdmcLcLOperationmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLOperationmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLOperationmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Operation*> : new vector<bdm::Operation*>;
   }
   static void *newArray_vectorlEbdmcLcLOperationmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Operation*>[nElements] : new vector<bdm::Operation*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLOperationmUgR(void *p) {
      delete (static_cast<vector<bdm::Operation*>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLOperationmUgR(void *p) {
      delete [] (static_cast<vector<bdm::Operation*>*>(p));
   }
   static void destruct_vectorlEbdmcLcLOperationmUgR(void *p) {
      typedef vector<bdm::Operation*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Operation*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary();
   static void vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::MathArray<double,3> >*)
   {
      vector<bdm::MathArray<double,3> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::MathArray<double,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::MathArray<double,3> >", -2, "vector", 389,
                  typeid(vector<bdm::MathArray<double,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::MathArray<double,3> >) );
      instance.SetNew(&new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::MathArray<double,3> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::MathArray<double,3> >","std::vector<bdm::MathArray<double, 3ul>, std::allocator<bdm::MathArray<double, 3ul> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::MathArray<double,3> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::MathArray<double,3> >*>(nullptr))->GetClass();
      vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::MathArray<double,3> > : new vector<bdm::MathArray<double,3> >;
   }
   static void *newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::MathArray<double,3> >[nElements] : new vector<bdm::MathArray<double,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete (static_cast<vector<bdm::MathArray<double,3> >*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete [] (static_cast<vector<bdm::MathArray<double,3> >*>(p));
   }
   static void destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      typedef vector<bdm::MathArray<double,3> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::MathArray<double,3> >

namespace ROOT {
   static TClass *vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR_Dictionary();
   static void vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(void *p);
   static void destruct_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Functor<bool,bdm::Agent*>*>*)
   {
      vector<bdm::Functor<bool,bdm::Agent*>*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Functor<bool,bdm::Agent*>*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Functor<bool,bdm::Agent*>*>", -2, "vector", 389,
                  typeid(vector<bdm::Functor<bool,bdm::Agent*>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Functor<bool,bdm::Agent*>*>) );
      instance.SetNew(&new_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Functor<bool,bdm::Agent*>*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::Functor<bool,bdm::Agent*>*>","std::vector<bdm::Functor<bool, bdm::Agent*>*, std::allocator<bdm::Functor<bool, bdm::Agent*>*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::Functor<bool,bdm::Agent*>*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::Functor<bool,bdm::Agent*>*>*>(nullptr))->GetClass();
      vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Functor<bool,bdm::Agent*>*> : new vector<bdm::Functor<bool,bdm::Agent*>*>;
   }
   static void *newArray_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Functor<bool,bdm::Agent*>*>[nElements] : new vector<bdm::Functor<bool,bdm::Agent*>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(void *p) {
      delete (static_cast<vector<bdm::Functor<bool,bdm::Agent*>*>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(void *p) {
      delete [] (static_cast<vector<bdm::Functor<bool,bdm::Agent*>*>*>(p));
   }
   static void destruct_vectorlEbdmcLcLFunctorlEboolcObdmcLcLAgentmUgRmUgR(void *p) {
      typedef vector<bdm::Functor<bool,bdm::Agent*>*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Functor<bool,bdm::Agent*>*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLExecutionContextmUgR_Dictionary();
   static void vectorlEbdmcLcLExecutionContextmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLExecutionContextmUgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLExecutionContextmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLExecutionContextmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLExecutionContextmUgR(void *p);
   static void destruct_vectorlEbdmcLcLExecutionContextmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::ExecutionContext*>*)
   {
      vector<bdm::ExecutionContext*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::ExecutionContext*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::ExecutionContext*>", -2, "vector", 389,
                  typeid(vector<bdm::ExecutionContext*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLExecutionContextmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::ExecutionContext*>) );
      instance.SetNew(&new_vectorlEbdmcLcLExecutionContextmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLExecutionContextmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLExecutionContextmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLExecutionContextmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLExecutionContextmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::ExecutionContext*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::ExecutionContext*>","std::vector<bdm::ExecutionContext*, std::allocator<bdm::ExecutionContext*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::ExecutionContext*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLExecutionContextmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::ExecutionContext*>*>(nullptr))->GetClass();
      vectorlEbdmcLcLExecutionContextmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLExecutionContextmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLExecutionContextmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::ExecutionContext*> : new vector<bdm::ExecutionContext*>;
   }
   static void *newArray_vectorlEbdmcLcLExecutionContextmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::ExecutionContext*>[nElements] : new vector<bdm::ExecutionContext*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLExecutionContextmUgR(void *p) {
      delete (static_cast<vector<bdm::ExecutionContext*>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLExecutionContextmUgR(void *p) {
      delete [] (static_cast<vector<bdm::ExecutionContext*>*>(p));
   }
   static void destruct_vectorlEbdmcLcLExecutionContextmUgR(void *p) {
      typedef vector<bdm::ExecutionContext*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::ExecutionContext*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLBehaviormUgR_Dictionary();
   static void vectorlEbdmcLcLBehaviormUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLBehaviormUgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLBehaviormUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLBehaviormUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLBehaviormUgR(void *p);
   static void destruct_vectorlEbdmcLcLBehaviormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Behavior*>*)
   {
      vector<bdm::Behavior*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Behavior*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Behavior*>", -2, "vector", 389,
                  typeid(vector<bdm::Behavior*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLBehaviormUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Behavior*>) );
      instance.SetNew(&new_vectorlEbdmcLcLBehaviormUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLBehaviormUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLBehaviormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLBehaviormUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLBehaviormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Behavior*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::Behavior*>","std::vector<bdm::Behavior*, std::allocator<bdm::Behavior*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::Behavior*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLBehaviormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::Behavior*>*>(nullptr))->GetClass();
      vectorlEbdmcLcLBehaviormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLBehaviormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLBehaviormUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Behavior*> : new vector<bdm::Behavior*>;
   }
   static void *newArray_vectorlEbdmcLcLBehaviormUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Behavior*>[nElements] : new vector<bdm::Behavior*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLBehaviormUgR(void *p) {
      delete (static_cast<vector<bdm::Behavior*>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLBehaviormUgR(void *p) {
      delete [] (static_cast<vector<bdm::Behavior*>*>(p));
   }
   static void destruct_vectorlEbdmcLcLBehaviormUgR(void *p) {
      typedef vector<bdm::Behavior*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Behavior*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLAgentUidgR_Dictionary();
   static void vectorlEbdmcLcLAgentUidgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLAgentUidgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLAgentUidgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLAgentUidgR(void *p);
   static void deleteArray_vectorlEbdmcLcLAgentUidgR(void *p);
   static void destruct_vectorlEbdmcLcLAgentUidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::AgentUid>*)
   {
      vector<bdm::AgentUid> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::AgentUid>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::AgentUid>", -2, "vector", 389,
                  typeid(vector<bdm::AgentUid>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLAgentUidgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::AgentUid>) );
      instance.SetNew(&new_vectorlEbdmcLcLAgentUidgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLAgentUidgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLAgentUidgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLAgentUidgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLAgentUidgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::AgentUid> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::AgentUid>","std::vector<bdm::AgentUid, std::allocator<bdm::AgentUid> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::AgentUid>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLAgentUidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::AgentUid>*>(nullptr))->GetClass();
      vectorlEbdmcLcLAgentUidgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLAgentUidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLAgentUidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::AgentUid> : new vector<bdm::AgentUid>;
   }
   static void *newArray_vectorlEbdmcLcLAgentUidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::AgentUid>[nElements] : new vector<bdm::AgentUid>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLAgentUidgR(void *p) {
      delete (static_cast<vector<bdm::AgentUid>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLAgentUidgR(void *p) {
      delete [] (static_cast<vector<bdm::AgentUid>*>(p));
   }
   static void destruct_vectorlEbdmcLcLAgentUidgR(void *p) {
      typedef vector<bdm::AgentUid> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::AgentUid>

namespace ROOT {
   static TClass *vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary();
   static void vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >*)
   {
      vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >", -2, "vector", 389,
                  typeid(vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >) );
      instance.SetNew(&new_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >","std::vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement>, std::allocator<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >*>(nullptr))->GetClass();
      vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> > : new vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >;
   }
   static void *newArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >[nElements] : new vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete (static_cast<vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete [] (static_cast<vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >*>(p));
   }
   static void destruct_vectorlEbdmcLcLAgentPointerlEbdmcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      typedef vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::AgentPointer<bdm::neuroscience::NeuriteElement> >

namespace ROOT {
   static TClass *vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR_Dictionary();
   static void vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::AgentPointer<bdm::Agent> >*)
   {
      vector<bdm::AgentPointer<bdm::Agent> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::AgentPointer<bdm::Agent> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::AgentPointer<bdm::Agent> >", -2, "vector", 389,
                  typeid(vector<bdm::AgentPointer<bdm::Agent> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::AgentPointer<bdm::Agent> >) );
      instance.SetNew(&new_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::AgentPointer<bdm::Agent> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::AgentPointer<bdm::Agent> >","std::vector<bdm::AgentPointer<bdm::Agent>, std::allocator<bdm::AgentPointer<bdm::Agent> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::AgentPointer<bdm::Agent> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::AgentPointer<bdm::Agent> >*>(nullptr))->GetClass();
      vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::AgentPointer<bdm::Agent> > : new vector<bdm::AgentPointer<bdm::Agent> >;
   }
   static void *newArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::AgentPointer<bdm::Agent> >[nElements] : new vector<bdm::AgentPointer<bdm::Agent> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(void *p) {
      delete (static_cast<vector<bdm::AgentPointer<bdm::Agent> >*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(void *p) {
      delete [] (static_cast<vector<bdm::AgentPointer<bdm::Agent> >*>(p));
   }
   static void destruct_vectorlEbdmcLcLAgentPointerlEbdmcLcLAgentgRsPgR(void *p) {
      typedef vector<bdm::AgentPointer<bdm::Agent> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::AgentPointer<bdm::Agent> >

namespace ROOT {
   static TClass *vectorlEbdmcLcLAgentHandlegR_Dictionary();
   static void vectorlEbdmcLcLAgentHandlegR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLAgentHandlegR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLAgentHandlegR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLAgentHandlegR(void *p);
   static void deleteArray_vectorlEbdmcLcLAgentHandlegR(void *p);
   static void destruct_vectorlEbdmcLcLAgentHandlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::AgentHandle>*)
   {
      vector<bdm::AgentHandle> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::AgentHandle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::AgentHandle>", -2, "vector", 389,
                  typeid(vector<bdm::AgentHandle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLAgentHandlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::AgentHandle>) );
      instance.SetNew(&new_vectorlEbdmcLcLAgentHandlegR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLAgentHandlegR);
      instance.SetDelete(&delete_vectorlEbdmcLcLAgentHandlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLAgentHandlegR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLAgentHandlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::AgentHandle> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::AgentHandle>","std::vector<bdm::AgentHandle, std::allocator<bdm::AgentHandle> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::AgentHandle>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLAgentHandlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::AgentHandle>*>(nullptr))->GetClass();
      vectorlEbdmcLcLAgentHandlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLAgentHandlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLAgentHandlegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::AgentHandle> : new vector<bdm::AgentHandle>;
   }
   static void *newArray_vectorlEbdmcLcLAgentHandlegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::AgentHandle>[nElements] : new vector<bdm::AgentHandle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLAgentHandlegR(void *p) {
      delete (static_cast<vector<bdm::AgentHandle>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLAgentHandlegR(void *p) {
      delete [] (static_cast<vector<bdm::AgentHandle>*>(p));
   }
   static void destruct_vectorlEbdmcLcLAgentHandlegR(void *p) {
      typedef vector<bdm::AgentHandle> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::AgentHandle>

namespace ROOT {
   static TClass *vectorlEbdmcLcLAgentmUgR_Dictionary();
   static void vectorlEbdmcLcLAgentmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLAgentmUgR(void *p = nullptr);
   static void *newArray_vectorlEbdmcLcLAgentmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLAgentmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLAgentmUgR(void *p);
   static void destruct_vectorlEbdmcLcLAgentmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Agent*>*)
   {
      vector<bdm::Agent*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Agent*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Agent*>", -2, "vector", 389,
                  typeid(vector<bdm::Agent*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLAgentmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Agent*>) );
      instance.SetNew(&new_vectorlEbdmcLcLAgentmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLAgentmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLAgentmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLAgentmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLAgentmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Agent*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bdm::Agent*>","std::vector<bdm::Agent*, std::allocator<bdm::Agent*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bdm::Agent*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLAgentmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bdm::Agent*>*>(nullptr))->GetClass();
      vectorlEbdmcLcLAgentmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLAgentmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLAgentmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Agent*> : new vector<bdm::Agent*>;
   }
   static void *newArray_vectorlEbdmcLcLAgentmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bdm::Agent*>[nElements] : new vector<bdm::Agent*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLAgentmUgR(void *p) {
      delete (static_cast<vector<bdm::Agent*>*>(p));
   }
   static void deleteArray_vectorlEbdmcLcLAgentmUgR(void *p) {
      delete [] (static_cast<vector<bdm::Agent*>*>(p));
   }
   static void destruct_vectorlEbdmcLcLAgentmUgR(void *p) {
      typedef vector<bdm::Agent*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Agent*>

namespace ROOT {
   static TClass *vectorlEarraylEdoublecO8gRsPgR_Dictionary();
   static void vectorlEarraylEdoublecO8gRsPgR_TClassManip(TClass*);
   static void *new_vectorlEarraylEdoublecO8gRsPgR(void *p = nullptr);
   static void *newArray_vectorlEarraylEdoublecO8gRsPgR(Long_t size, void *p);
   static void delete_vectorlEarraylEdoublecO8gRsPgR(void *p);
   static void deleteArray_vectorlEarraylEdoublecO8gRsPgR(void *p);
   static void destruct_vectorlEarraylEdoublecO8gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<array<double,8> >*)
   {
      vector<array<double,8> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<array<double,8> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<array<double,8> >", -2, "vector", 389,
                  typeid(vector<array<double,8> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEarraylEdoublecO8gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<array<double,8> >) );
      instance.SetNew(&new_vectorlEarraylEdoublecO8gRsPgR);
      instance.SetNewArray(&newArray_vectorlEarraylEdoublecO8gRsPgR);
      instance.SetDelete(&delete_vectorlEarraylEdoublecO8gRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEarraylEdoublecO8gRsPgR);
      instance.SetDestructor(&destruct_vectorlEarraylEdoublecO8gRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<array<double,8> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<array<double,8> >","std::vector<std::array<double, 8ul>, std::allocator<std::array<double, 8ul> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<array<double,8> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEarraylEdoublecO8gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<array<double,8> >*>(nullptr))->GetClass();
      vectorlEarraylEdoublecO8gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEarraylEdoublecO8gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEarraylEdoublecO8gRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<array<double,8> > : new vector<array<double,8> >;
   }
   static void *newArray_vectorlEarraylEdoublecO8gRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<array<double,8> >[nElements] : new vector<array<double,8> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEarraylEdoublecO8gRsPgR(void *p) {
      delete (static_cast<vector<array<double,8> >*>(p));
   }
   static void deleteArray_vectorlEarraylEdoublecO8gRsPgR(void *p) {
      delete [] (static_cast<vector<array<double,8> >*>(p));
   }
   static void destruct_vectorlEarraylEdoublecO8gRsPgR(void *p) {
      typedef vector<array<double,8> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<array<double,8> >

namespace {
  void TriggerDictionaryInitialization_libmy_tumor_dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libmy_tumor_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace bdm{struct __attribute__((annotate("$clingAutoload$core/operation/operation.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  OperationImpl;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/execution_context/execution_context.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ExecutionContext;}
namespace bdm{struct __attribute__((annotate("$clingAutoload$core/operation/operation.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Operation;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/util/random.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Random;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/agent/agent.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Agent;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/behavior/behavior.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Behavior;}
namespace bdm{template <typename TAgent = bdm::Agent> class __attribute__((annotate("$clingAutoload$core/agent/agent_pointer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  AgentPointer;
}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/agent/agent_uid.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  AgentUid;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/util/spinlock.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Spinlock;}
namespace bdm{template <typename TReturn, typename ...TArgs> class __attribute__((annotate("$clingAutoload$core/functor.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Functor;
}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/agent/agent_handle.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  AgentHandle;}
namespace bdm{namespace neuroscience{class __attribute__((annotate("$clingAutoload$neuroscience/neurite_element.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuriteElement;}}
namespace bdm{template <typename T> class __attribute__((annotate("$clingAutoload$core/container/shared_data.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SharedData;
}
namespace bdm{template <typename TValue> class __attribute__((annotate("$clingAutoload$core/container/agent_uid_map.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  AgentUidMap;
}
namespace bdm{template <typename T> struct __attribute__((annotate("$clingAutoload$core/operation/reduction_op.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SumReduction;
}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/util/progress_bar.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ProgressBar;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/diffusion/continuum_interface.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  VectorField;}
namespace bdm{struct BrownianMotion;}
namespace bdm{namespace my_tumor{class MyTumorCell;}}
namespace bdm{namespace my_tumor{struct Growth;}}
namespace bdm{namespace my_tumor{struct TumorBrownianMotion;}}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libmy_tumor_dict dictionary payload"

#ifndef BDMSYS
  #define BDMSYS /home/ale/biodynamo-v1.05.125
#endif
#ifndef USE_MPI
  #define USE_MPI 1
#endif
#ifndef USE_NUMA
  #define USE_NUMA 1
#endif
#ifndef USE_DICT
  #define USE_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef BROWNIAN_H_
#define BROWNIAN_H_

#include "biodynamo.h"

namespace bdm {

// Forward declaration to avoid circular dependency
namespace my_tumor {
class MyTumorCell;
}

// -----------------------------------------------------------------------------
// BrownianMotion: a behavior that adds random movement to cells to simulate
// thermal fluctuations and other random forces in the environment
// -----------------------------------------------------------------------------
struct BrownianMotion : public Behavior {
  BDM_BEHAVIOR_HEADER(BrownianMotion, Behavior, 1);

  BrownianMotion() : diffusion_coefficient_(0) { 
    AlwaysCopyToNew(); 
  }
  
  // Constructor with a single diffusion coefficient for all cells
  explicit BrownianMotion(double diffusion_coefficient) 
    : diffusion_coefficient_(diffusion_coefficient) { 
    AlwaysCopyToNew(); 
  }
  
  virtual ~BrownianMotion() {}

  void Run(Agent* agent) override {
    if (auto* cell = dynamic_cast<Cell*>(agent)) {
      auto* random = Simulation::GetActive()->GetRandom();
      
      // Create random displacement vector
      Real3 displacement = random->template UniformArray<3>(
          -diffusion_coefficient_, diffusion_coefficient_);
      
      // Apply the displacement to the cell
      cell->UpdatePosition(displacement);
    }
  }

  // Parameters
  double diffusion_coefficient_;  // Controls the magnitude of random movement
};

}  // namespace bdm

#endif  // BROWNIAN_H_#ifndef MY_TUMOR_H_
#define MY_TUMOR_H_

#include "biodynamo.h"
#include "brownian.h"

namespace bdm {
namespace my_tumor {

// -----------------------------------------------------------------------------
// MyTumorCell: a custom cell that models tumor and healthy cells
// -----------------------------------------------------------------------------
class MyTumorCell : public Cell {
  BDM_AGENT_HEADER(MyTumorCell, Cell, 1);

 public:
  MyTumorCell() : is_tumor_(false), cell_color_(0) {}
  
  explicit MyTumorCell(const Real3& position) : Base(position), 
                                                is_tumor_(false), 
                                                cell_color_(0) {}
  
  virtual ~MyTumorCell() {}

  // Copy constructor for cell division events
  MyTumorCell(const MyTumorCell& other) : Base(other), 
                                          is_tumor_(other.is_tumor_), 
                                          cell_color_(other.cell_color_) {}

  // Initialize during division
  void Initialize(const NewAgentEvent& event) override {
    Base::Initialize(event);
    if (auto* mother = dynamic_cast<MyTumorCell*>(event.existing_agent)) {
      is_tumor_ = mother->is_tumor_;
      cell_color_ = mother->cell_color_;
    }
  }

  // Getters and setters
  bool IsTumor() const { return is_tumor_; }
  void SetTumor(bool is_tumor) { 
    is_tumor_ = is_tumor; 
    // Set color based on cell type
    cell_color_ = is_tumor ? 2 : 1;  // Tumor cells are red (2), healthy cells are blue (1)
  }

  // Cell color for visualization
  void SetCellColor(int cell_color) { cell_color_ = cell_color; }
  int GetCellColor() const { return cell_color_; }

 private:
  bool is_tumor_;   // Whether this is a tumor cell
  int cell_color_;  // Cell color for visualization
};

// -----------------------------------------------------------------------------
// Growth behavior: simple behavior for cell growth and division
// -----------------------------------------------------------------------------
struct Growth : public Behavior {
  BDM_BEHAVIOR_HEADER(Growth, Behavior, 1);

  Growth() { AlwaysCopyToNew(); }
  virtual ~Growth() {}

  void Run(Agent* agent) override {
    if (auto* cell = dynamic_cast<MyTumorCell*>(agent)) {
      auto* random = Simulation::GetActive()->GetRandom();
      
      // Grow the cell until it reaches a given size
      if (cell->GetDiameter() < 8) {
        // Tumor cells grow faster than healthy cells
        double growth_rate = cell->IsTumor() ? 500 : 300;
        cell->ChangeVolume(growth_rate);
        
        // No random movement during growth - movement will be controlled solely by BrownianMotion
      } else {
        // Division probability is higher for tumor cells
        double division_probability = cell->IsTumor() ? 0.8 : 0.4;
        if (random->Uniform(0, 1) < division_probability) {
          cell->Divide();
        }
      }
    }
  }
};

// Custom Brownian motion behavior that handles tumor and healthy cells differently
struct TumorBrownianMotion : public Behavior {
  BDM_BEHAVIOR_HEADER(TumorBrownianMotion, Behavior, 1);

  TumorBrownianMotion() 
    : tumor_diffusion_(0), healthy_diffusion_(0) {
    AlwaysCopyToNew();
  }
  
  TumorBrownianMotion(double tumor_diffusion, double healthy_diffusion) 
    : tumor_diffusion_(tumor_diffusion), healthy_diffusion_(healthy_diffusion) {
    AlwaysCopyToNew();
  }
  
  virtual ~TumorBrownianMotion() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyTumorCell*>(agent);
    if (!cell) return;
    
    auto* random = Simulation::GetActive()->GetRandom();
    
    // Select diffusion coefficient based on cell type
    double coefficient = cell->IsTumor() ? tumor_diffusion_ : healthy_diffusion_;
    
    // Create random displacement vector
    Real3 displacement = random->template UniformArray<3>(-coefficient, coefficient);
    
    // Apply the displacement to the cell
    cell->UpdatePosition(displacement);
  }

  double tumor_diffusion_;    // Diffusion coefficient for tumor cells
  double healthy_diffusion_;  // Diffusion coefficient for healthy cells
};

// -----------------------------------------------------------------------------
// Simulate(): set up and run the simulation.
// -----------------------------------------------------------------------------
inline int Simulate(int argc, const char** argv) {
  // Define simulation parameters
  auto set_param = [](Param* param) {
    param->bound_space = Param::BoundSpaceMode::kClosed;
    param->min_bound = 0;
    param->max_bound = 100;  // Cube: 100 x 100 x 100
  };

  Simulation simulation(argc, argv, set_param);
  auto* ctxt = simulation.GetExecutionContext();
  auto* param = simulation.GetParam();
  auto* myrand = simulation.GetRandom();

  // Set Brownian motion parameters
  double tumor_diffusion = 0.5;    // Diffusion coefficient for tumor cells
  double healthy_diffusion = 0.1;  // Diffusion coefficient for healthy cells

  // Create a population of healthy cells
  size_t nb_of_healthy_cells = 100;
  for (size_t i = 0; i < nb_of_healthy_cells; ++i) {
    Real3 position = { myrand->Uniform(param->min_bound, param->max_bound),
                       myrand->Uniform(param->min_bound, param->max_bound),
                       myrand->Uniform(param->min_bound, param->max_bound) };
    
    // Create a healthy cell
    MyTumorCell* cell = new MyTumorCell(position);
    cell->SetDiameter(5);
    cell->SetTumor(false);  // This is a healthy cell
    cell->AddBehavior(new Growth());
    
    // Add our custom Brownian motion with cell type specific diffusion coefficients
    cell->AddBehavior(new TumorBrownianMotion(tumor_diffusion, healthy_diffusion));
    
    ctxt->AddAgent(cell);
  }

  // Create multiple tumor cells
  size_t nb_of_tumor_cells = 3; // Change this number to adjust how many tumor cells to create

  // Create tumor cells in random positions clustered near center
  for (size_t i = 0; i < nb_of_tumor_cells; ++i) {
    // Generate random position for tumor cell (clustered near center)
    Real3 position = { 
      myrand->Uniform(40, 60),   // X coordinate (clustered near center)
      myrand->Uniform(40, 60),   // Y coordinate (clustered near center)
      myrand->Uniform(40, 60)    // Z coordinate (clustered near center)
    };
    
    // Create a tumor cell
    MyTumorCell* tumor_cell = new MyTumorCell(position);
    tumor_cell->SetDiameter(6.5);
    tumor_cell->SetTumor(true);  // This is a tumor cell
    tumor_cell->AddBehavior(new Growth());
    
    // Add our custom Brownian motion with cell type specific diffusion coefficients
    tumor_cell->AddBehavior(new TumorBrownianMotion(tumor_diffusion, healthy_diffusion));
    
    ctxt->AddAgent(tumor_cell);
  }

  // Run the simulation for 100 time steps
  simulation.GetScheduler()->Simulate(100);

  // Count cells at the end
  size_t healthy_count = 0;
  size_t tumor_count = 0;
  
  simulation.GetResourceManager()->ForEachAgent([&](Agent* agent) {
    if (auto* cell = dynamic_cast<MyTumorCell*>(agent)) {
      if (cell->IsTumor()) {
        tumor_count++;
      } else {
        healthy_count++;
      }
    }
  });
  
  std::cout << "Simulation completed successfully!" << std::endl;
  std::cout << "Final counts - Healthy cells: " << healthy_count 
            << ", Tumor cells: " << tumor_count << std::endl;
  
  return 0;
}

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_TUMOR_H_
#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"bdm::AgentPointer<bdm::Agent>", payloadCode, "@",
"bdm::AgentUidMap<unsigned long>", payloadCode, "@",
"bdm::BrownianMotion", payloadCode, "@",
"bdm::Environment", payloadCode, "@",
"bdm::Functor<unsigned long,const bdm::SharedData<unsigned long>&>", payloadCode, "@",
"bdm::InPlaceExecutionContext", payloadCode, "@",
"bdm::Param::BoundSpaceMode", payloadCode, "@",
"bdm::Param::ExecutionOrder", payloadCode, "@",
"bdm::Param::MappedDataArrayMode", payloadCode, "@",
"bdm::Param::NumericalODESolver", payloadCode, "@",
"bdm::Param::ThreadSafetyMechanism", payloadCode, "@",
"bdm::ProgressBar", payloadCode, "@",
"bdm::SharedData<bdm::MathArray<double,3> >", payloadCode, "@",
"bdm::SharedData<bdm::MathArray<double,4> >", payloadCode, "@",
"bdm::SharedData<double>", payloadCode, "@",
"bdm::SharedData<float>", payloadCode, "@",
"bdm::SharedData<unsigned long>", payloadCode, "@",
"bdm::SharedData<vector<bdm::AgentUid> >", payloadCode, "@",
"bdm::SumReduction<unsigned long>", payloadCode, "@",
"bdm::UnorderedFlatmap<TClass*,vector<bdm::Agent*> >", payloadCode, "@",
"bdm::VectorField", payloadCode, "@",
"bdm::my_tumor::Growth", payloadCode, "@",
"bdm::my_tumor::MyTumorCell", payloadCode, "@",
"bdm::my_tumor::TumorBrownianMotion", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libmy_tumor_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libmy_tumor_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libmy_tumor_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libmy_tumor_dict() {
  TriggerDictionaryInitialization_libmy_tumor_dict_Impl();
}
