#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename A, typename T>
class AutomaticID {
public:
    T id;

    using Type = A;

    [[nodiscard]] constexpr AutomaticID() : id(0) {}

    [[nodiscard]] constexpr AutomaticID(T x) : id(x) {}

    [[nodiscard]] constexpr operator T() const { return id; }

    [[nodiscard]] inline bool operator==(AutomaticID const& other) const
        requires(requires { id == other.id; })
    {
        return id == other.id;
    }
};

namespace std {
template <typename A, typename T>
class hash<AutomaticID<A, T>> {
public:
    size_t operator()(AutomaticID<A, T> const& dimId) const { return static_cast<size_t>(dimId.id); }
};
} // namespace std
