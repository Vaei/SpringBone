// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "SpringBoneEditor.h"
#include "SpringBone.h"
#include "PropertyEditorModule.h"

DEFINE_LOG_CATEGORY(LogSpringBoneEditor);

#define LOCTEXT_NAMESPACE "SpringBoneEditorModule"

void FSpringBoneEditor::StartupModule()
{
}

void FSpringBoneEditor::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSpringBoneEditor, SpringBoneEditor)