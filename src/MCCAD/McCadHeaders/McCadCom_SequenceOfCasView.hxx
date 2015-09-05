// File generated by CPPExt (Value)
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadCom_SequenceOfCasView_HeaderFile
#define _McCadCom_SequenceOfCasView_HeaderFile

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_McCadCom_CasView_HeaderFile
#include <Handle_McCadCom_CasView.hxx>
#endif
#ifndef _Handle_McCadCom_SequenceNodeOfSequenceOfCasView_HeaderFile
#include <Handle_McCadCom_SequenceNodeOfSequenceOfCasView.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadCom_CasView;
class McCadCom_SequenceNodeOfSequenceOfCasView;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadCom_SequenceOfCasView  : public TCollection_BaseSequence {

public:

    void* operator new(size_t,void* anAddress) 
      {
        return anAddress;
      }
    void* operator new(size_t size) 
      { 
        return Standard::Allocate(size); 
      }
    void  operator delete(void *anAddress) 
      { 
        if (anAddress) Standard::Free((Standard_Address&)anAddress); 
      }
 // Methods PUBLIC
 // 

McCadCom_SequenceOfCasView();


Standard_EXPORT   void Clear() ;
~McCadCom_SequenceOfCasView()
{
  Clear();
}



Standard_EXPORT  const McCadCom_SequenceOfCasView& Assign(const McCadCom_SequenceOfCasView& Other) ;
 const McCadCom_SequenceOfCasView& operator =(const McCadCom_SequenceOfCasView& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void Append(const Handle(McCadCom_CasView)& T) ;

  void Append(McCadCom_SequenceOfCasView& S) ;


Standard_EXPORT   void Prepend(const Handle(McCadCom_CasView)& T) ;

  void Prepend(McCadCom_SequenceOfCasView& S) ;

  void InsertBefore(const Standard_Integer Index,const Handle(McCadCom_CasView)& T) ;

  void InsertBefore(const Standard_Integer Index,McCadCom_SequenceOfCasView& S) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer Index,const Handle(McCadCom_CasView)& T) ;

  void InsertAfter(const Standard_Integer Index,McCadCom_SequenceOfCasView& S) ;


Standard_EXPORT  const Handle_McCadCom_CasView& First() const;


Standard_EXPORT  const Handle_McCadCom_CasView& Last() const;

  void Split(const Standard_Integer Index,McCadCom_SequenceOfCasView& Sub) ;


Standard_EXPORT  const Handle_McCadCom_CasView& Value(const Standard_Integer Index) const;
 const Handle_McCadCom_CasView& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}



Standard_EXPORT   void SetValue(const Standard_Integer Index,const Handle(McCadCom_CasView)& I) ;


Standard_EXPORT   Handle_McCadCom_CasView& ChangeValue(const Standard_Integer Index) ;
  Handle_McCadCom_CasView& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}



Standard_EXPORT   void Remove(const Standard_Integer Index) ;


Standard_EXPORT   void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT McCadCom_SequenceOfCasView(const McCadCom_SequenceOfCasView& Other);


 // Fields PRIVATE
 //


};

#define SeqItem Handle_McCadCom_CasView
#define SeqItem_hxx <McCadCom_CasView.hxx>
#define TCollection_SequenceNode McCadCom_SequenceNodeOfSequenceOfCasView
#define TCollection_SequenceNode_hxx <McCadCom_SequenceNodeOfSequenceOfCasView.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadCom_SequenceNodeOfSequenceOfCasView
#define TCollection_SequenceNode_Type_() McCadCom_SequenceNodeOfSequenceOfCasView_Type_()
#define TCollection_Sequence McCadCom_SequenceOfCasView
#define TCollection_Sequence_hxx <McCadCom_SequenceOfCasView.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)
//


#endif