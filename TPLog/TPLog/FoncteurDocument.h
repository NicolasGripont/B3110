#pragma once
#include "Document.h"

struct DocumentPtrComp
{
	bool operator()(const Document* A, const Document* B) const
	{
		return *(A) < *(B);
	}
};