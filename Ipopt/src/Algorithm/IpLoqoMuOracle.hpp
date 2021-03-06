// Copyright (C) 2004, 2006 International Business Machines and others.
// All Rights Reserved.
// This code is published under the Eclipse Public License.
//
// Authors:  Carl Laird, Andreas Waechter     IBM    2004-08-13

#ifndef __IPLOQOMUORACLE_HPP__
#define __IPLOQOMUORACLE_HPP__

#include "IpMuOracle.hpp"

namespace Ipopt
{

/** Implementation of the LOQO formula for computing the
 *  barrier parameter.
 */
class LoqoMuOracle: public MuOracle
{
public:
   /**@name Constructors / Destructors */
   //@{
   /** Default Constructor */
   LoqoMuOracle();

   /** Destructor */
   virtual ~LoqoMuOracle();
   //@}

   virtual bool InitializeImpl(
      const OptionsList& options,
      const std::string& prefix
      );

   /** Method for computing the value of the barrier parameter that
    *  could be used in the current iteration (using the LOQO formula).
    */
   virtual bool CalculateMu(
      Number  mu_min,
      Number  mu_max,
      Number& new_mu
      );

private:
   /**@name Default Compiler Generated Methods
    * (Hidden to avoid implicit creation/calling).
    *
    * These methods are not implemented and
    * we do not want the compiler to implement
    * them for us, so we declare them private
    * and do not define them. This ensures that
    * they will not be implicitly created/called.
    */
   //@{
   /** Copy Constructor */
   LoqoMuOracle(
      const LoqoMuOracle&
      );

   /** Default Assignment Operator */
   void operator=(
      const LoqoMuOracle&
      );
   //@}

};

} // namespace Ipopt

#endif
