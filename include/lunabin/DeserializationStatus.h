#ifndef LUNACHAT_INCLUDE_LUNABIN_DESERIALIZATIONSTATUS_H
#define LUNACHAT_INCLUDE_LUNABIN_DESERIALIZATIONSTATUS_H

namespace lunabin
{
    enum class DeserializationStatus
    {
        OK,
        BUFFER_TOO_SMALL_FOR_HEADER,
        BUFFER_TOO_SMALL_FOR_FULL_MESSAGE,
        INTERNAL_ERROR
    };
}

#endif //LUNACHAT_INCLUDE_LUNABIN_DESERIALIZATIONSTATUS_H
