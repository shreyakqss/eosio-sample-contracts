#include <eosio/eosio.hpp>

using namespace eosio;

class [[eosio::contract]] hello : public eosio::contract
{
public:
    using eosio::contract::contract;
    [[eosio::action]] void hi(eosio::name user, eosio::name id)
    {
        print("Hello, ", user, ". Your ID is:", id);
    }
};