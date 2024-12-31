#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/editor/services/widgets/WidgetComponentType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGuideSensorOptions; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentGuideSensor : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // prevent constructor by default
    ScriptWidgetComponentGuideSensor& operator=(ScriptWidgetComponentGuideSensor const&);
    ScriptWidgetComponentGuideSensor(ScriptWidgetComponentGuideSensor const&);
    ScriptWidgetComponentGuideSensor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ScriptWidgetComponentGuideSensor() /*override*/ = default;

    // vIndex: 2
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentGuideSensor(
        ::Editor::ServiceProviderCollection&                                             serviceProviders,
        ::mce::UUID const&                                                               componentId,
        ::std::string const&                                                             componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>         owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                     parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions> options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentGuideSensor>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                             serviceProviders,
        ::mce::UUID const&                                                               componentId,
        ::std::string const&                                                             componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>         owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                     parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions> options
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
