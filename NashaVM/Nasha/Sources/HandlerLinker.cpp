#include "./../Headers/HandlerLinker.hpp"
#include "./Handlers/Ret.cpp"
#include "./Handlers/LdcI4.cpp"
#include "./Handlers/Ldstr.cpp"
#include "./Handlers/Call.cpp"
#include "./Handlers/Nop.cpp"
#include "./Handlers/Pop.cpp"
#include "./Handlers/Ldsfld.cpp"
#include "./Handlers/Stsfld.cpp"
#include "./Handlers/Brfalse.cpp"
#include "./Handlers/Brtrue.cpp"
#include "./Handlers/Br.cpp"
#include "./Handlers/Ldloc.cpp"
#include "./Handlers/Stloc.cpp"
#include "./Handlers/Ldarg.cpp"
#include "./Handlers/Newarr.cpp"
#include "./Handlers/Castclass.cpp"
#include "./Handlers/Newobj.cpp"
#include "./Handlers/Dup.cpp"
#include "./Handlers/Ldftn.cpp"

#pragma managed(push,off)
/// <summary>
/// A class to link handlers to their pointers.
/// </summary>
HandlerLinker::HandlerLinker(OpcodeDiscover* discover)
{
	OpcodesPointers[discover->GetOpcodeAllocatedInto(0)] = &Ret::Run;	
	OpcodesPointers[discover->GetOpcodeAllocatedInto(1)] = &LdcI4::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(2)] = &Ldstr::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(3)] = &Call::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(4)] = &Nop::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(5)] = &Pop::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(6)] = &Ldsfld::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(7)] = &Stsfld::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(8)] = &Brfalse::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(9)] = &Brtrue::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(10)] = &Br::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(11)] = &Ldloc::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(12)] = &Stloc::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(13)] = &Ldarg::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(14)] = &Newarr::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(15)] = &Castclass::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(16)] = &Newobj::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(17)] = &Dup::Run;
	OpcodesPointers[discover->GetOpcodeAllocatedInto(18)] = &Ldftn::Run;

	DeserializationPointers[discover->GetOpcodeAllocatedInto(0)] = &Ret::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(1)] = &LdcI4::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(2)] = &Ldstr::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(3)] = &Call::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(4)] = &Nop::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(5)] = &Pop::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(6)] = &Ldsfld::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(7)] = &Stsfld::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(8)] = &Brfalse::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(9)] = &Brtrue::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(10)] = &Br::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(11)] = &Ldloc::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(12)] = &Stloc::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(13)] = &Ldarg::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(14)] = &Newarr::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(15)] = &Castclass::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(16)] = &Newobj::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(17)] = &Dup::Constructor;
	DeserializationPointers[discover->GetOpcodeAllocatedInto(18)] = &Ldftn::Constructor;
}
#pragma managed(pop)