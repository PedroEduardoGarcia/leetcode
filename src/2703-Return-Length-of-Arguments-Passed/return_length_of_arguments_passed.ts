type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };

function argumentsLength_ts(...args: JSONValue[]): number {
    return args.length
};

/**
 * argumentsLength(1, 2, 3); // 3
 */

const args: JSONValue = [{}, null, "3"]

console.log(argumentsLength_ts(...args))