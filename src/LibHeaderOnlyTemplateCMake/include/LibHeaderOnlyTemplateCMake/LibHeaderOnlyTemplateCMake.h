#ifndef LIB_TEMPLATE_CMAKE_H
#define LIB_TEMPLATE_CMAKE_H

namespace LibTemplateCMake {

/**
 * \brief Computes the sum of two values.
 * \param op1 first input value.
 * \param op2 second input value.
 * \returns sum of op1 and op2.
 */
template<typename DatumType>
DatumType sum(DatumType op1, DatumType op2)
{
    return (op1 + op2);
}


/**
 * \brief Computes the difference of two values.
 * \param op1 first input value.
 * \param op2 second input value.
 * \returns difference of op1 and op2.
 */
template<typename DatumType>
DatumType sub(DatumType op1, DatumType op2)
{
    return (op1 - op2);
}

} // namespace LibTemplateCMake

#endif /* LIB_TEMPLATE_CMAKE_H */
